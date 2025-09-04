/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetStatus.h>
#include <aws/cloudformation/model/AutoDeployment.h>
#include <aws/cloudformation/model/PermissionModels.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/ManagedExecution.h>
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
   * <p>The structures that contain summary information about the specified
   * StackSet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetSummary">AWS
   * API Reference</a></p>
   */
  class StackSetSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackSetSummary() = default;
    AWS_CLOUDFORMATION_API StackSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the StackSet.</p>
     */
    inline const Aws::String& GetStackSetName() const { return m_stackSetName; }
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }
    template<typename StackSetNameT = Aws::String>
    void SetStackSetName(StackSetNameT&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::forward<StackSetNameT>(value); }
    template<typename StackSetNameT = Aws::String>
    StackSetSummary& WithStackSetName(StackSetNameT&& value) { SetStackSetName(std::forward<StackSetNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the StackSet.</p>
     */
    inline const Aws::String& GetStackSetId() const { return m_stackSetId; }
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }
    template<typename StackSetIdT = Aws::String>
    void SetStackSetId(StackSetIdT&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::forward<StackSetIdT>(value); }
    template<typename StackSetIdT = Aws::String>
    StackSetSummary& WithStackSetId(StackSetIdT&& value) { SetStackSetId(std::forward<StackSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the StackSet that you specify when the StackSet is created
     * or updated.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    StackSetSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the StackSet.</p>
     */
    inline StackSetStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackSetStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackSetSummary& WithStatus(StackSetStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const { return m_autoDeployment; }
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }
    template<typename AutoDeploymentT = AutoDeployment>
    void SetAutoDeployment(AutoDeploymentT&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::forward<AutoDeploymentT>(value); }
    template<typename AutoDeploymentT = AutoDeployment>
    StackSetSummary& WithAutoDeployment(AutoDeploymentT&& value) { SetAutoDeployment(std::forward<AutoDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes how the IAM roles required for StackSet operations are created.</p>
     * <ul> <li> <p>With <code>self-managed</code> permissions, you must create the
     * administrator and execution roles required to deploy to target accounts. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * self-managed permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-orgs-activate-trusted-access.html">Activate
     * trusted access for StackSets with Organizations</a>.</p> </li> </ul>
     */
    inline PermissionModels GetPermissionModel() const { return m_permissionModel; }
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
    inline void SetPermissionModel(PermissionModels value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }
    inline StackSetSummary& WithPermissionModel(PermissionModels value) { SetPermissionModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status of the StackSet's actual configuration compared to its expected
     * template and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>:
     * One or more of the stack instances belonging to the StackSet differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the StackSet for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All the
     * stack instances belonging to the StackSet match the expected template and
     * parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: This value is
     * reserved for future use.</p> </li> </ul>
     */
    inline StackDriftStatus GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    inline void SetDriftStatus(StackDriftStatus value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }
    inline StackSetSummary& WithDriftStatus(StackDriftStatus value) { SetDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the StackSet. This value will be <code>NULL</code> for any StackSet that drift
     * detection hasn't yet been performed on.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftCheckTimestamp() const { return m_lastDriftCheckTimestamp; }
    inline bool LastDriftCheckTimestampHasBeenSet() const { return m_lastDriftCheckTimestampHasBeenSet; }
    template<typename LastDriftCheckTimestampT = Aws::Utils::DateTime>
    void SetLastDriftCheckTimestamp(LastDriftCheckTimestampT&& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = std::forward<LastDriftCheckTimestampT>(value); }
    template<typename LastDriftCheckTimestampT = Aws::Utils::DateTime>
    StackSetSummary& WithLastDriftCheckTimestamp(LastDriftCheckTimestampT&& value) { SetLastDriftCheckTimestamp(std::forward<LastDriftCheckTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline const ManagedExecution& GetManagedExecution() const { return m_managedExecution; }
    inline bool ManagedExecutionHasBeenSet() const { return m_managedExecutionHasBeenSet; }
    template<typename ManagedExecutionT = ManagedExecution>
    void SetManagedExecution(ManagedExecutionT&& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = std::forward<ManagedExecutionT>(value); }
    template<typename ManagedExecutionT = ManagedExecution>
    StackSetSummary& WithManagedExecution(ManagedExecutionT&& value) { SetManagedExecution(std::forward<ManagedExecutionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackSetStatus m_status{StackSetStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    PermissionModels m_permissionModel{PermissionModels::NOT_SET};
    bool m_permissionModelHasBeenSet = false;

    StackDriftStatus m_driftStatus{StackDriftStatus::NOT_SET};
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastDriftCheckTimestamp{};
    bool m_lastDriftCheckTimestampHasBeenSet = false;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
