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
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/GroundStationData.h>
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
namespace GroundStation
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListGroundStationsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_GROUNDSTATION_API ListGroundStationsResult
  {
  public:
    ListGroundStationsResult();
    ListGroundStationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroundStationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>List of ground stations.</p>
     */
    inline const Aws::Vector<GroundStationData>& GetGroundStationList() const{ return m_groundStationList; }

    /**
     * <p>List of ground stations.</p>
     */
    inline void SetGroundStationList(const Aws::Vector<GroundStationData>& value) { m_groundStationList = value; }

    /**
     * <p>List of ground stations.</p>
     */
    inline void SetGroundStationList(Aws::Vector<GroundStationData>&& value) { m_groundStationList = std::move(value); }

    /**
     * <p>List of ground stations.</p>
     */
    inline ListGroundStationsResult& WithGroundStationList(const Aws::Vector<GroundStationData>& value) { SetGroundStationList(value); return *this;}

    /**
     * <p>List of ground stations.</p>
     */
    inline ListGroundStationsResult& WithGroundStationList(Aws::Vector<GroundStationData>&& value) { SetGroundStationList(std::move(value)); return *this;}

    /**
     * <p>List of ground stations.</p>
     */
    inline ListGroundStationsResult& AddGroundStationList(const GroundStationData& value) { m_groundStationList.push_back(value); return *this; }

    /**
     * <p>List of ground stations.</p>
     */
    inline ListGroundStationsResult& AddGroundStationList(GroundStationData&& value) { m_groundStationList.push_back(std::move(value)); return *this; }


    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline ListGroundStationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline ListGroundStationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline ListGroundStationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GroundStationData> m_groundStationList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
