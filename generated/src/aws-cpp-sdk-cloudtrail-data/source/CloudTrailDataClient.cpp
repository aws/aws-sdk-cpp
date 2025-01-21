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


#include <aws/cloudtrail-data/CloudTrailDataClient.h>
#include <aws/cloudtrail-data/CloudTrailDataErrorMarshaller.h>
#include <aws/cloudtrail-data/CloudTrailDataEndpointProvider.h>
#include <aws/cloudtrail-data/model/PutAuditEventsRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudTrailData;
using namespace Aws::CloudTrailData::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace CloudTrailData
  {
    const char ALLOCATION_TAG[] = "CloudTrailDataClient";
    const char SERVICE_NAME[] = "cloudtrail-data";
  }
}
const char* CloudTrailDataClient::GetServiceName() {return SERVICE_NAME;}
const char* CloudTrailDataClient::GetAllocationTag() {return ALLOCATION_TAG;}

CloudTrailDataClient::CloudTrailDataClient(const CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration,
                           std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CloudTrail Data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

CloudTrailDataClient::CloudTrailDataClient(const AWSCredentials& credentials,
                           std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider,
                           const CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CloudTrail Data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

CloudTrailDataClient::CloudTrailDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<CloudTrailDataEndpointProviderBase> endpointProvider,
                           const CloudTrailData::CloudTrailDataClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CloudTrail Data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
CloudTrailDataClient::CloudTrailDataClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "CloudTrail Data",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

CloudTrailDataClient::CloudTrailDataClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CloudTrail Data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

CloudTrailDataClient::CloudTrailDataClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "CloudTrail Data",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<CloudTrailDataErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<CloudTrailDataEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

CloudTrailDataClient::~CloudTrailDataClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<CloudTrailDataEndpointProviderBase>& CloudTrailDataClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudTrailDataClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
PutAuditEventsOutcome CloudTrailDataClient::PutAuditEvents(const PutAuditEventsRequest& request) const
{
  AWS_OPERATION_GUARD(PutAuditEvents);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutAuditEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ChannelArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutAuditEvents", "Required field: ChannelArn, is not set");
    return PutAuditEventsOutcome(Aws::Client::AWSError<CloudTrailDataErrors>(CloudTrailDataErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChannelArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutAuditEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutAuditEvents, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutAuditEvents",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutAuditEventsOutcome>(
    [&]()-> PutAuditEventsOutcome {
      return PutAuditEventsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/PutAuditEvents");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


