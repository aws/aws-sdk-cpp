/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationResultStatus.h>
#include <aws/cloudformation/model/AccountGateResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>The structure that contains information about a specified operation's results
   * for a given account in a given Region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationResultSummary">AWS
   * API Reference</a></p>
   */
  class StackSetOperationResultSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperationResultSummary() = default;
    AWS_CLOUDFORMATION_API StackSetOperationResultSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperationResultSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>[Self-managed permissions] The name of the Amazon Web Services account for
     * this operation result.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    StackSetOperationResultSummary& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Region for this operation result.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    StackSetOperationResultSummary& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The result status of the StackSet operation for the given account in the
     * given Region.</p> <ul> <li> <p> <code>CANCELLED</code>: The operation in the
     * specified account and Region has been canceled. This is either because a user
     * has stopped the StackSet operation, or because the failure tolerance of the
     * StackSet operation has been exceeded.</p> </li> <li> <p> <code>FAILED</code>:
     * The operation in the specified account and Region failed.</p> <p>If the StackSet
     * operation fails in enough accounts within a Region, the failure tolerance for
     * the StackSet operation as a whole might be exceeded.</p> </li> <li> <p>
     * <code>RUNNING</code>: The operation in the specified account and Region is
     * currently in progress.</p> </li> <li> <p> <code>PENDING</code>: The operation in
     * the specified account and Region has yet to start.</p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation in the specified account and Region
     * completed successfully.</p> </li> </ul>
     */
    inline StackSetOperationResultStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackSetOperationResultStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackSetOperationResultSummary& WithStatus(StackSetOperationResultStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the assigned result status.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StackSetOperationResultSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the account gate function CloudFormation invokes, if present,
     * before proceeding with StackSet operations in an account.</p>
     */
    inline const AccountGateResult& GetAccountGateResult() const { return m_accountGateResult; }
    inline bool AccountGateResultHasBeenSet() const { return m_accountGateResultHasBeenSet; }
    template<typename AccountGateResultT = AccountGateResult>
    void SetAccountGateResult(AccountGateResultT&& value) { m_accountGateResultHasBeenSet = true; m_accountGateResult = std::forward<AccountGateResultT>(value); }
    template<typename AccountGateResultT = AccountGateResult>
    StackSetOperationResultSummary& WithAccountGateResult(AccountGateResultT&& value) { SetAccountGateResult(std::forward<AccountGateResultT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] The organization root ID or organizational unit
     * (OU) IDs that you specified for <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_DeploymentTargets.html">DeploymentTargets</a>.</p>
     */
    inline const Aws::String& GetOrganizationalUnitId() const { return m_organizationalUnitId; }
    inline bool OrganizationalUnitIdHasBeenSet() const { return m_organizationalUnitIdHasBeenSet; }
    template<typename OrganizationalUnitIdT = Aws::String>
    void SetOrganizationalUnitId(OrganizationalUnitIdT&& value) { m_organizationalUnitIdHasBeenSet = true; m_organizationalUnitId = std::forward<OrganizationalUnitIdT>(value); }
    template<typename OrganizationalUnitIdT = Aws::String>
    StackSetOperationResultSummary& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    StackSetOperationResultStatus m_status{StackSetOperationResultStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    AccountGateResult m_accountGateResult;
    bool m_accountGateResultHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
