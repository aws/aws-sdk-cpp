/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directory-service-data/model/GroupSummary.h>
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
  class ListGroupsForMemberResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API ListGroupsForMemberResult();
    AWS_DIRECTORYSERVICEDATA_API ListGroupsForMemberResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API ListGroupsForMemberResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the member. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline ListGroupsForMemberResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ListGroupsForMemberResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The group information that the request returns. </p>
     */
    inline const Aws::Vector<GroupSummary>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupSummary>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupSummary>&& value) { m_groups = std::move(value); }
    inline ListGroupsForMemberResult& WithGroups(const Aws::Vector<GroupSummary>& value) { SetGroups(value); return *this;}
    inline ListGroupsForMemberResult& WithGroups(Aws::Vector<GroupSummary>&& value) { SetGroups(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& AddGroups(const GroupSummary& value) { m_groups.push_back(value); return *this; }
    inline ListGroupsForMemberResult& AddGroups(GroupSummary&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The domain that's associated with the member. </p>
     */
    inline const Aws::String& GetMemberRealm() const{ return m_memberRealm; }
    inline void SetMemberRealm(const Aws::String& value) { m_memberRealm = value; }
    inline void SetMemberRealm(Aws::String&& value) { m_memberRealm = std::move(value); }
    inline void SetMemberRealm(const char* value) { m_memberRealm.assign(value); }
    inline ListGroupsForMemberResult& WithMemberRealm(const Aws::String& value) { SetMemberRealm(value); return *this;}
    inline ListGroupsForMemberResult& WithMemberRealm(Aws::String&& value) { SetMemberRealm(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& WithMemberRealm(const char* value) { SetMemberRealm(value); return *this;}
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
    inline ListGroupsForMemberResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupsForMemberResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain that's associated with the group. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline void SetRealm(const Aws::String& value) { m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realm.assign(value); }
    inline ListGroupsForMemberResult& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline ListGroupsForMemberResult& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListGroupsForMemberResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListGroupsForMemberResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListGroupsForMemberResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::Vector<GroupSummary> m_groups;

    Aws::String m_memberRealm;

    Aws::String m_nextToken;

    Aws::String m_realm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
