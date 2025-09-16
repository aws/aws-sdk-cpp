/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
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
    const char SERVICE_NAME[] = "geo-maps";
    const char ALLOCATION_TAG[] = "GeoMapsClient";
  }
}
const char* GeoMapsClient::GetServiceName() {return SERVICE_NAME;}
const char* GeoMapsClient::GetAllocationTag() {return ALLOCATION_TAG;}

GeoMapsClient::GeoMapsClient(const GeoMaps::GeoMapsClientConfiguration& clientConfiguration,
                             std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GeoMapsClient::GeoMapsClient(const AWSCredentials& credentials,
                             std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider,
                             const GeoMaps::GeoMapsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GeoMapsClient::GeoMapsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<GeoMapsEndpointProviderBase> endpointProvider,
                             const GeoMaps::GeoMapsClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  GeoMapsClient::GeoMapsClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_endpointProvider(Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GeoMapsClient::GeoMapsClient(const AWSCredentials& credentials,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

GeoMapsClient::GeoMapsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<GeoMapsErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_endpointProvider(Aws::MakeShared<GeoMapsEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
GeoMapsClient::~GeoMapsClient()
{
  ShutdownSdkClient(this, -1);
}

std::shared_ptr<GeoMapsEndpointProviderBase>& GeoMapsClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void GeoMapsClient::init(const GeoMaps::GeoMapsClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Geo Maps");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetGlyphs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetGlyphs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetGlyphsOutcome>(
    [&]()-> GetGlyphsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetGlyphs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/glyphs/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFontStack());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFontUnicodeRange());
      return GetGlyphsOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSprites, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSprites",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSpritesOutcome>(
    [&]()-> GetSpritesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSprites, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/styles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(MapStyleMapper::GetNameForMapStyle(request.GetStyle()));
      endpointResolutionOutcome.GetResult().AddPathSegment(ColorSchemeMapper::GetNameForColorScheme(request.GetColorScheme()));
      endpointResolutionOutcome.GetResult().AddPathSegment(VariantMapper::GetNameForVariant(request.GetVariant()));
      endpointResolutionOutcome.GetResult().AddPathSegments("/sprites/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileName());
      return GetSpritesOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStaticMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStaticMap, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStaticMap",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStaticMapOutcome>(
    [&]()-> GetStaticMapOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStaticMap, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/static/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFileName());
      return GetStaticMapOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetStyleDescriptor, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetStyleDescriptor",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetStyleDescriptorOutcome>(
    [&]()-> GetStyleDescriptorOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetStyleDescriptor, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/styles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(MapStyleMapper::GetNameForMapStyle(request.GetStyle()));
      endpointResolutionOutcome.GetResult().AddPathSegments("/descriptor");
      return GetStyleDescriptorOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
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
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetTile, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetTile",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetTileOutcome>(
    [&]()-> GetTileOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTile, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tiles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTileset());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetZ());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetX());
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetY());
      return GetTileOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

