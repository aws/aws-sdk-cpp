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
  class AWS_TRANSFER_API ListUsersResult
  {
  public:
    ListUsersResult();
    ListUsersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListUsersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When you can get additional results from the <code>ListUsers</code> call, a
     * <code>NextToken</code> parameter is returned in the output. You can then pass in
     * a subsequent command the <code>NextToken</code> parameter to continue listing
     * additional users.</p>
     */
    inline ListUsersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline ListUsersResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline ListUsersResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server that the users are
     * assigned to.</p>
     */
    inline ListUsersResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline const Aws::Vector<ListedUser>& GetUsers() const{ return m_users; }

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline void SetUsers(const Aws::Vector<ListedUser>& value) { m_users = value; }

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline void SetUsers(Aws::Vector<ListedUser>&& value) { m_users = std::move(value); }

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline ListUsersResult& WithUsers(const Aws::Vector<ListedUser>& value) { SetUsers(value); return *this;}

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline ListUsersResult& WithUsers(Aws::Vector<ListedUser>&& value) { SetUsers(std::move(value)); return *this;}

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline ListUsersResult& AddUsers(const ListedUser& value) { m_users.push_back(value); return *this; }

    /**
     * <p>Returns the user accounts and their properties for the <code>ServerId</code>
     * value that you specify.</p>
     */
    inline ListUsersResult& AddUsers(ListedUser&& value) { m_users.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::String m_serverId;

    Aws::Vector<ListedUser> m_users;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
