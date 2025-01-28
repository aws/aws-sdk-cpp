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


#include <aws/geo-maps/GeoMapsClient.h>
#include <aws/geo-maps/GeoMapsErrorMarshaller.h>
#include <aws/geo-maps/GeoMapsEndpointProvider.h>
#include <aws/geo-maps/model/GetGlyphsRequest.h>
#include <aws/geo-maps/model/GetSpritesRequest.h>
#include <aws/geo-maps/model/GetStaticMapRequest.h>
#include <aws/geo-maps/model/GetStyleDescriptorRequest.h>
#include <aws/geo-maps/model/GetTileRequest.h>

#include <smithy/tracing/TracingUtils.h>

#include <smithy/identity/resolver/built-in/SimpleAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/DefaultAwsCredentialIdentityResolver.h>
#include <smithy/identity/resolver/built-in/AwsCredentialsProviderIdentityResolver.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GeoMaps;
using namespace Aws::GeoMaps::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws
{
  namespace GeoMaps
  {
    const char ALLOCATION_TAG[] = "GeoMapsClient";
    const char SERVICE_NAME[] = "geo-maps";
  }
}
const char* GeoMapsClient::GetServiceName() {return SERVICE_NAME;}
const char* GeoMapsClient::GetAllocationTag() {return ALLOCATION_TAG;}

GeoMapsClient::GeoMapsClient(const GeoMaps::GeoMapsClientConfiguration& clientConfiguration,
                           std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Geo Maps",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{GetServiceName(), clientConfiguration.region}},
        })
{}

GeoMapsClient::GeoMapsClient(const AWSCredentials& credentials,
                           std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider,
                           const GeoMaps::GeoMapsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Geo Maps",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}},
        })
{}

GeoMapsClient::GeoMapsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider,
                           const GeoMaps::GeoMapsClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Geo Maps",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
        endpointProvider ? endpointProvider : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
            {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{ Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}

/* Legacy constructors due deprecation */
GeoMapsClient::GeoMapsClient(const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
      GetServiceName(),
      "Geo Maps",
      Aws::Http::CreateHttpClient(clientConfiguration),
      Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
      Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
      Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
      {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::DefaultAwsCredentialIdentityResolver>(ALLOCATION_TAG), GetServiceName(), clientConfiguration.region}}
      })
{}

GeoMapsClient::GeoMapsClient(const AWSCredentials& credentials,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Geo Maps",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::SimpleAwsCredentialIdentityResolver>(ALLOCATION_TAG, credentials), GetServiceName(), clientConfiguration.region}}
        })
{}

GeoMapsClient::GeoMapsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                           const Client::ClientConfiguration& clientConfiguration) :
    AwsSmithyClientT(clientConfiguration,
        GetServiceName(),
        "Geo Maps",
        Aws::Http::CreateHttpClient(clientConfiguration),
        Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG),
        Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG),
        Aws::MakeShared<smithy::SigV4AuthSchemeResolver<>>(ALLOCATION_TAG),
        {
          {smithy::SigV4AuthSchemeOption::sigV4AuthSchemeOption.schemeId, smithy::SigV4AuthScheme{Aws::MakeShared<smithy::AwsCredentialsProviderIdentityResolver>(ALLOCATION_TAG, credentialsProvider), GetServiceName(), clientConfiguration.region}}
        })
{}
/* End of legacy constructors due deprecation */

GeoMapsClient::~GeoMapsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<GeoMapsEndpointProviderBase>& GeoMapsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GeoMapsClient::OverrideEndpoint(const Aws::String& endpoint)
{
    AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
    m_endpointProvider->OverrideEndpoint(endpoint);
}
GetGlyphsOutcome GeoMapsClient::GetGlyphs(const GetGlyphsRequest& request) const
{
  AWS_OPERATION_GUARD(GetGlyphs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetGlyphs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FontStackHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlyphs", "Required field: FontStack, is not set");
    return GetGlyphsOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FontStack]", false));
  }
  if (!request.FontUnicodeRangeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetGlyphs", "Required field: FontUnicodeRange, is not set");
    return GetGlyphsOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FontUnicodeRange]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlyphs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlyphsOutcome>(
    [&]()-> GetGlyphsOutcome {
      return GetGlyphsOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/glyphs/");
      resolvedEndpoint.AddPathSegment(request.GetFontStack());
      resolvedEndpoint.AddPathSegment(request.GetFontUnicodeRange());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSpritesOutcome GeoMapsClient::GetSprites(const GetSpritesRequest& request) const
{
  AWS_OPERATION_GUARD(GetSprites);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSprites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSprites", "Required field: FileName, is not set");
    return GetSpritesOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileName]", false));
  }
  if (!request.StyleHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSprites", "Required field: Style, is not set");
    return GetSpritesOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Style]", false));
  }
  if (!request.ColorSchemeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSprites", "Required field: ColorScheme, is not set");
    return GetSpritesOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ColorScheme]", false));
  }
  if (!request.VariantHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSprites", "Required field: Variant, is not set");
    return GetSpritesOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Variant]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSprites",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpritesOutcome>(
    [&]()-> GetSpritesOutcome {
      return GetSpritesOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/styles/");
      resolvedEndpoint.AddPathSegment(MapStyleMapper::GetNameForMapStyle(request.GetStyle()));
      resolvedEndpoint.AddPathSegment(ColorSchemeMapper::GetNameForColorScheme(request.GetColorScheme()));
      resolvedEndpoint.AddPathSegment(VariantMapper::GetNameForVariant(request.GetVariant()));
      resolvedEndpoint.AddPathSegments("/sprites/");
      resolvedEndpoint.AddPathSegment(request.GetFileName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStaticMapOutcome GeoMapsClient::GetStaticMap(const GetStaticMapRequest& request) const
{
  AWS_OPERATION_GUARD(GetStaticMap);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStaticMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.HeightHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStaticMap", "Required field: Height, is not set");
    return GetStaticMapOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Height]", false));
  }
  if (!request.FileNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStaticMap", "Required field: FileName, is not set");
    return GetStaticMapOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FileName]", false));
  }
  if (!request.WidthHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStaticMap", "Required field: Width, is not set");
    return GetStaticMapOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Width]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStaticMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStaticMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStaticMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStaticMapOutcome>(
    [&]()-> GetStaticMapOutcome {
      return GetStaticMapOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/static/");
      resolvedEndpoint.AddPathSegment(request.GetFileName());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetStyleDescriptorOutcome GeoMapsClient::GetStyleDescriptor(const GetStyleDescriptorRequest& request) const
{
  AWS_OPERATION_GUARD(GetStyleDescriptor);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetStyleDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.StyleHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetStyleDescriptor", "Required field: Style, is not set");
    return GetStyleDescriptorOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Style]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStyleDescriptor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStyleDescriptorOutcome>(
    [&]()-> GetStyleDescriptorOutcome {
      return GetStyleDescriptorOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/styles/");
      resolvedEndpoint.AddPathSegment(MapStyleMapper::GetNameForMapStyle(request.GetStyle()));
      resolvedEndpoint.AddPathSegments("/descriptor");
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetTileOutcome GeoMapsClient::GetTile(const GetTileRequest& request) const
{
  AWS_OPERATION_GUARD(GetTile);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TilesetHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Tileset, is not set");
    return GetTileOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Tileset]", false));
  }
  if (!request.ZHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Z, is not set");
    return GetTileOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Z]", false));
  }
  if (!request.XHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: X, is not set");
    return GetTileOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [X]", false));
  }
  if (!request.YHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTile", "Required field: Y, is not set");
    return GetTileOutcome(Aws::Client::AWSError<GeoMapsErrors>(GeoMapsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Y]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_clientConfiguration.telemetryProvider, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_clientConfiguration.telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_clientConfiguration.telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTileOutcome>(
    [&]()-> GetTileOutcome {
      return GetTileOutcome(MakeRequestDeserialize(&request, request.GetServiceRequestName(), Aws::Http::HttpMethod::HTTP_GET, [&](Aws::Endpoint::AWSEndpoint& resolvedEndpoint) ->  void {
      resolvedEndpoint.AddPathSegments("/tiles/");
      resolvedEndpoint.AddPathSegment(request.GetTileset());
      resolvedEndpoint.AddPathSegment(request.GetZ());
      resolvedEndpoint.AddPathSegment(request.GetX());
      resolvedEndpoint.AddPathSegment(request.GetY());
      }));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}


