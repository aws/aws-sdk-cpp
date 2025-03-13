/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/backup-gateway/BackupGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BackupGateway
{
namespace Model
{

  /**
   */
  class UpdateHypervisorRequest : public BackupGatewayRequest
  {
  public:
    AWS_BACKUPGATEWAY_API UpdateHypervisorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHypervisor"; }

    AWS_BACKUPGATEWAY_API Aws::String SerializePayload() const override;

    AWS_BACKUPGATEWAY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    UpdateHypervisorRequest& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline const Aws::String& GetHypervisorArn() const { return m_hypervisorArn; }
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }
    template<typename HypervisorArnT = Aws::String>
    void SetHypervisorArn(HypervisorArnT&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::forward<HypervisorArnT>(value); }
    template<typename HypervisorArnT = Aws::String>
    UpdateHypervisorRequest& WithHypervisorArn(HypervisorArnT&& value) { SetHypervisorArn(std::forward<HypervisorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the group of gateways within the requested
     * log.</p>
     */
    inline const Aws::String& GetLogGroupArn() const { return m_logGroupArn; }
    inline bool LogGroupArnHasBeenSet() const { return m_logGroupArnHasBeenSet; }
    template<typename LogGroupArnT = Aws::String>
    void SetLogGroupArn(LogGroupArnT&& value) { m_logGroupArnHasBeenSet = true; m_logGroupArn = std::forward<LogGroupArnT>(value); }
    template<typename LogGroupArnT = Aws::String>
    UpdateHypervisorRequest& WithLogGroupArn(LogGroupArnT&& value) { SetLogGroupArn(std::forward<LogGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated name for the hypervisor</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateHypervisorRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline const Aws::String& GetPassword() const { return m_password; }
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }
    template<typename PasswordT = Aws::String>
    void SetPassword(PasswordT&& value) { m_passwordHasBeenSet = true; m_password = std::forward<PasswordT>(value); }
    template<typename PasswordT = Aws::String>
    UpdateHypervisorRequest& WithPassword(PasswordT&& value) { SetPassword(std::forward<PasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline const Aws::String& GetUsername() const { return m_username; }
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
    template<typename UsernameT = Aws::String>
    void SetUsername(UsernameT&& value) { m_usernameHasBeenSet = true; m_username = std::forward<UsernameT>(value); }
    template<typename UsernameT = Aws::String>
    UpdateHypervisorRequest& WithUsername(UsernameT&& value) { SetUsername(std::forward<UsernameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet = false;

    Aws::String m_logGroupArn;
    bool m_logGroupArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_password;
    bool m_passwordHasBeenSet = false;

    Aws::String m_username;
    bool m_usernameHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
