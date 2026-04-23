/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/StackSetOperationAction.h>
#include <aws/cloudformation/model/StackSetOperationStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class AWS_CLOUDFORMATION_API StackSetOperationSummary
  {
  public:
    StackSetOperationSummary();
    StackSetOperationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackSetOperationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline const Aws::String& GetOperationId() const{ return m_operationId; }

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline bool OperationIdHasBeenSet() const { return m_operationIdHasBeenSet; }

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline void SetOperationId(const Aws::String& value) { m_operationIdHasBeenSet = true; m_operationId = value; }

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline void SetOperationId(Aws::String&& value) { m_operationIdHasBeenSet = true; m_operationId = std::move(value); }

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline void SetOperationId(const char* value) { m_operationIdHasBeenSet = true; m_operationId.assign(value); }

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline StackSetOperationSummary& WithOperationId(const Aws::String& value) { SetOperationId(value); return *this;}

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline StackSetOperationSummary& WithOperationId(Aws::String&& value) { SetOperationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the stack set operation.</p>
     */
    inline StackSetOperationSummary& WithOperationId(const char* value) { SetOperationId(value); return *this;}


    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline const StackSetOperationAction& GetAction() const{ return m_action; }

    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline void SetAction(const StackSetOperationAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline void SetAction(StackSetOperationAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline StackSetOperationSummary& WithAction(const StackSetOperationAction& value) { SetAction(value); return *this;}

    /**
     * <p>The type of operation: <code>CREATE</code>, <code>UPDATE</code>, or
     * <code>DELETE</code>. Create and delete operations affect only the specified
     * stack instances that are associated with the specified stack set. Update
     * operations affect both the stack set itself as well as <i>all</i> associated
     * stack set instances.</p>
     */
    inline StackSetOperationSummary& WithAction(StackSetOperationAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline const StackSetOperationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline void SetStatus(const StackSetOperationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline void SetStatus(StackSetOperationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline StackSetOperationSummary& WithStatus(const StackSetOperationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The overall status of the operation.</p> <ul> <li> <p> <code>FAILED</code>:
     * The operation exceeded the specified failure tolerance. The failure tolerance
     * value that you've set for an operation is applied for each region during stack
     * create and update operations. If the number of failed stacks within a region
     * exceeds the failure tolerance, the status of the operation in the region is set
     * to <code>FAILED</code>. This in turn sets the status of the operation as a whole
     * to <code>FAILED</code>, and AWS CloudFormation cancels the operation in any
     * remaining regions.</p> </li> <li> <p> <code>RUNNING</code>: The operation is
     * currently being performed.</p> </li> <li> <p> <code>STOPPED</code>: The user has
     * cancelled the operation.</p> </li> <li> <p> <code>STOPPING</code>: The operation
     * is in the process of stopping, at user request. </p> </li> <li> <p>
     * <code>SUCCEEDED</code>: The operation completed creating or updating all the
     * specified stacks without exceeding the failure tolerance for the operation.</p>
     * </li> </ul>
     */
    inline StackSetOperationSummary& WithStatus(StackSetOperationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTimestamp() const{ return m_creationTimestamp; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline bool CreationTimestampHasBeenSet() const { return m_creationTimestampHasBeenSet; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline void SetCreationTimestamp(const Aws::Utils::DateTime& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = value; }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline void SetCreationTimestamp(Aws::Utils::DateTime&& value) { m_creationTimestampHasBeenSet = true; m_creationTimestamp = std::move(value); }

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline StackSetOperationSummary& WithCreationTimestamp(const Aws::Utils::DateTime& value) { SetCreationTimestamp(value); return *this;}

    /**
     * <p>The time at which the operation was initiated. Note that the creation times
     * for the stack set operation might differ from the creation time of the
     * individual stacks themselves. This is because AWS CloudFormation needs to
     * perform preparatory work for the operation, such as dispatching the work to the
     * requested regions, before actually creating the first stacks.</p>
     */
    inline StackSetOperationSummary& WithCreationTimestamp(Aws::Utils::DateTime&& value) { SetCreationTimestamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTimestamp() const{ return m_endTimestamp; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline bool EndTimestampHasBeenSet() const { return m_endTimestampHasBeenSet; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline void SetEndTimestamp(const Aws::Utils::DateTime& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = value; }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline void SetEndTimestamp(Aws::Utils::DateTime&& value) { m_endTimestampHasBeenSet = true; m_endTimestamp = std::move(value); }

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline StackSetOperationSummary& WithEndTimestamp(const Aws::Utils::DateTime& value) { SetEndTimestamp(value); return *this;}

    /**
     * <p>The time at which the stack set operation ended, across all accounts and
     * regions specified. Note that this doesn't necessarily mean that the stack set
     * operation was successful, or even attempted, in each account or region.</p>
     */
    inline StackSetOperationSummary& WithEndTimestamp(Aws::Utils::DateTime&& value) { SetEndTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_operationId;
    bool m_operationIdHasBeenSet;

    StackSetOperationAction m_action;
    bool m_actionHasBeenSet;

    StackSetOperationStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTimestamp;
    bool m_creationTimestampHasBeenSet;

    Aws::Utils::DateTime m_endTimestamp;
    bool m_endTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
