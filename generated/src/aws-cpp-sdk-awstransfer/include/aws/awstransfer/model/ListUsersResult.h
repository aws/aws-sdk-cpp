﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/awstransfer/model/ListedUser.h>
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
namespace Transfer
{
namespace Model
{
  class ListUsersResult
  {
  public:
    AWS_TRANSFER_API ListUsersResult();
    AWS_TRANSFER_API ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TRANSFER_API ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command to the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
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
     * <p>A system-assigned unique identifier for a server that the users are assigned
     * to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }
    inline void SetServerId(const char* value) { m_serverId.assign(value); }
    inline ListUsersResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}
    inline ListUsersResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}
    inline ListUsersResult& WithServerId(const char* value) { SetServerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the Transfer Family users and their properties for the
     * <code>ServerId</code> value that you specify.</p>
     */
    inline const Aws::Vector<ListedUser>& GetUsers() const{ return m_users; }
    inline void SetUsers(const Aws::Vector<ListedUser>& value) { m_users = value; }
    inline void SetUsers(Aws::Vector<ListedUser>&& value) { m_users = std::move(value); }
    inline ListUsersResult& WithUsers(const Aws::Vector<ListedUser>& value) { SetUsers(value); return *this;}
    inline ListUsersResult& WithUsers(Aws::Vector<ListedUser>&& value) { SetUsers(std::move(value)); return *this;}
    inline ListUsersResult& AddUsers(const ListedUser& value) { m_users.push_back(value); return *this; }
    inline ListUsersResult& AddUsers(ListedUser&& value) { m_users.push_back(std::move(value)); return *this; }
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

    Aws::String m_nextToken;

    Aws::String m_serverId;

    Aws::Vector<ListedUser> m_users;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
