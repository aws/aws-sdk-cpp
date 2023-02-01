/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace IoTWireless
{
namespace Model
{
  class GetResourcePositionResult
  {
  public:
    AWS_IOTWIRELESS_API GetResourcePositionResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_IOTWIRELESS_API GetResourcePositionResult(GetResourcePositionResult&&);
    AWS_IOTWIRELESS_API GetResourcePositionResult& operator=(GetResourcePositionResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetResourcePositionResult(const GetResourcePositionResult&) = delete;
    GetResourcePositionResult& operator=(const GetResourcePositionResult&) = delete;


    AWS_IOTWIRELESS_API GetResourcePositionResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_IOTWIRELESS_API GetResourcePositionResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The position information of the resource, displayed as a JSON payload. The
     * payload uses the GeoJSON format, which a format that's used to encode geographic
     * data structures. For more information, see <a
     * href="https://geojson.org/">GeoJSON</a>.</p>
     */
    inline Aws::IOStream& GetGeoJsonPayload() { return m_geoJsonPayload.GetUnderlyingStream(); }

    /**
     * <p>The position information of the resource, displayed as a JSON payload. The
     * payload uses the GeoJSON format, which a format that's used to encode geographic
     * data structures. For more information, see <a
     * href="https://geojson.org/">GeoJSON</a>.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_geoJsonPayload = Aws::Utils::Stream::ResponseStream(body); }

  private:

  Aws::Utils::Stream::ResponseStream m_geoJsonPayload;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
