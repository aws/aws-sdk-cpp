/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace IoTWireless
{
namespace Model
{
  class GetPositionEstimateResult
  {
  public:
    AWS_IOTWIRELESS_API GetPositionEstimateResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_IOTWIRELESS_API GetPositionEstimateResult(GetPositionEstimateResult&&);
    AWS_IOTWIRELESS_API GetPositionEstimateResult& operator=(GetPositionEstimateResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetPositionEstimateResult(const GetPositionEstimateResult&) = delete;
    GetPositionEstimateResult& operator=(const GetPositionEstimateResult&) = delete;


    AWS_IOTWIRELESS_API GetPositionEstimateResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_IOTWIRELESS_API GetPositionEstimateResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The position information of the resource, displayed as a JSON payload. The
     * payload is of type blob and uses the <a href="https://geojson.org/">GeoJSON</a>
     * format, which a format that's used to encode geographic data structures. A
     * sample payload contains the timestamp information, the WGS84 coordinates of the
     * location, and the accuracy and confidence level. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/location-resolve-console.html">Resolve
     * device location (console)</a>.</p>
     */
    inline Aws::IOStream& GetGeoJsonPayload() const { return m_geoJsonPayload.GetUnderlyingStream(); }

    /**
     * <p>The position information of the resource, displayed as a JSON payload. The
     * payload is of type blob and uses the <a href="https://geojson.org/">GeoJSON</a>
     * format, which a format that's used to encode geographic data structures. A
     * sample payload contains the timestamp information, the WGS84 coordinates of the
     * location, and the accuracy and confidence level. For more information and
     * examples, see <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/location-resolve-console.html">Resolve
     * device location (console)</a>.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_geoJsonPayload = Aws::Utils::Stream::ResponseStream(body); }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetPositionEstimateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetPositionEstimateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetPositionEstimateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::Stream::ResponseStream m_geoJsonPayload;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
