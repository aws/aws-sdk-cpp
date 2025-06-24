/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/LocationModel.h>
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
namespace GameLift
{
namespace Model
{
  class ListLocationsResult
  {
  public:
    AWS_GAMELIFT_API ListLocationsResult() = default;
    AWS_GAMELIFT_API ListLocationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListLocationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of locations, including both Amazon Web Services and custom
     * locations. Each location includes a name and ping beacon information that can be
     * used to measure network latency between player devices and the location.</p>
     */
    inline const Aws::Vector<LocationModel>& GetLocations() const { return m_locations; }
    template<typename LocationsT = Aws::Vector<LocationModel>>
    void SetLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations = std::forward<LocationsT>(value); }
    template<typename LocationsT = Aws::Vector<LocationModel>>
    ListLocationsResult& WithLocations(LocationsT&& value) { SetLocations(std::forward<LocationsT>(value)); return *this;}
    template<typename LocationsT = LocationModel>
    ListLocationsResult& AddLocations(LocationsT&& value) { m_locationsHasBeenSet = true; m_locations.emplace_back(std::forward<LocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLocationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLocationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LocationModel> m_locations;
    bool m_locationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
