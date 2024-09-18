/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directory-service-data/model/Member.h>
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
namespace DirectoryServiceData
{
namespace Model
{
  class ListGroupMembersResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API ListGroupMembersResult();
    AWS_DIRECTORYSERVICEDATA_API ListGroupMembersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API ListGroupMembersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Identifier (ID) of the directory associated with the group.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline ListGroupMembersResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ListGroupMembersResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ListGroupMembersResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the member. </p>
     */
    inline const Aws::String& GetMemberRealm() const{ return m_memberRealm; }
    inline void SetMemberRealm(const Aws::String& value) { m_memberRealm = value; }
    inline void SetMemberRealm(Aws::String&& value) { m_memberRealm = std::move(value); }
    inline void SetMemberRealm(const char* value) { m_memberRealm.assign(value); }
    inline ListGroupMembersResult& WithMemberRealm(const Aws::String& value) { SetMemberRealm(value); return *this;}
    inline ListGroupMembersResult& WithMemberRealm(Aws::String&& value) { SetMemberRealm(std::move(value)); return *this;}
    inline ListGroupMembersResult& WithMemberRealm(const char* value) { SetMemberRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The member information that the request returns. </p>
     */
    inline const Aws::Vector<Member>& GetMembers() const{ return m_members; }
    inline void SetMembers(const Aws::Vector<Member>& value) { m_members = value; }
    inline void SetMembers(Aws::Vector<Member>&& value) { m_members = std::move(value); }
    inline ListGroupMembersResult& WithMembers(const Aws::Vector<Member>& value) { SetMembers(value); return *this;}
    inline ListGroupMembersResult& WithMembers(Aws::Vector<Member>&& value) { SetMembers(std::move(value)); return *this;}
    inline ListGroupMembersResult& AddMembers(const Member& value) { m_members.push_back(value); return *this; }
    inline ListGroupMembersResult& AddMembers(Member&& value) { m_members.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> An encoded paging token for paginated calls that can be passed back to
     * retrieve the next page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListGroupMembersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupMembersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupMembersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline void SetRealm(const Aws::String& value) { m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realm.assign(value); }
    inline ListGroupMembersResult& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline ListGroupMembersResult& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline ListGroupMembersResult& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupMembersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupMembersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupMembersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::String m_memberRealm;

    Aws::Vector<Member> m_members;

    Aws::String m_nextToken;

    Aws::String m_realm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
