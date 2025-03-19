/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/Protocol.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class TestIdentityProviderRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API TestIdentityProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestIdentityProvider"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A system-assigned identifier for a specific server. That server's user
     * authentication method is tested with a user name and password.</p>
     */
    inline const Aws::String& GetServerId() const { return m_serverId; }
    inline bool ServerIdHasBeenSet() const { return m_serverIdHasBeenSet; }
    template<typename ServerIdT = Aws::String>
    void SetServerId(ServerIdT&& value) { m_serverIdHasBeenSet = true; m_serverId = std::forward<ServerIdT>(value); }
    template<typename ServerIdT = Aws::String>
    TestIdentityProviderRequest& WithServerId(ServerIdT&& value) { SetServerId(std::forward<ServerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of file transfer protocol to be tested.</p> <p>The available
     * protocols are:</p> <ul> <li> <p>Secure Shell (SSH) File Transfer Protocol
     * (SFTP)</p> </li> <li> <p>File Transfer Protocol Secure (FTPS)</p> </li> <li>
     * <p>File Transfer Protocol (FTP)</p> </li> <li> <p>Applicability Statement 2
     * (AS2)</p> </li> </ul>
     */
    inline Protocol GetServerProtocol() const { return m_serverProtocol; }
    inline bool ServerProtocolHasBeenSet() const { return m_serverProtocolHasBeenSet; }
    inline void SetServerProtocol(Protocol value) { m_serverProtocolHasBeenSet = true; m_serverProtocol = value; }
    inline TestIdentityProviderRequest& WithServerProtocol(Protocol value) { SetServerProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source IP address of the account to be tested.</p>
     */
    inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    template<typename SourceIpT = Aws::String>
    void SetSourceIp(SourceIpT&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::forward<SourceIpT>(value); }
    template<typename SourceIpT = Aws::String>
    TestIdentityProviderRequest& WithSourceIp(SourceIpT&& value) { SetSourceIp(std::forward<SourceIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the account to be tested.</p>
     */
    inline const Aws::String& GetUserName() const { return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    template<typename UserNameT = Aws::String>
    void SetUserName(UserNameT&& value) { m_userNameHasBeenSet = true; m_userName = std::forward<UserNameT>(value); }
    template<typename UserNameT = Aws::String>
    TestIdentityProviderRequest& WithUserName(UserNameT&& value) { SetUserName(std::forward<UserNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the account to be tested.</p>
     */
    inline const Aws::String& GetUserPassword() const { return m_userPassword; }
    inline bool UserPasswordHasBeenSet() const { return m_userPasswordHasBeenSet; }
    template<typename UserPasswordT = Aws::String>
    void SetUserPassword(UserPasswordT&& value) { m_userPasswordHasBeenSet = true; m_userPassword = std::forward<UserPasswordT>(value); }
    template<typename UserPasswordT = Aws::String>
    TestIdentityProviderRequest& WithUserPassword(UserPasswordT&& value) { SetUserPassword(std::forward<UserPasswordT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serverId;
    bool m_serverIdHasBeenSet = false;

    Protocol m_serverProtocol{Protocol::NOT_SET};
    bool m_serverProtocolHasBeenSet = false;

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_userPassword;
    bool m_userPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
