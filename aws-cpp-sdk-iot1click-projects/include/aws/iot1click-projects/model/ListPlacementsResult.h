/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_IOT1CLICKPROJECTS_API ListPlacementsResult
  {
  public:
    ListPlacementsResult();
    ListPlacementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPlacementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object listing the requested placements.</p>
     */
    inline const Aws::Vector<PlacementSummary>& GetPlacements() const{ return m_placements; }

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline void SetPlacements(const Aws::Vector<PlacementSummary>& value) { m_placements = value; }

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline void SetPlacements(Aws::Vector<PlacementSummary>&& value) { m_placements = std::move(value); }

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline ListPlacementsResult& WithPlacements(const Aws::Vector<PlacementSummary>& value) { SetPlacements(value); return *this;}

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline ListPlacementsResult& WithPlacements(Aws::Vector<PlacementSummary>&& value) { SetPlacements(std::move(value)); return *this;}

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline ListPlacementsResult& AddPlacements(const PlacementSummary& value) { m_placements.push_back(value); return *this; }

    /**
     * <p>An object listing the requested placements.</p>
     */
    inline ListPlacementsResult& AddPlacements(PlacementSummary&& value) { m_placements.push_back(std::move(value)); return *this; }


    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline ListPlacementsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline ListPlacementsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next set of results - will be effectively
     * empty if there are no further results.</p>
     */
    inline ListPlacementsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PlacementSummary> m_placements;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
