/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/GroupNameAndArn.h>
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
namespace IoT
{
namespace Model
{
  class ListThingGroupsForThingResult
  {
  public:
    AWS_IOT_API ListThingGroupsForThingResult() = default;
    AWS_IOT_API ListThingGroupsForThingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListThingGroupsForThingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The thing groups.</p>
     */
    inline const Aws::Vector<GroupNameAndArn>& GetThingGroups() const { return m_thingGroups; }
    template<typename ThingGroupsT = Aws::Vector<GroupNameAndArn>>
    void SetThingGroups(ThingGroupsT&& value) { m_thingGroupsHasBeenSet = true; m_thingGroups = std::forward<ThingGroupsT>(value); }
    template<typename ThingGroupsT = Aws::Vector<GroupNameAndArn>>
    ListThingGroupsForThingResult& WithThingGroups(ThingGroupsT&& value) { SetThingGroups(std::forward<ThingGroupsT>(value)); return *this;}
    template<typename ThingGroupsT = GroupNameAndArn>
    ListThingGroupsForThingResult& AddThingGroups(ThingGroupsT&& value) { m_thingGroupsHasBeenSet = true; m_thingGroups.emplace_back(std::forward<ThingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to get the next set of results, or <b>null</b> if there are
     * no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListThingGroupsForThingResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListThingGroupsForThingResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupNameAndArn> m_thingGroups;
    bool m_thingGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
