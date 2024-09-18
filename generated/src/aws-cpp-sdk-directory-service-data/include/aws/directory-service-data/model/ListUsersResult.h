/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directory-service-data/model/UserSummary.h>
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
  class ListUsersResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API ListUsersResult();
    AWS_DIRECTORYSERVICEDATA_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline ListUsersResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ListUsersResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ListUsersResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
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
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain that's associated with the user. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline void SetRealm(const Aws::String& value) { m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realm.assign(value); }
    inline ListUsersResult& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline ListUsersResult& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline ListUsersResult& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The user information that the request returns. </p>
     */
    inline const Aws::Vector<UserSummary>& GetUsers() const{ return m_users; }
    inline void SetUsers(const Aws::Vector<UserSummary>& value) { m_users = value; }
    inline void SetUsers(Aws::Vector<UserSummary>&& value) { m_users = std::move(value); }
    inline ListUsersResult& WithUsers(const Aws::Vector<UserSummary>& value) { SetUsers(value); return *this;}
    inline ListUsersResult& WithUsers(Aws::Vector<UserSummary>&& value) { SetUsers(std::move(value)); return *this;}
    inline ListUsersResult& AddUsers(const UserSummary& value) { m_users.push_back(value); return *this; }
    inline ListUsersResult& AddUsers(UserSummary&& value) { m_users.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListUsersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListUsersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListUsersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::String m_nextToken;

    Aws::String m_realm;

    Aws::Vector<UserSummary> m_users;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
