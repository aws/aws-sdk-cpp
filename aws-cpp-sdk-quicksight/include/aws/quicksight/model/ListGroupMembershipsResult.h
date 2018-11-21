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
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/GroupMember.h>
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
namespace QuickSight
{
namespace Model
{
  class AWS_QUICKSIGHT_API ListGroupMembershipsResult
  {
  public:
    ListGroupMembershipsResult();
    ListGroupMembershipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListGroupMembershipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of the members of the group.</p>
     */
    inline const Aws::Vector<GroupMember>& GetGroupMemberList() const{ return m_groupMemberList; }

    /**
     * <p>The list of the members of the group.</p>
     */
    inline void SetGroupMemberList(const Aws::Vector<GroupMember>& value) { m_groupMemberList = value; }

    /**
     * <p>The list of the members of the group.</p>
     */
    inline void SetGroupMemberList(Aws::Vector<GroupMember>&& value) { m_groupMemberList = std::move(value); }

    /**
     * <p>The list of the members of the group.</p>
     */
    inline ListGroupMembershipsResult& WithGroupMemberList(const Aws::Vector<GroupMember>& value) { SetGroupMemberList(value); return *this;}

    /**
     * <p>The list of the members of the group.</p>
     */
    inline ListGroupMembershipsResult& WithGroupMemberList(Aws::Vector<GroupMember>&& value) { SetGroupMemberList(std::move(value)); return *this;}

    /**
     * <p>The list of the members of the group.</p>
     */
    inline ListGroupMembershipsResult& AddGroupMemberList(const GroupMember& value) { m_groupMemberList.push_back(value); return *this; }

    /**
     * <p>The list of the members of the group.</p>
     */
    inline ListGroupMembershipsResult& AddGroupMemberList(GroupMember&& value) { m_groupMemberList.push_back(std::move(value)); return *this; }


    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListGroupMembershipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListGroupMembershipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that can be used in a subsequent request.</p>
     */
    inline ListGroupMembershipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListGroupMembershipsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListGroupMembershipsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    /**
     * <p>The AWS request ID for this operation.</p>
     */
    inline ListGroupMembershipsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The http status of the request.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The http status of the request.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The http status of the request.</p>
     */
    inline ListGroupMembershipsResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::Vector<GroupMember> m_groupMemberList;

    Aws::String m_nextToken;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
