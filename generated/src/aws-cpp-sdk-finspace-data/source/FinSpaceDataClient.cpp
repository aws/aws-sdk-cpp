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


#include <aws/finspace-data/FinSpaceDataClient.h>
#include <aws/finspace-data/FinSpaceDataErrorMarshaller.h>
#include <aws/finspace-data/FinSpaceDataEndpointProvider.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FinSpaceData;
using namespace Aws::FinSpaceData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace FinSpaceData
  {
    const char ALLOCATION_TAG[] = "FinSpaceDataClient";
    const char SERVICE_NAME[] = "finspace-api";
  }
}
const char* FinSpaceDataClient::GetServiceName() {return SERVICE_NAME;}
const char* FinSpaceDataClient::GetAllocationTag() {return ALLOCATION_TAG;}

FinSpaceDataClient::FinSpaceDataClient(const FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

FinSpaceDataClient::FinSpaceDataClient(const AWSCredentials& credentials,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider,
                           const FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

FinSpaceDataClient::FinSpaceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<FinSpaceDataEndpointProviderBase> endpointProvider,
                           const FinSpaceData::FinSpaceDataClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
FinSpaceDataClient::FinSpaceDataClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "finspace data",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

FinSpaceDataClient::FinSpaceDataClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

FinSpaceDataClient::FinSpaceDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "finspace data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<FinSpaceDataErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<FinSpaceDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

FinSpaceDataClient::~FinSpaceDataClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<FinSpaceDataEndpointProviderBase>& FinSpaceDataClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void FinSpaceDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}

