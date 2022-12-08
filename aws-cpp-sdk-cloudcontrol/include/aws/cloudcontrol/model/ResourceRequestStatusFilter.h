/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudcontrol/CloudControlApi_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudcontrol/model/Operation.h>
#include <aws/cloudcontrol/model/OperationStatus.h>
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
namespace CloudControlApi
{
namespace Model
{

  /**
   * <p>The filter criteria to use in determining the requests
   * returned.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudcontrol-2021-09-30/ResourceRequestStatusFilter">AWS
   * API Reference</a></p>
   */
  class ResourceRequestStatusFilter
  {
  public:
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter();
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const{ return m_operations; }

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline void SetOperations(const Aws::Vector<Operation>& value) { m_operationsHasBeenSet = true; m_operations = value; }

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline void SetOperations(Aws::Vector<Operation>&& value) { m_operationsHasBeenSet = true; m_operations = std::move(value); }

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline ResourceRequestStatusFilter& WithOperations(const Aws::Vector<Operation>& value) { SetOperations(value); return *this;}

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline ResourceRequestStatusFilter& WithOperations(Aws::Vector<Operation>&& value) { SetOperations(std::move(value)); return *this;}

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline ResourceRequestStatusFilter& AddOperations(const Operation& value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }

    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline ResourceRequestStatusFilter& AddOperations(Operation&& value) { m_operationsHasBeenSet = true; m_operations.push_back(std::move(value)); return *this; }


    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline const Aws::Vector<OperationStatus>& GetOperationStatuses() const{ return m_operationStatuses; }

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline bool OperationStatusesHasBeenSet() const { return m_operationStatusesHasBeenSet; }

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline void SetOperationStatuses(const Aws::Vector<OperationStatus>& value) { m_operationStatusesHasBeenSet = true; m_operationStatuses = value; }

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline void SetOperationStatuses(Aws::Vector<OperationStatus>&& value) { m_operationStatusesHasBeenSet = true; m_operationStatuses = std::move(value); }

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline ResourceRequestStatusFilter& WithOperationStatuses(const Aws::Vector<OperationStatus>& value) { SetOperationStatuses(value); return *this;}

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline ResourceRequestStatusFilter& WithOperationStatuses(Aws::Vector<OperationStatus>&& value) { SetOperationStatuses(std::move(value)); return *this;}

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline ResourceRequestStatusFilter& AddOperationStatuses(const OperationStatus& value) { m_operationStatusesHasBeenSet = true; m_operationStatuses.push_back(value); return *this; }

    /**
     * <p>The operation statuses to include in the filter.</p> <ul> <li> <p>
     * <code>PENDING</code>: The operation has been requested, but not yet
     * initiated.</p> </li> <li> <p> <code>IN_PROGRESS</code>: The operation is in
     * progress.</p> </li> <li> <p> <code>SUCCESS</code>: The operation completed.</p>
     * </li> <li> <p> <code>FAILED</code>: The operation failed.</p> </li> <li> <p>
     * <code>CANCEL_IN_PROGRESS</code>: The operation is in the process of being
     * canceled.</p> </li> <li> <p> <code>CANCEL_COMPLETE</code>: The operation has
     * been canceled.</p> </li> </ul>
     */
    inline ResourceRequestStatusFilter& AddOperationStatuses(OperationStatus&& value) { m_operationStatusesHasBeenSet = true; m_operationStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Operation> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::Vector<OperationStatus> m_operationStatuses;
    bool m_operationStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
