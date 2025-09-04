/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/StackInstanceStatus.h>
#include <aws/cloudformation/model/StackInstanceComprehensiveStatus.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/Parameter.h>
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
   * <p>A CloudFormation stack, in a specific account and Region, that's part of a
   * StackSet operation. A stack instance is a reference to an attempted or actual
   * stack in a given account within a given Region. A stack instance can exist
   * without a stack—for example, if the stack couldn't be created for some reason. A
   * stack instance is associated with only one StackSet. Each stack instance
   * contains the ID of its associated StackSet, in addition to the ID of the actual
   * stack and the stack status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstance">AWS
   * API Reference</a></p>
   */
  class StackInstance
  {
  public:
    AWS_CLOUDFORMATION_API StackInstance() = default;
    AWS_CLOUDFORMATION_API StackInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name or unique ID of the StackSet that the stack instance is associated
     * with.</p>
     */
    inline const Aws::String& GetStackSetId() const { return m_stackSetId; }
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }
    template<typename StackSetIdT = Aws::String>
    void SetStackSetId(StackSetIdT&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::forward<StackSetIdT>(value); }
    template<typename StackSetIdT = Aws::String>
    StackInstance& WithStackSetId(StackSetIdT&& value) { SetStackSetId(std::forward<StackSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Web Services Region that the stack instance is
     * associated with.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    StackInstance& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Self-managed permissions] The name of the Amazon Web Services account that
     * the stack instance is associated with.</p>
     */
    inline const Aws::String& GetAccount() const { return m_account; }
    inline bool AccountHasBeenSet() const { return m_accountHasBeenSet; }
    template<typename AccountT = Aws::String>
    void SetAccount(AccountT&& value) { m_accountHasBeenSet = true; m_account = std::forward<AccountT>(value); }
    template<typename AccountT = Aws::String>
    StackInstance& WithAccount(AccountT&& value) { SetAccount(std::forward<AccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the stack instance.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    StackInstance& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of parameters from the StackSet template whose values have been
     * overridden in this stack instance.</p>
     */
    inline const Aws::Vector<Parameter>& GetParameterOverrides() const { return m_parameterOverrides; }
    inline bool ParameterOverridesHasBeenSet() const { return m_parameterOverridesHasBeenSet; }
    template<typename ParameterOverridesT = Aws::Vector<Parameter>>
    void SetParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides = std::forward<ParameterOverridesT>(value); }
    template<typename ParameterOverridesT = Aws::Vector<Parameter>>
    StackInstance& WithParameterOverrides(ParameterOverridesT&& value) { SetParameterOverrides(std::forward<ParameterOverridesT>(value)); return *this;}
    template<typename ParameterOverridesT = Parameter>
    StackInstance& AddParameterOverrides(ParameterOverridesT&& value) { m_parameterOverridesHasBeenSet = true; m_parameterOverrides.emplace_back(std::forward<ParameterOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the stack instance, in terms of its synchronization with its
     * associated stack set.</p> <ul> <li> <p> <code>INOPERABLE</code>: A
     * <code>DeleteStackInstances</code> operation has failed and left the stack in an
     * unstable state. Stacks in this state are excluded from further
     * <code>UpdateStackSet</code> operations. You might need to perform a
     * <code>DeleteStackInstances</code> operation, with <code>RetainStacks</code> set
     * to <code>true</code>, to delete the stack instance, and then delete the stack
     * manually. <code>INOPERABLE</code> can be returned here when the cause is a
     * failed import. If it's due to a failed import, the operation can be retried once
     * the failures are fixed. To see if this is due to a failed import, look at the
     * <code>DetailedStatus</code> member in the <code>StackInstanceSummary</code>
     * member that is a peer to this <code>Status</code> member.</p> </li> <li> <p>
     * <code>OUTDATED</code>: The stack isn't currently up to date with the StackSet
     * because:</p> <ul> <li> <p>The associated stack failed during a
     * <code>CreateStackSet</code> or <code>UpdateStackSet</code> operation.</p> </li>
     * <li> <p>The stack was part of a <code>CreateStackSet</code> or
     * <code>UpdateStackSet</code> operation that failed or was stopped before the
     * stack was created or updated.</p> </li> </ul> </li> <li> <p>
     * <code>CURRENT</code>: The stack is currently up to date with the StackSet.</p>
     * </li> </ul>
     */
    inline StackInstanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackInstanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackInstance& WithStatus(StackInstanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed status of the stack instance.</p>
     */
    inline const StackInstanceComprehensiveStatus& GetStackInstanceStatus() const { return m_stackInstanceStatus; }
    inline bool StackInstanceStatusHasBeenSet() const { return m_stackInstanceStatusHasBeenSet; }
    template<typename StackInstanceStatusT = StackInstanceComprehensiveStatus>
    void SetStackInstanceStatus(StackInstanceStatusT&& value) { m_stackInstanceStatusHasBeenSet = true; m_stackInstanceStatus = std::forward<StackInstanceStatusT>(value); }
    template<typename StackInstanceStatusT = StackInstanceComprehensiveStatus>
    StackInstance& WithStackInstanceStatus(StackInstanceStatusT&& value) { SetStackInstanceStatus(std::forward<StackInstanceStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The explanation for the specific status code that's assigned to this stack
     * instance.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StackInstance& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
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
    StackInstance& WithOrganizationalUnitId(OrganizationalUnitIdT&& value) { SetOrganizationalUnitId(std::forward<OrganizationalUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the stack instance's actual configuration compared to the expected
     * template and parameter configuration of the StackSet it belongs to.</p> <ul>
     * <li> <p> <code>DRIFTED</code>: The stack differs from the expected template and
     * parameter configuration of the StackSet it belongs to. A stack instance is
     * considered to have drifted if one or more of the resources in the associated
     * stack have drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation
     * hasn't checked if the stack instance differs from its expected StackSet
     * configuration.</p> </li> <li> <p> <code>IN_SYNC</code>: The stack instance's
     * actual configuration matches its expected StackSset configuration.</p> </li>
     * <li> <p> <code>UNKNOWN</code>: This value is reserved for future use.</p> </li>
     * </ul>
     */
    inline StackDriftStatus GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(StackDriftStatus value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline StackInstance& WithDriftStatus(StackDriftStatus value) { SetDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack instance. This value will be <code>NULL</code> for any stack instance
     * that drift detection hasn't yet been performed on.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftCheckTimestamp() const { return m_lastDriftCheckTimestamp; }
    inline bool LastDriftCheckTimestampHasBeenSet() const { return m_lastDriftCheckTimestampHasBeenSet; }
    template<typename LastDriftCheckTimestampT = Aws::Utils::DateTime>
    void SetLastDriftCheckTimestamp(LastDriftCheckTimestampT&& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = std::forward<LastDriftCheckTimestampT>(value); }
    template<typename LastDriftCheckTimestampT = Aws::Utils::DateTime>
    StackInstance& WithLastDriftCheckTimestamp(LastDriftCheckTimestampT&& value) { SetLastDriftCheckTimestamp(std::forward<LastDriftCheckTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last unique ID of a StackSet operation performed on a stack instance.</p>
     */
    inline const Aws::String& GetLastOperationId() const { return m_lastOperationId; }
    inline bool LastOperationIdHasBeenSet() const { return m_lastOperationIdHasBeenSet; }
    template<typename LastOperationIdT = Aws::String>
    void SetLastOperationId(LastOperationIdT&& value) { m_lastOperationIdHasBeenSet = true; m_lastOperationId = std::forward<LastOperationIdT>(value); }
    template<typename LastOperationIdT = Aws::String>
    StackInstance& WithLastOperationId(LastOperationIdT&& value) { SetLastOperationId(std::forward<LastOperationIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Aws::String m_account;
    bool m_accountHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::Vector<Parameter> m_parameterOverrides;
    bool m_parameterOverridesHasBeenSet = false;

    StackInstanceStatus m_status{StackInstanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    StackInstanceComprehensiveStatus m_stackInstanceStatus;
    bool m_stackInstanceStatusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::String m_organizationalUnitId;
    bool m_organizationalUnitIdHasBeenSet = false;

    StackDriftStatus m_driftStatus{StackDriftStatus::NOT_SET};
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastDriftCheckTimestamp{};
    bool m_lastDriftCheckTimestampHasBeenSet = false;

    Aws::String m_lastOperationId;
    bool m_lastOperationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
