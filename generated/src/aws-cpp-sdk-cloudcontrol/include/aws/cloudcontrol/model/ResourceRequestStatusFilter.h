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
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter() = default;
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API ResourceRequestStatusFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDCONTROLAPI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operation types to include in the filter.</p>
     */
    inline const Aws::Vector<Operation>& GetOperations() const { return m_operations; }
    inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
    template<typename OperationsT = Aws::Vector<Operation>>
    void SetOperations(OperationsT&& value) { m_operationsHasBeenSet = true; m_operations = std::forward<OperationsT>(value); }
    template<typename OperationsT = Aws::Vector<Operation>>
    ResourceRequestStatusFilter& WithOperations(OperationsT&& value) { SetOperations(std::forward<OperationsT>(value)); return *this;}
    inline ResourceRequestStatusFilter& AddOperations(Operation value) { m_operationsHasBeenSet = true; m_operations.push_back(value); return *this; }
    ///@}

    ///@{
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
    inline const Aws::Vector<OperationStatus>& GetOperationStatuses() const { return m_operationStatuses; }
    inline bool OperationStatusesHasBeenSet() const { return m_operationStatusesHasBeenSet; }
    template<typename OperationStatusesT = Aws::Vector<OperationStatus>>
    void SetOperationStatuses(OperationStatusesT&& value) { m_operationStatusesHasBeenSet = true; m_operationStatuses = std::forward<OperationStatusesT>(value); }
    template<typename OperationStatusesT = Aws::Vector<OperationStatus>>
    ResourceRequestStatusFilter& WithOperationStatuses(OperationStatusesT&& value) { SetOperationStatuses(std::forward<OperationStatusesT>(value)); return *this;}
    inline ResourceRequestStatusFilter& AddOperationStatuses(OperationStatus value) { m_operationStatusesHasBeenSet = true; m_operationStatuses.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Operation> m_operations;
    bool m_operationsHasBeenSet = false;

    Aws::Vector<OperationStatus> m_operationStatuses;
    bool m_operationStatusesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudControlApi
} // namespace Aws
