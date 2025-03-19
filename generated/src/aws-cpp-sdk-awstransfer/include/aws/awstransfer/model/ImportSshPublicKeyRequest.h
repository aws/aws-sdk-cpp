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
  class ImportSshPublicKeyRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ImportSshPublicKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportSshPublicKey"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A system-assigned unique identifier for a server.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    ImportSshPublicKeyRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public key portion of an SSH key pair.</p> <p>Transfer Family accepts
     * RSA, ECDSA, and ED25519 keys.</p>
     */
    inline const Aws::String& GetSshPublicKeyBody() const { return m_sshPublicKeyBody; }
    inline bool SshPublicKeyBodyHasBeenSet() const { return m_sshPublicKeyBodyHasBeenSet; }
    template<typename SshPublicKeyBodyT = Aws::String>
    void SetSshPublicKeyBody(SshPublicKeyBodyT&& value) { m_sshPublicKeyBodyHasBeenSet = true; m_sshPublicKeyBody = std::forward<SshPublicKeyBodyT>(value); }
    template<typename SshPublicKeyBodyT = Aws::String>
    ImportSshPublicKeyRequest& WithSshPublicKeyBody(SshPublicKeyBodyT&& value) { SetSshPublicKeyBody(std::forward<SshPublicKeyBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Transfer Family user that is assigned to one or more
     * servers.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    ImportSshPublicKeyRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Aws::String m_sshPublicKeyBody;
    bool m_sshPublicKeyBodyHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
