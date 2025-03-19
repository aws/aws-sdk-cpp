/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/config/model/OrganizationResourceDetailedStatus.h>
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
   * status type for an organization conformance pack.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/OrganizationResourceDetailedStatusFilters">AWS
   * API Reference</a></p>
   */
  class OrganizationResourceDetailedStatusFilters
  {
  public:
    AWS_CONFIGSERVICE_API OrganizationResourceDetailedStatusFilters() = default;
    AWS_CONFIGSERVICE_API OrganizationResourceDetailedStatusFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONFIGSERVICE_API OrganizationResourceDetailedStatusFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    OrganizationResourceDetailedStatusFilters& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates deployment status for conformance pack in a member account. When
     * management account calls <code>PutOrganizationConformancePack</code> action for
     * the first time, conformance pack status is created in the member account. When
     * management account calls <code>PutOrganizationConformancePack</code> action for
     * the second time, conformance pack status is updated in the member account.
     * Conformance pack status is deleted when the management account deletes
     * <code>OrganizationConformancePack</code> and disables service access for
     * <code>config-multiaccountsetup.amazonaws.com</code>. </p> <p> Config sets the
     * state of the conformance pack to:</p> <ul> <li> <p>
     * <code>CREATE_SUCCESSFUL</code> when conformance pack has been created in the
     * member account. </p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> when
     * conformance pack is being created in the member account.</p> </li> <li> <p>
     * <code>CREATE_FAILED</code> when conformance pack creation has failed in the
     * member account.</p> </li> <li> <p> <code>DELETE_FAILED</code> when conformance
     * pack deletion has failed in the member account.</p> </li> <li> <p>
     * <code>DELETE_IN_PROGRESS</code> when conformance pack is being deleted in the
     * member account.</p> </li> <li> <p> <code>DELETE_SUCCESSFUL</code> when
     * conformance pack has been deleted in the member account. </p> </li> <li> <p>
     * <code>UPDATE_SUCCESSFUL</code> when conformance pack has been updated in the
     * member account.</p> </li> <li> <p> <code>UPDATE_IN_PROGRESS</code> when
     * conformance pack is being updated in the member account.</p> </li> <li> <p>
     * <code>UPDATE_FAILED</code> when conformance pack deletion has failed in the
     * member account.</p> </li> </ul>
     */
    inline OrganizationResourceDetailedStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(OrganizationResourceDetailedStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline OrganizationResourceDetailedStatusFilters& WithStatus(OrganizationResourceDetailedStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    OrganizationResourceDetailedStatus m_status{OrganizationResourceDetailedStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace ConfigService
} // namespace Aws
