/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteSshPublicKeyRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API DeleteSshPublicKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSshPublicKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline const Aws::String& GetServerId() const{ return m_serverId; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(const Aws::String& value) { m_serverIdHasBeenSet = true; m_serverId = value; }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(Aws::String&& value) { m_serverIdHasBeenSet = true; m_serverId = std::move(value); }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline void SetServerId(const char* value) { m_serverIdHasBeenSet = true; m_serverId.assign(value); }

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline DeleteSshPublicKeyRequest& WithServerId(const Aws::String& value) { SetServerId(value); return *this;}

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline DeleteSshPublicKeyRequest& WithServerId(Aws::String&& value) { SetServerId(std::move(value)); return *this;}

    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
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
    bool m_serverIdHasBeenSet = false;

    Aws::String m_sshPublicKeyId;
    bool m_sshPublicKeyIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
