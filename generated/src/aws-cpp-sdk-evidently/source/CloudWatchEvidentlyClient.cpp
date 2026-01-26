/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/evidently/CloudWatchEvidentlyClient.h>
#include <aws/evidently/CloudWatchEvidentlyEndpointProvider.h>
#include <aws/evidently/CloudWatchEvidentlyErrorMarshaller.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchEvidently;
using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudWatchEvidently {
const char SERVICE_NAME[] = "evidently";
const char ALLOCATION_TAG[] = "CloudWatchEvidentlyClient";
}  // namespace CloudWatchEvidently
}  // namespace Aws
const char* CloudWatchEvidentlyClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudWatchEvidentlyClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider,
                                                     const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider,
                                                     const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudWatchEvidentlyClient::~CloudWatchEvidentlyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase>& CloudWatchEvidentlyClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudWatchEvidentlyClient::init(const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& config) {
  AWSClient::SetServiceClientName("Evidently");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "evidently");
}

void CloudWatchEvidentlyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
