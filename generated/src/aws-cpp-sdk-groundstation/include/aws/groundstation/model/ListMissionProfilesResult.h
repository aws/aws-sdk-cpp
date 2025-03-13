/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/model/MissionProfileListItem.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ListMissionProfilesResponse">AWS
   * API Reference</a></p>
   */
  class ListMissionProfilesResult
  {
  public:
    AWS_GROUNDSTATION_API ListMissionProfilesResult() = default;
    AWS_GROUNDSTATION_API ListMissionProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GROUNDSTATION_API ListMissionProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>List of mission profiles.</p>
     */
    inline const Aws::Vector<MissionProfileListItem>& GetMissionProfileList() const { return m_missionProfileList; }
    template<typename MissionProfileListT = Aws::Vector<MissionProfileListItem>>
    void SetMissionProfileList(MissionProfileListT&& value) { m_missionProfileListHasBeenSet = true; m_missionProfileList = std::forward<MissionProfileListT>(value); }
    template<typename MissionProfileListT = Aws::Vector<MissionProfileListItem>>
    ListMissionProfilesResult& WithMissionProfileList(MissionProfileListT&& value) { SetMissionProfileList(std::forward<MissionProfileListT>(value)); return *this;}
    template<typename MissionProfileListT = MissionProfileListItem>
    ListMissionProfilesResult& AddMissionProfileList(MissionProfileListT&& value) { m_missionProfileListHasBeenSet = true; m_missionProfileList.emplace_back(std::forward<MissionProfileListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Next token returned in the response of a previous
     * <code>ListMissionProfiles</code> call. Used to get the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMissionProfilesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMissionProfilesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MissionProfileListItem> m_missionProfileList;
    bool m_missionProfileListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
