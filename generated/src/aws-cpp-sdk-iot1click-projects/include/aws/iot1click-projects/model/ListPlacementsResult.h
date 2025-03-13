/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot1click-projects/model/PlacementSummary.h>
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
namespace IoT1ClickProjects
{
namespace Model
{
  class ListPlacementsResult
  {
  public:
    AWS_IOT1CLICKPROJECTS_API ListPlacementsResult() = default;
    AWS_IOT1CLICKPROJECTS_API ListPlacementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT1CLICKPROJECTS_API ListPlacementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An object listing the requested placements.</p>
     */
    inline const Aws::Vector<PlacementSummary>& GetPlacements() const { return m_placements; }
    template<typename PlacementsT = Aws::Vector<PlacementSummary>>
    void SetPlacements(PlacementsT&& value) { m_placementsHasBeenSet = true; m_placements = std::forward<PlacementsT>(value); }
    template<typename PlacementsT = Aws::Vector<PlacementSummary>>
    ListPlacementsResult& WithPlacements(PlacementsT&& value) { SetPlacements(std::forward<PlacementsT>(value)); return *this;}
    template<typename PlacementsT = PlacementSummary>
    ListPlacementsResult& AddPlacements(PlacementsT&& value) { m_placementsHasBeenSet = true; m_placements.emplace_back(std::forward<PlacementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPlacementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPlacementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PlacementSummary> m_placements;
    bool m_placementsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
