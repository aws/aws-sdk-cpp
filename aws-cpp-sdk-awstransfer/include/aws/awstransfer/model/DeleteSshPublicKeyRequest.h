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
  class AWS_TRANSFER_API DeleteSshPublicKeyRequest : public TransferRequest
  {
  public:
    DeleteSshPublicKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSshPublicKey"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline DeleteSshPublicKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline DeleteSshPublicKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a Secure File Transfer Protocol
     * (SFTP) server instance that has the user assigned to it.</p>
     */
    inline DeleteSshPublicKeyRequest& WithServerId(const char* value) { SetServerId(value); return *this;}


    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const{ return m_sshPublicKeyId; }

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline bool SshPublicKeyIdHasBeenSet() const { return m_sshPublicKeyIdHasBeenSet; }

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline void SetSshPublicKeyId(const Aws::String& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = value; }

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline void SetSshPublicKeyId(Aws::String&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::move(value); }

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline void SetSshPublicKeyId(const char* value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId.assign(value); }

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline DeleteSshPublicKeyRequest& WithSshPublicKeyId(const Aws::String& value) { SetSshPublicKeyId(value); return *this;}

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline DeleteSshPublicKeyRequest& WithSshPublicKeyId(Aws::String&& value) { SetSshPublicKeyId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline DeleteSshPublicKeyRequest& WithSshPublicKeyId(const char* value) { SetSshPublicKeyId(value); return *this;}


    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline DeleteSshPublicKeyRequest& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline DeleteSshPublicKeyRequest& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline DeleteSshPublicKeyRequest& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet;

    Aws::String m_userName;
    bool m_userNameHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
