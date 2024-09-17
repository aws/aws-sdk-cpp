/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListGroundStationsResult
  {
  public:
    AWS_GROUNDSTATION_API ListGroundStationsResult();
    AWS_GROUNDSTATION_API ListGroundStationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListGroundStationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of ground stations.</p>
     */
    inline const Aws::Vector<GroundStationData>& GetGroundStationList() const{ return m_groundStationList; }
    inline void SetGroundStationList(const Aws::Vector<GroundStationData>& value) { m_groundStationList = value; }
    inline void SetGroundStationList(Aws::Vector<GroundStationData>&& value) { m_groundStationList = std::move(value); }
    inline ListGroundStationsResult& WithGroundStationList(const Aws::Vector<GroundStationData>& value) { SetGroundStationList(value); return *this;}
    inline ListGroundStationsResult& WithGroundStationList(Aws::Vector<GroundStationData>&& value) { SetGroundStationList(std::move(value)); return *this;}
    inline ListGroundStationsResult& AddGroundStationList(const GroundStationData& value) { m_groundStationList.push_back(value); return *this; }
    inline ListGroundStationsResult& AddGroundStationList(GroundStationData&& value) { m_groundStationList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroundStationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroundStationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroundStationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroundStationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroundStationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroundStationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroundStationData> m_groundStationList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
