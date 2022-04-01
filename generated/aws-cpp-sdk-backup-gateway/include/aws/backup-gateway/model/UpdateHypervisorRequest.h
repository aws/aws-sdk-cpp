﻿/**
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
  class AWS_BACKUPGATEWAY_API UpdateHypervisorRequest : public BackupGatewayRequest
  {
  public:
    UpdateHypervisorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateHypervisor"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline UpdateHypervisorRequest& WithHost(const Aws::String& value) { SetHost(value); return *this;}

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline UpdateHypervisorRequest& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}

    /**
     * <p>The updated host of the hypervisor. This can be either an IP address or a
     * fully-qualified domain name (FQDN).</p>
     */
    inline UpdateHypervisorRequest& WithHost(const char* value) { SetHost(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline const Aws::String& GetHypervisorArn() const{ return m_hypervisorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline bool HypervisorArnHasBeenSet() const { return m_hypervisorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline void SetHypervisorArn(const Aws::String& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline void SetHypervisorArn(Aws::String&& value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline void SetHypervisorArn(const char* value) { m_hypervisorArnHasBeenSet = true; m_hypervisorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline UpdateHypervisorRequest& WithHypervisorArn(const Aws::String& value) { SetHypervisorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline UpdateHypervisorRequest& WithHypervisorArn(Aws::String&& value) { SetHypervisorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the hypervisor to update.</p>
     */
    inline UpdateHypervisorRequest& WithHypervisorArn(const char* value) { SetHypervisorArn(value); return *this;}


    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline const Aws::String& GetPassword() const{ return m_password; }

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline bool PasswordHasBeenSet() const { return m_passwordHasBeenSet; }

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline void SetPassword(const Aws::String& value) { m_passwordHasBeenSet = true; m_password = value; }

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline void SetPassword(Aws::String&& value) { m_passwordHasBeenSet = true; m_password = std::move(value); }

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline void SetPassword(const char* value) { m_passwordHasBeenSet = true; m_password.assign(value); }

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithPassword(const Aws::String& value) { SetPassword(value); return *this;}

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithPassword(Aws::String&& value) { SetPassword(std::move(value)); return *this;}

    /**
     * <p>The updated password for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithPassword(const char* value) { SetPassword(value); return *this;}


    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline const Aws::String& GetUsername() const{ return m_username; }

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline void SetUsername(const Aws::String& value) { m_usernameHasBeenSet = true; m_username = value; }

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline void SetUsername(Aws::String&& value) { m_usernameHasBeenSet = true; m_username = std::move(value); }

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline void SetUsername(const char* value) { m_usernameHasBeenSet = true; m_username.assign(value); }

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithUsername(const Aws::String& value) { SetUsername(value); return *this;}

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithUsername(Aws::String&& value) { SetUsername(std::move(value)); return *this;}

    /**
     * <p>The updated username for the hypervisor.</p>
     */
    inline UpdateHypervisorRequest& WithUsername(const char* value) { SetUsername(value); return *this;}

  private:

    Aws::String m_host;
    bool m_hostHasBeenSet;

    Aws::String m_hypervisorArn;
    bool m_hypervisorArnHasBeenSet;

    Aws::String m_password;
    bool m_passwordHasBeenSet;

    Aws::String m_username;
    bool m_usernameHasBeenSet;
  };

} // namespace Model
} // namespace BackupGateway
} // namespace Aws
