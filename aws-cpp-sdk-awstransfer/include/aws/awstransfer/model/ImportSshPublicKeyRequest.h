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
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class AWS_TRANSFER_API ImportSshPublicKeyRequest : public TransferRequest
  {
  public:
    ImportSshPublicKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSshPublicKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for an SFTP server.</p>
     */
    inline ImportSshPublicKeyRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const{ return m_sshPublicKeyBody; }

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline void SetSshPublicKeyBody(const Aws::String& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = value; }

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline void SetSshPublicKeyBody(Aws::String&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::move(value); }

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline void SetSshPublicKeyBody(const char* value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody.assign(value); }

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline ImportSshPublicKeyRequest& WithSshPublicKeyBody(const Aws::String& value) { SetSshPublicKeyBody(value); return *this;}

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline ImportSshPublicKeyRequest& WithSshPublicKeyBody(Aws::String&& value) { SetSshPublicKeyBody(std::move(value)); return *this;}

    /**
     * <p>The public key portion of an SSH key pair.</p>
     */
    inline ImportSshPublicKeyRequest& WithSshPublicKeyBody(const char* value) { SetSshPublicKeyBody(value); return *this;}


    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline ImportSshPublicKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline ImportSshPublicKeyRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the user account that is assigned to one or more servers.</p>
     */
    inline ImportSshPublicKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
