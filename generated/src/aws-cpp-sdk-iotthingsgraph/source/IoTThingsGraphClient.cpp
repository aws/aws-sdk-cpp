/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>


#include <aws/iotthingsgraph/IoTThingsGraphClient.h>
#include <aws/iotthingsgraph/IoTThingsGraphErrorMarshaller.h>
#include <aws/iotthingsgraph/IoTThingsGraphEndpointProvider.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTThingsGraph;
using namespace Aws::IoTThingsGraph::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace IoTThingsGraph
  {
    const char ALLOCATION_TAG[] = "IoTThingsGraphClient";
    const char SERVICE_NAME[] = "iotthingsgraph";
  }
}
const char* IoTThingsGraphClient::GetServiceName() {return SERVICE_NAME;}
const char* IoTThingsGraphClient::GetAllocationTag() {return ALLOCATION_TAG;}

IoTThingsGraphClient::IoTThingsGraphClient(const IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration,
                           std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoTThingsGraph",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

IoTThingsGraphClient::IoTThingsGraphClient(const AWSCredentials& credentials,
                           std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider,
                           const IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoTThingsGraph",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

IoTThingsGraphClient::IoTThingsGraphClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<IoTThingsGraphEndpointProviderBase> endpointProvider,
                           const IoTThingsGraph::IoTThingsGraphClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoTThingsGraph",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
IoTThingsGraphClient::IoTThingsGraphClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "IoTThingsGraph",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

IoTThingsGraphClient::IoTThingsGraphClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoTThingsGraph",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

IoTThingsGraphClient::IoTThingsGraphClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "IoTThingsGraph",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<IoTThingsGraphErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<IoTThingsGraphEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

IoTThingsGraphClient::~IoTThingsGraphClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<IoTThingsGraphEndpointProviderBase>& IoTThingsGraphClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void IoTThingsGraphClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

