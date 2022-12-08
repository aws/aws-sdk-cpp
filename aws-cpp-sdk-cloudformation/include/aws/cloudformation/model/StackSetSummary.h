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
   * <p>The structures that contain summary information about the specified stack
   * set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetSummary">AWS
   * API Reference</a></p>
   */
  class StackSetSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackSetSummary();
    AWS_CLOUDFORMATION_API StackSetSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the stack set.</p>
     */
    inline const Aws::String& GetStackSetName() const{ return m_stackSetName; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline bool StackSetNameHasBeenSet() const { return m_stackSetNameHasBeenSet; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(const Aws::String& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = value; }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(Aws::String&& value) { m_stackSetNameHasBeenSet = true; m_stackSetName = std::move(value); }

    /**
     * <p>The name of the stack set.</p>
     */
    inline void SetStackSetName(const char* value) { m_stackSetNameHasBeenSet = true; m_stackSetName.assign(value); }

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(const Aws::String& value) { SetStackSetName(value); return *this;}

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(Aws::String&& value) { SetStackSetName(std::move(value)); return *this;}

    /**
     * <p>The name of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetName(const char* value) { SetStackSetName(value); return *this;}


    /**
     * <p>The ID of the stack set.</p>
     */
    inline const Aws::String& GetStackSetId() const{ return m_stackSetId; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline bool StackSetIdHasBeenSet() const { return m_stackSetIdHasBeenSet; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const Aws::String& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = value; }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(Aws::String&& value) { m_stackSetIdHasBeenSet = true; m_stackSetId = std::move(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline void SetStackSetId(const char* value) { m_stackSetIdHasBeenSet = true; m_stackSetId.assign(value); }

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(const Aws::String& value) { SetStackSetId(value); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(Aws::String&& value) { SetStackSetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the stack set.</p>
     */
    inline StackSetSummary& WithStackSetId(const char* value) { SetStackSetId(value); return *this;}


    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the stack set that you specify when the stack set is created
     * or updated.</p>
     */
    inline StackSetSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The status of the stack set.</p>
     */
    inline const StackSetStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(const StackSetStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the stack set.</p>
     */
    inline void SetStatus(StackSetStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSetSummary& WithStatus(const StackSetStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the stack set.</p>
     */
    inline StackSetSummary& WithStatus(StackSetStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline const AutoDeployment& GetAutoDeployment() const{ return m_autoDeployment; }

    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline bool AutoDeploymentHasBeenSet() const { return m_autoDeploymentHasBeenSet; }

    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline void SetAutoDeployment(const AutoDeployment& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = value; }

    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline void SetAutoDeployment(AutoDeployment&& value) { m_autoDeploymentHasBeenSet = true; m_autoDeployment = std::move(value); }

    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline StackSetSummary& WithAutoDeployment(const AutoDeployment& value) { SetAutoDeployment(value); return *this;}

    /**
     * <p>[Service-managed permissions] Describes whether StackSets automatically
     * deploys to Organizations accounts that are added to a target organizational unit
     * (OU).</p>
     */
    inline StackSetSummary& WithAutoDeployment(AutoDeployment&& value) { SetAutoDeployment(std::move(value)); return *this;}


    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline const PermissionModels& GetPermissionModel() const{ return m_permissionModel; }

    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }

    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline void SetPermissionModel(const PermissionModels& value) { m_permissionModelHasBeenSet = true; m_permissionModel = value; }

    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline void SetPermissionModel(PermissionModels&& value) { m_permissionModelHasBeenSet = true; m_permissionModel = std::move(value); }

    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline StackSetSummary& WithPermissionModel(const PermissionModels& value) { SetPermissionModel(value); return *this;}

    /**
     * <p>Describes how the IAM roles required for stack set operations are
     * created.</p> <ul> <li> <p>With <code>self-managed</code> permissions, you must
     * create the administrator and execution roles required to deploy to target
     * accounts. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-self-managed.html">Grant
     * Self-Managed Stack Set Permissions</a>.</p> </li> <li> <p>With
     * <code>service-managed</code> permissions, StackSets automatically creates the
     * IAM roles required to deploy to accounts managed by Organizations. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-prereqs-service-managed.html">Grant
     * Service-Managed Stack Set Permissions</a>.</p> </li> </ul>
     */
    inline StackSetSummary& WithPermissionModel(PermissionModels&& value) { SetPermissionModel(std::move(value)); return *this;}


    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline const StackDriftStatus& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline void SetDriftStatus(const StackDriftStatus& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline void SetDriftStatus(StackDriftStatus&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline StackSetSummary& WithDriftStatus(const StackDriftStatus& value) { SetDriftStatus(value); return *this;}

    /**
     * <p>Status of the stack set's actual configuration compared to its expected
     * template and parameter configuration. A stack set is considered to have drifted
     * if one or more of its stack instances have drifted from their expected template
     * and parameter configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: One or more
     * of the stack instances belonging to the stack set stack differs from the
     * expected template and parameter configuration. A stack instance is considered to
     * have drifted if one or more of the resources in the associated stack have
     * drifted.</p> </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't
     * checked the stack set for drift.</p> </li> <li> <p> <code>IN_SYNC</code>: All
     * the stack instances belonging to the stack set stack match from the expected
     * template and parameter configuration.</p> </li> <li> <p> <code>UNKNOWN</code>:
     * This value is reserved for future use.</p> </li> </ul>
     */
    inline StackSetSummary& WithDriftStatus(StackDriftStatus&& value) { SetDriftStatus(std::move(value)); return *this;}


    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDriftCheckTimestamp() const{ return m_lastDriftCheckTimestamp; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline bool LastDriftCheckTimestampHasBeenSet() const { return m_lastDriftCheckTimestampHasBeenSet; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline void SetLastDriftCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = value; }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline void SetLastDriftCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastDriftCheckTimestampHasBeenSet = true; m_lastDriftCheckTimestamp = std::move(value); }

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline StackSetSummary& WithLastDriftCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastDriftCheckTimestamp(value); return *this;}

    /**
     * <p>Most recent time when CloudFormation performed a drift detection operation on
     * the stack set. This value will be <code>NULL</code> for any stack set on which
     * drift detection hasn't yet been performed.</p>
     */
    inline StackSetSummary& WithLastDriftCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastDriftCheckTimestamp(std::move(value)); return *this;}


    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline const ManagedExecution& GetManagedExecution() const{ return m_managedExecution; }

    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline bool ManagedExecutionHasBeenSet() const { return m_managedExecutionHasBeenSet; }

    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline void SetManagedExecution(const ManagedExecution& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = value; }

    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline void SetManagedExecution(ManagedExecution&& value) { m_managedExecutionHasBeenSet = true; m_managedExecution = std::move(value); }

    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline StackSetSummary& WithManagedExecution(const ManagedExecution& value) { SetManagedExecution(value); return *this;}

    /**
     * <p>Describes whether StackSets performs non-conflicting operations concurrently
     * and queues conflicting operations.</p>
     */
    inline StackSetSummary& WithManagedExecution(ManagedExecution&& value) { SetManagedExecution(std::move(value)); return *this;}

  private:

    Aws::String m_stackSetName;
    bool m_stackSetNameHasBeenSet = false;

    Aws::String m_stackSetId;
    bool m_stackSetIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    StackSetStatus m_status;
    bool m_statusHasBeenSet = false;

    AutoDeployment m_autoDeployment;
    bool m_autoDeploymentHasBeenSet = false;

    PermissionModels m_permissionModel;
    bool m_permissionModelHasBeenSet = false;

    StackDriftStatus m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastDriftCheckTimestamp;
    bool m_lastDriftCheckTimestampHasBeenSet = false;

    ManagedExecution m_managedExecution;
    bool m_managedExecutionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
