﻿/**
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
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult();
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KENDRA_API ListGroupsOlderThanOrderingIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Summary information for list of groups that are mapped to users before a
     * given ordering or timestamp identifier. </p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroupsSummaries() const{ return m_groupsSummaries; }
    inline void SetGroupsSummaries(const Aws::Vector<GroupSummary>& value) { m_groupsSummaries = value; }
    inline void SetGroupsSummaries(Aws::Vector<GroupSummary>&& value) { m_groupsSummaries = std::move(value); }
    inline ListGroupsOlderThanOrderingIdResult& WithGroupsSummaries(const Aws::Vector<GroupSummary>& value) { SetGroupsSummaries(value); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& WithGroupsSummaries(Aws::Vector<GroupSummary>&& value) { SetGroupsSummaries(std::move(value)); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& AddGroupsSummaries(const GroupSummary& value) { m_groupsSummaries.push_back(value); return *this; }
    inline ListGroupsOlderThanOrderingIdResult& AddGroupsSummaries(GroupSummary&& value) { m_groupsSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If the response is truncated, Amazon Kendra returns this token that you can
     * use in the subsequent request to retrieve the next set of groups that are mapped
     * to users before a given ordering or timestamp identifier. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupsOlderThanOrderingIdResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupsOlderThanOrderingIdResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupsOlderThanOrderingIdResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<GroupSummary> m_groupsSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
