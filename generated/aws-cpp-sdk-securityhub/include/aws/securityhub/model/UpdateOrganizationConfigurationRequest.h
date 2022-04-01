/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class AWS_SECURITYHUB_API UpdateOrganizationConfigurationRequest : public SecurityHubRequest
  {
  public:
    UpdateOrganizationConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationConfiguration"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline bool GetAutoEnable() const{ return m_autoEnable; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline bool AutoEnableHasBeenSet() const { return m_autoEnableHasBeenSet; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline void SetAutoEnable(bool value) { m_autoEnableHasBeenSet = true; m_autoEnable = value; }

    /**
     * <p>Whether to automatically enable Security Hub for new accounts in the
     * organization.</p> <p>By default, this is <code>false</code>, and new accounts
     * are not added automatically.</p> <p>To automatically enable Security Hub for new
     * accounts, set this to <code>true</code>.</p>
     */
    inline UpdateOrganizationConfigurationRequest& WithAutoEnable(bool value) { SetAutoEnable(value); return *this;}

  private:

    bool m_autoEnable;
    bool m_autoEnableHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
