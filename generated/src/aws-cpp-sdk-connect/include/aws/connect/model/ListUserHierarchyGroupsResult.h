﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/HierarchyGroupSummary.h>
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
  class ListUserHierarchyGroupsResult
  {
  public:
    AWS_CONNECT_API ListUserHierarchyGroupsResult();
    AWS_CONNECT_API ListUserHierarchyGroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CONNECT_API ListUserHierarchyGroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the hierarchy groups.</p>
     */
    inline const Aws::Vector<HierarchyGroupSummary>& GetUserHierarchyGroupSummaryList() const{ return m_userHierarchyGroupSummaryList; }
    inline void SetUserHierarchyGroupSummaryList(const Aws::Vector<HierarchyGroupSummary>& value) { m_userHierarchyGroupSummaryList = value; }
    inline void SetUserHierarchyGroupSummaryList(Aws::Vector<HierarchyGroupSummary>&& value) { m_userHierarchyGroupSummaryList = std::move(value); }
    inline ListUserHierarchyGroupsResult& WithUserHierarchyGroupSummaryList(const Aws::Vector<HierarchyGroupSummary>& value) { SetUserHierarchyGroupSummaryList(value); return *this;}
    inline ListUserHierarchyGroupsResult& WithUserHierarchyGroupSummaryList(Aws::Vector<HierarchyGroupSummary>&& value) { SetUserHierarchyGroupSummaryList(std::move(value)); return *this;}
    inline ListUserHierarchyGroupsResult& AddUserHierarchyGroupSummaryList(const HierarchyGroupSummary& value) { m_userHierarchyGroupSummaryList.push_back(value); return *this; }
    inline ListUserHierarchyGroupsResult& AddUserHierarchyGroupSummaryList(HierarchyGroupSummary&& value) { m_userHierarchyGroupSummaryList.push_back(std::move(value)); return *this; }
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
    inline ListUserHierarchyGroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUserHierarchyGroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUserHierarchyGroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUserHierarchyGroupsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUserHierarchyGroupsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUserHierarchyGroupsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<HierarchyGroupSummary> m_userHierarchyGroupSummaryList;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
