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
    AWS_TRANSFER_API DeleteSshPublicKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSshPublicKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A system-assigned unique identifier for a file transfer protocol-enabled
     * server instance that has the user assigned to it.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    DeleteSshPublicKeyRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier used to reference your user's specific SSH key.</p>
     */
    inline const Aws::String& GetSshPublicKeyId() const { return m_sshPublicKeyId; }
    inline bool SshPublicKeyIdHasBeenSet() const { return m_sshPublicKeyIdHasBeenSet; }
    template<typename SshPublicKeyIdT = Aws::String>
    void SetSshPublicKeyId(SshPublicKeyIdT&& value) { m_sshPublicKeyIdHasBeenSet = true; m_sshPublicKeyId = std::forward<SshPublicKeyIdT>(value); }
    template<typename SshPublicKeyIdT = Aws::String>
    DeleteSshPublicKeyRequest& WithSshPublicKeyId(SshPublicKeyIdT&& value) { SetSshPublicKeyId(std::forward<SshPublicKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique string that identifies a user whose public key is being deleted.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    DeleteSshPublicKeyRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}
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
