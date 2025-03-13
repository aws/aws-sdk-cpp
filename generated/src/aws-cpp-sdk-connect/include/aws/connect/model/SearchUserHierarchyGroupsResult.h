/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HierarchyGroup.h>
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
namespace Connect
{
namespace Model
{
  class SearchUserHierarchyGroupsResult
  {
  public:
    AWS_CONNECT_API SearchUserHierarchyGroupsResult() = default;
    AWS_CONNECT_API SearchUserHierarchyGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchUserHierarchyGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the userHierarchyGroups.</p>
     */
    inline const Aws::Vector<HierarchyGroup>& GetUserHierarchyGroups() const { return m_userHierarchyGroups; }
    template<typename UserHierarchyGroupsT = Aws::Vector<HierarchyGroup>>
    void SetUserHierarchyGroups(UserHierarchyGroupsT&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups = std::forward<UserHierarchyGroupsT>(value); }
    template<typename UserHierarchyGroupsT = Aws::Vector<HierarchyGroup>>
    SearchUserHierarchyGroupsResult& WithUserHierarchyGroups(UserHierarchyGroupsT&& value) { SetUserHierarchyGroups(std::forward<UserHierarchyGroupsT>(value)); return *this;}
    template<typename UserHierarchyGroupsT = HierarchyGroup>
    SearchUserHierarchyGroupsResult& AddUserHierarchyGroups(UserHierarchyGroupsT&& value) { m_userHierarchyGroupsHasBeenSet = true; m_userHierarchyGroups.emplace_back(std::forward<UserHierarchyGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchUserHierarchyGroupsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of userHierarchyGroups which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCountHasBeenSet = true; m_approximateTotalCount = value; }
    inline SearchUserHierarchyGroupsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchUserHierarchyGroupsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HierarchyGroup> m_userHierarchyGroups;
    bool m_userHierarchyGroupsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    long long m_approximateTotalCount{0};
    bool m_approximateTotalCountHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
