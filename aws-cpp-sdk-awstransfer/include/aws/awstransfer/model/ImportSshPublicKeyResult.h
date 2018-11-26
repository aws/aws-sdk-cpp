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
  /**
   * <p>This response identifies the user, server they belong to, and the identifier
   * of the SSH public key associated with that user. A user can have more than one
   * key on each server that they are associate with.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ImportSshPublicKeyResponse">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API ImportSshPublicKeyResult
  {
  public:
    ImportSshPublicKeyResult();
    ImportSshPublicKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ImportSshPublicKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(const char* value) { m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyResult& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyResult& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyResult& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const{ return m_sshPublicKeyId; }

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline void SetSshPublicKeyId(const Aws::String& value) { m_sshPublicKeyId = value; }

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline void SetSshPublicKeyId(Aws::String&& value) { m_sshPublicKeyId = std::move(value); }

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline void SetSshPublicKeyId(const char* value) { m_sshPublicKeyId.assign(value); }

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(const Aws::String& value) { SetSshPublicKeyId(value); return *this;}

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(Aws::String&& value) { SetSshPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>This identifier is the name given to a public key by the system that was
     * imported.</p>
     */
    inline ImportSshPublicKeyResult& WithSshPublicKeyId(const char* value) { SetSshPublicKeyId(value); return *this;}


    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userName = value; }

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userName = std::move(value); }

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline void SetUserName(const char* value) { m_userName.assign(value); }

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline ImportSshPublicKeyResult& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline ImportSshPublicKeyResult& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A user name assigned to the <code>ServerID</code> value that you
     * specified.</p>
     */
    inline ImportSshPublicKeyResult& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_serverId;

    Aws::String m_sshPublicKeyId;

    Aws::String m_userName;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
