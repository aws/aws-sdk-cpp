/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneSummary.h>
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
  class ListLandingZonesResult
  {
  public:
    AWS_CONTROLTOWER_API ListLandingZonesResult() = default;
    AWS_CONTROLTOWER_API ListLandingZonesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONTROLTOWER_API ListLandingZonesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline const Aws::Vector<LandingZoneSummary>& GetLandingZones() const { return m_landingZones; }
    template<typename LandingZonesT = Aws::Vector<LandingZoneSummary>>
    void SetLandingZones(LandingZonesT&& value) { m_landingZonesHasBeenSet = true; m_landingZones = std::forward<LandingZonesT>(value); }
    template<typename LandingZonesT = Aws::Vector<LandingZoneSummary>>
    ListLandingZonesResult& WithLandingZones(LandingZonesT&& value) { SetLandingZones(std::forward<LandingZonesT>(value)); return *this;}
    template<typename LandingZonesT = LandingZoneSummary>
    ListLandingZonesResult& AddLandingZones(LandingZonesT&& value) { m_landingZonesHasBeenSet = true; m_landingZones.emplace_back(std::forward<LandingZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Retrieves the next page of results. If the string is empty, the response is
     * the end of the results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLandingZonesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLandingZonesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LandingZoneSummary> m_landingZones;
    bool m_landingZonesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
