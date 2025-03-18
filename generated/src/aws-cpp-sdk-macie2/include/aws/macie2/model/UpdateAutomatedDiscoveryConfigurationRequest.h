/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/macie2/model/AutoEnableMode.h>
#include <aws/macie2/model/AutomatedDiscoveryStatus.h>
#include <utility>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class UpdateAutomatedDiscoveryConfigurationRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API UpdateAutomatedDiscoveryConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAutomatedDiscoveryConfiguration"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies whether to automatically enable automated sensitive data discovery
     * for accounts in the organization. Valid values are: ALL (default), enable it for
     * all existing accounts and new member accounts; NEW, enable it only for new
     * member accounts; and, NONE, don't enable it for any accounts.</p> <p>If you
     * specify NEW or NONE, automated sensitive data discovery continues to be enabled
     * for any existing accounts that it's currently enabled for. To enable or disable
     * it for individual member accounts, specify NEW or NONE, and then enable or
     * disable it for each account by using the BatchUpdateAutomatedDiscoveryAccounts
     * operation.</p>
     */
    inline AutoEnableMode GetAutoEnableOrganizationMembers() const { return m_autoEnableOrganizationMembers; }
    inline bool AutoEnableOrganizationMembersHasBeenSet() const { return m_autoEnableOrganizationMembersHasBeenSet; }
    inline void SetAutoEnableOrganizationMembers(AutoEnableMode value) { m_autoEnableOrganizationMembersHasBeenSet = true; m_autoEnableOrganizationMembers = value; }
    inline UpdateAutomatedDiscoveryConfigurationRequest& WithAutoEnableOrganizationMembers(AutoEnableMode value) { SetAutoEnableOrganizationMembers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new status of automated sensitive data discovery for the organization or
     * account. Valid values are: ENABLED, start or resume all automated sensitive data
     * discovery activities; and, DISABLED, stop performing all automated sensitive
     * data discovery activities.</p> <p>If you specify DISABLED for an administrator
     * account, you also disable automated sensitive data discovery for all member
     * accounts in the organization.</p>
     */
    inline AutomatedDiscoveryStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AutomatedDiscoveryStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline UpdateAutomatedDiscoveryConfigurationRequest& WithStatus(AutomatedDiscoveryStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    AutoEnableMode m_autoEnableOrganizationMembers{AutoEnableMode::NOT_SET};
    bool m_autoEnableOrganizationMembersHasBeenSet = false;

    AutomatedDiscoveryStatus m_status{AutomatedDiscoveryStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
