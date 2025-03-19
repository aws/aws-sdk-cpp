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
    AWS_CONTROLTOWER_API GetLandingZoneResult() = default;
    AWS_CONTROLTOWER_API GetLandingZoneResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API GetLandingZoneResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the landing zone.</p>
     */
    inline const LandingZoneDetail& GetLandingZone() const { return m_landingZone; }
    template<typename LandingZoneT = LandingZoneDetail>
    void SetLandingZone(LandingZoneT&& value) { m_landingZoneHasBeenSet = true; m_landingZone = std::forward<LandingZoneT>(value); }
    template<typename LandingZoneT = LandingZoneDetail>
    GetLandingZoneResult& WithLandingZone(LandingZoneT&& value) { SetLandingZone(std::forward<LandingZoneT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLandingZoneResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LandingZoneDetail m_landingZone;
    bool m_landingZoneHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
