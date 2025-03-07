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


#include <aws/dynamodbstreams/DynamoDBStreamsClient.h>
#include <aws/dynamodbstreams/DynamoDBStreamsErrorMarshaller.h>
#include <aws/dynamodbstreams/DynamoDBStreamsEndpointProvider.h>
#include <aws/dynamodbstreams/model/DescribeStreamRequest.h>
#include <aws/dynamodbstreams/model/GetRecordsRequest.h>
#include <aws/dynamodbstreams/model/GetShardIteratorRequest.h>
#include <aws/dynamodbstreams/model/ListStreamsRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DynamoDBStreams;
using namespace Aws::DynamoDBStreams::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace DynamoDBStreams
  {
    const char ALLOCATION_TAG[] = "DynamoDBStreamsClient";
    const char SERVICE_NAME[] = "dynamodb";
  }
}
const char* DynamoDBStreamsClient::GetServiceName() {return SERVICE_NAME;}
const char* DynamoDBStreamsClient::GetAllocationTag() {return ALLOCATION_TAG;}

DynamoDBStreamsClient::DynamoDBStreamsClient(const DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration,
                           std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB Streams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

DynamoDBStreamsClient::DynamoDBStreamsClient(const AWSCredentials& credentials,
                           std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider,
                           const DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB Streams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

DynamoDBStreamsClient::DynamoDBStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<DynamoDBStreamsEndpointProviderBase> endpointProvider,
                           const DynamoDBStreams::DynamoDBStreamsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB Streams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
DynamoDBStreamsClient::DynamoDBStreamsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "DynamoDB Streams",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

DynamoDBStreamsClient::DynamoDBStreamsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB Streams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

DynamoDBStreamsClient::DynamoDBStreamsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "DynamoDB Streams",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<DynamoDBStreamsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<DynamoDBStreamsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

DynamoDBStreamsClient::~DynamoDBStreamsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<DynamoDBStreamsEndpointProviderBase>& DynamoDBStreamsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void DynamoDBStreamsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
DescribeStreamOutcome DynamoDBStreamsClient::DescribeStream(const DescribeStreamRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeStream);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeStream, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DescribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeStream, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeStream",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeStreamOutcome>(
    [&]()-> DescribeStreamOutcome {
      return DescribeStreamOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetRecordsOutcome DynamoDBStreamsClient::GetRecords(const GetRecordsRequest& request) const
{
  AWS_OPERATION_GUARD(GetRecords);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetRecords, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetRecords, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetRecords",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetRecordsOutcome>(
    [&]()-> GetRecordsOutcome {
      return GetRecordsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetShardIteratorOutcome DynamoDBStreamsClient::GetShardIterator(const GetShardIteratorRequest& request) const
{
  AWS_OPERATION_GUARD(GetShardIterator);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetShardIterator, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetShardIterator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetShardIterator, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetShardIterator",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetShardIteratorOutcome>(
    [&]()-> GetShardIteratorOutcome {
      return GetShardIteratorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListStreamsOutcome DynamoDBStreamsClient::ListStreams(const ListStreamsRequest& request) const
{
  AWS_OPERATION_GUARD(ListStreams);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListStreams, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, ListStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListStreams, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListStreams",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListStreamsOutcome>(
    [&]()-> ListStreamsOutcome {
      return ListStreamsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
    AWS_UNREFERENCED_PARAM(resolvedEndpoint);
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


