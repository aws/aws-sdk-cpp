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
    AWS_CONNECT_API SearchUserHierarchyGroupsResult();
    AWS_CONNECT_API SearchUserHierarchyGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API SearchUserHierarchyGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the userHierarchyGroups.</p>
     */
    inline const Aws::Vector<HierarchyGroup>& GetUserHierarchyGroups() const{ return m_userHierarchyGroups; }
    inline void SetUserHierarchyGroups(const Aws::Vector<HierarchyGroup>& value) { m_userHierarchyGroups = value; }
    inline void SetUserHierarchyGroups(Aws::Vector<HierarchyGroup>&& value) { m_userHierarchyGroups = std::move(value); }
    inline SearchUserHierarchyGroupsResult& WithUserHierarchyGroups(const Aws::Vector<HierarchyGroup>& value) { SetUserHierarchyGroups(value); return *this;}
    inline SearchUserHierarchyGroupsResult& WithUserHierarchyGroups(Aws::Vector<HierarchyGroup>&& value) { SetUserHierarchyGroups(std::move(value)); return *this;}
    inline SearchUserHierarchyGroupsResult& AddUserHierarchyGroups(const HierarchyGroup& value) { m_userHierarchyGroups.push_back(value); return *this; }
    inline SearchUserHierarchyGroupsResult& AddUserHierarchyGroups(HierarchyGroup&& value) { m_userHierarchyGroups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchUserHierarchyGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchUserHierarchyGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchUserHierarchyGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of userHierarchyGroups which matched your search query.</p>
     */
    inline long long GetApproximateTotalCount() const{ return m_approximateTotalCount; }
    inline void SetApproximateTotalCount(long long value) { m_approximateTotalCount = value; }
    inline SearchUserHierarchyGroupsResult& WithApproximateTotalCount(long long value) { SetApproximateTotalCount(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchUserHierarchyGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchUserHierarchyGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchUserHierarchyGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HierarchyGroup> m_userHierarchyGroups;

    Aws::String m_nextToken;

    long long m_approximateTotalCount;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
