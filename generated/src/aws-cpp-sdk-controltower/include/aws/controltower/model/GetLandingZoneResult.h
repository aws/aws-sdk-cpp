/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/model/LandingZoneDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ControlTower
{
namespace Model
{
  class GetLandingZoneResult
  {
  public:
    AWS_CONTROLTOWER_API GetLandingZoneResult();
    AWS_CONTROLTOWER_API GetLandingZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetLandingZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the landing zone.</p>
     */
    inline const LandingZoneDetail& GetLandingZone() const{ return m_landingZone; }

    /**
     * <p>Information about the landing zone.</p>
     */
    inline void SetLandingZone(const LandingZoneDetail& value) { m_landingZone = value; }

    /**
     * <p>Information about the landing zone.</p>
     */
    inline void SetLandingZone(LandingZoneDetail&& value) { m_landingZone = std::move(value); }

    /**
     * <p>Information about the landing zone.</p>
     */
    inline GetLandingZoneResult& WithLandingZone(const LandingZoneDetail& value) { SetLandingZone(value); return *this;}

    /**
     * <p>Information about the landing zone.</p>
     */
    inline GetLandingZoneResult& WithLandingZone(LandingZoneDetail&& value) { SetLandingZone(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLandingZoneResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLandingZoneResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLandingZoneResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LandingZoneDetail m_landingZone;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
