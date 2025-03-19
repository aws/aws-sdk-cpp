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
    AWS_GROUNDSTATION_API ListGroundStationsResult() = default;
    AWS_GROUNDSTATION_API ListGroundStationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListGroundStationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of ground stations.</p>
     */
    inline const Aws::Vector<GroundStationData>& GetGroundStationList() const { return m_groundStationList; }
    template<typename GroundStationListT = Aws::Vector<GroundStationData>>
    void SetGroundStationList(GroundStationListT&& value) { m_groundStationListHasBeenSet = true; m_groundStationList = std::forward<GroundStationListT>(value); }
    template<typename GroundStationListT = Aws::Vector<GroundStationData>>
    ListGroundStationsResult& WithGroundStationList(GroundStationListT&& value) { SetGroundStationList(std::forward<GroundStationListT>(value)); return *this;}
    template<typename GroundStationListT = GroundStationData>
    ListGroundStationsResult& AddGroundStationList(GroundStationListT&& value) { m_groundStationListHasBeenSet = true; m_groundStationList.emplace_back(std::forward<GroundStationListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token that can be supplied in the next call to get the next page of
     * ground stations.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGroundStationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroundStationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroundStationData> m_groundStationList;
    bool m_groundStationListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
