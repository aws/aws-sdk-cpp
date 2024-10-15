/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/cloudformation/model/StackSetOperationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudformation/model/StackSetOperationStatusDetails.h>
#include <aws/cloudformation/model/StackSetOperationPreferences.h>
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
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationSummary">AWS
   * API Reference</a></p>
   */
  class StackSetOperationSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperationSummary();
    AWS_CLOUDFORMATION_API StackSetOperationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }
    inline StackSetOperationSummary& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}
    inline StackSetOperationSummary& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}
    inline StackSetOperationSummary& WithOperationId(const char* value) { SetOperationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself and <i>all</i> associated stack set
     * instances.</p>
     */
    inline const StackSetOperationAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const StackSetOperationAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(StackSetOperationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline StackSetOperationSummary& WithAction(const StackSetOperationAction& value) { SetAction(value); return *this;}
    inline StackSetOperationSummary& WithAction(StackSetOperationAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each Region during stack
     * create and update operations. If the number of failed stacks within a Region
     * exceeds the failure tolerance, the status of the operation in the Region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and CloudFormation cancels the operation in any
     * remaining Regions.</p> </li> <li> <p> <code>QUEUED</code>: [Service-managed
     * permissions] For automatic deployments that require a sequence of operations,
     * the operation is queued to be performed. For more information, see the <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/what-is-cfnstacksets.html#stackset-status-codes">stack
     * set operation status codes</a> in the <i>CloudFormation User Guide</i>.</p>
     * </li> <li> <p> <code>RUNNING</code>: The operation is currently being
     * performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has canceled the
     * operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation is in the
     * process of stopping, at user request.</p> </li> <li> <p> <code>SUCCEEDED</code>:
     * The operation completed creating or updating all the specified stacks without
     * exceeding the failure tolerance for the operation.</p> </li> </ul>
     */
    inline const StackSetOperationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const StackSetOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(StackSetOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline StackSetOperationSummary& WithStatus(const StackSetOperationStatus& value) { SetStatus(value); return *this;}
    inline StackSetOperationSummary& WithStatus(StackSetOperationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because CloudFormation needs to perform
     * preparatory work for the operation, such as dispatching the work to the
     * requested Regions, before actually creating the first stacks.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }
    inline StackSetOperationSummary& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}
    inline StackSetOperationSummary& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }
    inline StackSetOperationSummary& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}
    inline StackSetOperationSummary& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation in details.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline StackSetOperationSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline StackSetOperationSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline StackSetOperationSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the stack set operation.</p>
     */
    inline const StackSetOperationStatusDetails& GetStatusDetails() const{ return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    inline void SetStatusDetails(const StackSetOperationStatusDetails& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = value; }
    inline void SetStatusDetails(StackSetOperationStatusDetails&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::move(value); }
    inline StackSetOperationSummary& WithStatusDetails(const StackSetOperationStatusDetails& value) { SetStatusDetails(value); return *this;}
    inline StackSetOperationSummary& WithStatusDetails(StackSetOperationStatusDetails&& value) { SetStatusDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified preferences for how CloudFormation performs a stack set
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/what-is-cfnstacksets.html#stackset-ops-options">Stack
     * set operation options</a>.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const{ return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    inline void SetOperationPreferences(const StackSetOperationPreferences& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = value; }
    inline void SetOperationPreferences(StackSetOperationPreferences&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::move(value); }
    inline StackSetOperationSummary& WithOperationPreferences(const StackSetOperationPreferences& value) { SetOperationPreferences(value); return *this;}
    inline StackSetOperationSummary& WithOperationPreferences(StackSetOperationPreferences&& value) { SetOperationPreferences(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    StackSetOperationAction m_action;
    bool m_actionHasBeenSet = false;

    StackSetOperationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    StackSetOperationStatusDetails m_statusDetails;
    bool m_statusDetailsHasBeenSet = false;

    StackSetOperationPreferences m_operationPreferences;
    bool m_operationPreferencesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
