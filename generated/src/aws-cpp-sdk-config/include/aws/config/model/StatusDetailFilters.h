/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/MemberAccountRuleStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ConfigService
{
namespace Model
{

  /**
   * <p>Status filter object to filter results based on specific member account ID or
   * status type for an organization Config rule. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StatusDetailFilters">AWS
   * API Reference</a></p>
   */
  class StatusDetailFilters
  {
  public:
    AWS_CONFIGSERVICE_API StatusDetailFilters() = default;
    AWS_CONFIGSERVICE_API StatusDetailFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API StatusDetailFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The 12-digit account ID of the member account within an organization.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    StatusDetailFilters& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status for Config rule in the member account. When
     * management account calls <code>PutOrganizationConfigRule</code> action for the
     * first time, Config rule status is created in the member account. When management
     * account calls <code>PutOrganizationConfigRule</code> action for the second time,
     * Config rule status is updated in the member account. Config rule status is
     * deleted when the management account deletes <code>OrganizationConfigRule</code>
     * and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>. </p> <p>Config sets the
     * state of the rule to:</p> <ul> <li> <p> <code>CREATE_SUCCESSFUL</code> when
     * Config rule has been created in the member account.</p> </li> <li> <p>
     * <code>CREATE_IN_PROGRESS</code> when Config rule is being created in the member
     * account.</p> </li> <li> <p> <code>CREATE_FAILED</code> when Config rule creation
     * has failed in the member account.</p> </li> <li> <p> <code>DELETE_FAILED</code>
     * when Config rule deletion has failed in the member account.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when Config rule is being deleted in the member
     * account.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when Config rule has
     * been deleted in the member account.</p> </li> <li> <p>
     * <code>UPDATE_SUCCESSFUL</code> when Config rule has been updated in the member
     * account.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> when Config rule is
     * being updated in the member account.</p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> when Config rule deletion has failed in the member
     * account.</p> </li> </ul>
     */
    inline MemberAccountRuleStatus GetMemberAccountRuleStatus() const { return m_memberAccountRuleStatus; }
    inline bool MemberAccountRuleStatusHasBeenSet() const { return m_memberAccountRuleStatusHasBeenSet; }
    inline void SetMemberAccountRuleStatus(MemberAccountRuleStatus value) { m_memberAccountRuleStatusHasBeenSet = true; m_memberAccountRuleStatus = value; }
    inline StatusDetailFilters& WithMemberAccountRuleStatus(MemberAccountRuleStatus value) { SetMemberAccountRuleStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    MemberAccountRuleStatus m_memberAccountRuleStatus{MemberAccountRuleStatus::NOT_SET};
    bool m_memberAccountRuleStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
