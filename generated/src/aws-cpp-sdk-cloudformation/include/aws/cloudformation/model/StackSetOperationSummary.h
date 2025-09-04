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
    AWS_CLOUDFORMATION_API StackSetOperationSummary() = default;
    AWS_CLOUDFORMATION_API StackSetOperationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique ID of the StackSet operation.</p>
     */
    inline const Aws::String& GetOperationId() const { return m_operationId; }
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }
    template<typename OperationIdT = Aws::String>
    void SetOperationId(OperationIdT&& value) { m_operationIdHasBeenSet = true; m_operationId = std::forward<OperationIdT>(value); }
    template<typename OperationIdT = Aws::String>
    StackSetOperationSummary& WithOperationId(OperationIdT&& value) { SetOperationId(std::forward<OperationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified StackSet. Update
     * operations affect both the StackSet itself and <i>all</i> associated StackSet
     * instances.</p>
     */
    inline StackSetOperationAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(StackSetOperationAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline StackSetOperationSummary& WithAction(StackSetOperationAction value) { SetAction(value); return *this;}
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
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-status-codes">StackSet
     * status codes</a> in the <i>CloudFormation User Guide</i>.</p> </li> <li> <p>
     * <code>RUNNING</code>: The operation is currently being performed.</p> </li> <li>
     * <p> <code>STOPPED</code>: The user has canceled the operation.</p> </li> <li>
     * <p> <code>STOPPING</code>: The operation is in the process of stopping, at user
     * request.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation completed
     * creating or updating all the specified stacks without exceeding the failure
     * tolerance for the operation.</p> </li> </ul>
     */
    inline StackSetOperationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(StackSetOperationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline StackSetOperationSummary& WithStatus(StackSetOperationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the StackSet operation might differ from the creation time of the individual
     * stacks themselves. This is because CloudFormation needs to perform preparatory
     * work for the operation, such as dispatching the work to the requested Regions,
     * before actually creating the first stacks.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const { return m_creationTimestamp; }
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    void SetCreationTimestamp(CreationTimestampT&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::forward<CreationTimestampT>(value); }
    template<typename CreationTimestampT = Aws::Utils::DateTime>
    StackSetOperationSummary& WithCreationTimestamp(CreationTimestampT&& value) { SetCreationTimestamp(std::forward<CreationTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the StackSet operation ended, across all accounts and
     * Regions specified. Note that this doesn't necessarily mean that the StackSet
     * operation was successful, or even attempted, in each account or Region.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    void SetEndTimestamp(EndTimestampT&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::forward<EndTimestampT>(value); }
    template<typename EndTimestampT = Aws::Utils::DateTime>
    StackSetOperationSummary& WithEndTimestamp(EndTimestampT&& value) { SetEndTimestamp(std::forward<EndTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the operation in details.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    StackSetOperationSummary& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed information about the StackSet operation.</p>
     */
    inline const StackSetOperationStatusDetails& GetStatusDetails() const { return m_statusDetails; }
    inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
    template<typename StatusDetailsT = StackSetOperationStatusDetails>
    void SetStatusDetails(StatusDetailsT&& value) { m_statusDetailsHasBeenSet = true; m_statusDetails = std::forward<StatusDetailsT>(value); }
    template<typename StatusDetailsT = StackSetOperationStatusDetails>
    StackSetOperationSummary& WithStatusDetails(StatusDetailsT&& value) { SetStatusDetails(std::forward<StatusDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-specified preferences for how CloudFormation performs a StackSet
     * operation.</p> <p>For more information about maximum concurrent accounts and
     * failure tolerance, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/stacksets-concepts.html#stackset-ops-options">StackSet
     * operation options</a>.</p>
     */
    inline const StackSetOperationPreferences& GetOperationPreferences() const { return m_operationPreferences; }
    inline bool OperationPreferencesHasBeenSet() const { return m_operationPreferencesHasBeenSet; }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    void SetOperationPreferences(OperationPreferencesT&& value) { m_operationPreferencesHasBeenSet = true; m_operationPreferences = std::forward<OperationPreferencesT>(value); }
    template<typename OperationPreferencesT = StackSetOperationPreferences>
    StackSetOperationSummary& WithOperationPreferences(OperationPreferencesT&& value) { SetOperationPreferences(std::forward<OperationPreferencesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet = false;

    StackSetOperationAction m_action{StackSetOperationAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    StackSetOperationStatus m_status{StackSetOperationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTimestamp{};
    bool m_creationTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_endTimestamp{};
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
