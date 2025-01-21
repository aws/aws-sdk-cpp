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


#include <aws/lex/LexRuntimeServiceClient.h>
#include <aws/lex/LexRuntimeServiceErrorMarshaller.h>
#include <aws/lex/LexRuntimeServiceEndpointProvider.h>
#include <aws/lex/model/DeleteSessionRequest.h>
#include <aws/lex/model/GetSessionRequest.h>
#include <aws/lex/model/PostContentRequest.h>
#include <aws/lex/model/PostTextRequest.h>
#include <aws/lex/model/PutSessionRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LexRuntimeService;
using namespace Aws::LexRuntimeService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace LexRuntimeService
  {
    const char ALLOCATION_TAG[] = "LexRuntimeServiceClient";
    const char SERVICE_NAME[] = "lex";
  }
}
const char* LexRuntimeServiceClient::GetServiceName() {return SERVICE_NAME;}
const char* LexRuntimeServiceClient::GetAllocationTag() {return ALLOCATION_TAG;}

LexRuntimeServiceClient::LexRuntimeServiceClient(const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration,
                           std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Lex Runtime Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials,
                           std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider,
                           const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Lex Runtime Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<LexRuntimeServiceEndpointProviderBase> endpointProvider,
                           const LexRuntimeService::LexRuntimeServiceClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Lex Runtime Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
LexRuntimeServiceClient::LexRuntimeServiceClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Lex Runtime Service",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

LexRuntimeServiceClient::LexRuntimeServiceClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Lex Runtime Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

LexRuntimeServiceClient::LexRuntimeServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Lex Runtime Service",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<LexRuntimeServiceErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<LexRuntimeServiceEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

LexRuntimeServiceClient::~LexRuntimeServiceClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<LexRuntimeServiceEndpointProviderBase>& LexRuntimeServiceClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LexRuntimeServiceClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
DeleteSessionOutcome LexRuntimeServiceClient::DeleteSession(const DeleteSessionRequest& request) const
{
  AWS_OPERATION_GUARD(DeleteSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotName, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: BotAlias, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSession", "Required field: UserId, is not set");
    return DeleteSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, DeleteSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DeleteSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DeleteSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DeleteSessionOutcome>(
    [&]()-> DeleteSessionOutcome {
      return DeleteSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_DELETE, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/bot/");
      resolvedEndpoint.AddPathSegment(request.GetBotName());
      resolvedEndpoint.AddPathSegments("/alias/");
      resolvedEndpoint.AddPathSegment(request.GetBotAlias());
      resolvedEndpoint.AddPathSegments("/user/");
      resolvedEndpoint.AddPathSegment(request.GetUserId());
      resolvedEndpoint.AddPathSegments("/session");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionOutcome LexRuntimeServiceClient::GetSession(const GetSessionRequest& request) const
{
  AWS_OPERATION_GUARD(GetSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotName, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: BotAlias, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSession", "Required field: UserId, is not set");
    return GetSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionOutcome>(
    [&]()-> GetSessionOutcome {
      return GetSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/bot/");
      resolvedEndpoint.AddPathSegment(request.GetBotName());
      resolvedEndpoint.AddPathSegments("/alias/");
      resolvedEndpoint.AddPathSegment(request.GetBotAlias());
      resolvedEndpoint.AddPathSegments("/user/");
      resolvedEndpoint.AddPathSegment(request.GetUserId());
      resolvedEndpoint.AddPathSegments("/session/");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostContentOutcome LexRuntimeServiceClient::PostContent(const PostContentRequest& request) const
{
  AWS_OPERATION_GUARD(PostContent);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostContent, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: BotName, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: BotAlias, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostContent", "Required field: UserId, is not set");
    return PostContentOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PostContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostContent, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostContent",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostContentOutcome>(
    [&]()-> PostContentOutcome {
      return PostContentOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/bot/");
      resolvedEndpoint.AddPathSegment(request.GetBotName());
      resolvedEndpoint.AddPathSegments("/alias/");
      resolvedEndpoint.AddPathSegment(request.GetBotAlias());
      resolvedEndpoint.AddPathSegments("/user/");
      resolvedEndpoint.AddPathSegment(request.GetUserId());
      resolvedEndpoint.AddPathSegments("/content");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PostTextOutcome LexRuntimeServiceClient::PostText(const PostTextRequest& request) const
{
  AWS_OPERATION_GUARD(PostText);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PostText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: BotName, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: BotAlias, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PostText", "Required field: UserId, is not set");
    return PostTextOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PostText, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PostText, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PostText",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PostTextOutcome>(
    [&]()-> PostTextOutcome {
      return PostTextOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/bot/");
      resolvedEndpoint.AddPathSegment(request.GetBotName());
      resolvedEndpoint.AddPathSegments("/alias/");
      resolvedEndpoint.AddPathSegment(request.GetBotAlias());
      resolvedEndpoint.AddPathSegments("/user/");
      resolvedEndpoint.AddPathSegment(request.GetUserId());
      resolvedEndpoint.AddPathSegments("/text");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutSessionOutcome LexRuntimeServiceClient::PutSession(const PutSessionRequest& request) const
{
  AWS_OPERATION_GUARD(PutSession);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutSession, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.BotNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotName, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotName]", false));
  }
  if (!request.BotAliasHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: BotAlias, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BotAlias]", false));
  }
  if (!request.UserIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutSession", "Required field: UserId, is not set");
    return PutSessionOutcome(Aws::Client::AWSError<LexRuntimeServiceErrors>(LexRuntimeServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutSession, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutSession",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutSessionOutcome>(
    [&]()-> PutSessionOutcome {
      return PutSessionOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_POST, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/bot/");
      resolvedEndpoint.AddPathSegment(request.GetBotName());
      resolvedEndpoint.AddPathSegments("/alias/");
      resolvedEndpoint.AddPathSegment(request.GetBotAlias());
      resolvedEndpoint.AddPathSegments("/user/");
      resolvedEndpoint.AddPathSegment(request.GetUserId());
      resolvedEndpoint.AddPathSegments("/session");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


