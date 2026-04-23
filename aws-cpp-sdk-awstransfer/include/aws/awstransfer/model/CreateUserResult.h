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
  class AWS_TRANSFER_API CreateUserResult
  {
  public:
    CreateUserResult();
    CreateUserResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateUserResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SFTP server that the user is attached to.</p>
     */
    inline CreateUserResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline CreateUserResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline CreateUserResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user account associated with an SFTP
     * server.</p>
     */
    inline CreateUserResult& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_userName;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
