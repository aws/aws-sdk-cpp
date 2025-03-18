/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kendra/model/GroupSummary.h>
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
namespace kendra
{
namespace Model
{
  class ListGroupsOlderThanOrderingIdResult
  {
  public:
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult() = default;
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Summary information for list of groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroupsSummaries() const { return m_groupsSummaries; }
    template<typename GroupsSummariesT = Aws::Vector<GroupSummary>>
    void SetGroupsSummaries(GroupsSummariesT&& value) { m_groupsSummariesHasBeenSet = true; m_groupsSummaries = std::forward<GroupsSummariesT>(value); }
    template<typename GroupsSummariesT = Aws::Vector<GroupSummary>>
    ListGroupsOlderThanOrderingIdResult& WithGroupsSummaries(GroupsSummariesT&& value) { SetGroupsSummaries(std::forward<GroupsSummariesT>(value)); return *this;}
    template<typename GroupsSummariesT = GroupSummary>
    ListGroupsOlderThanOrderingIdResult& AddGroupsSummaries(GroupsSummariesT&& value) { m_groupsSummariesHasBeenSet = true; m_groupsSummaries.emplace_back(std::forward<GroupsSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of groups that are mapped
     * to users before a given ordering or timestamp identifier. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListGroupsOlderThanOrderingIdResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListGroupsOlderThanOrderingIdResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<GroupSummary> m_groupsSummaries;
    bool m_groupsSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
