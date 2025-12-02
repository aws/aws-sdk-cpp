/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/Operation.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {

/**
 * <p>Contains operations that have been updated since the last checkpoint, such as
 * completed asynchronous work like timers or callbacks.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/CheckpointUpdatedExecutionState">AWS
 * API Reference</a></p>
 */
class CheckpointUpdatedExecutionState {
 public:
  AWS_LAMBDA_API CheckpointUpdatedExecutionState() = default;
  AWS_LAMBDA_API CheckpointUpdatedExecutionState(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API CheckpointUpdatedExecutionState& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A list of operations that have been updated since the last checkpoint.</p>
   */
  inline const Aws::Vector<Operation>& GetOperations() const { return m_operations; }
  inline bool OperationsHasBeenSet() const { return m_operationsHasBeenSet; }
  template <typename OperationsT = Aws::Vector<Operation>>
  void SetOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations = std::forward<OperationsT>(value);
  }
  template <typename OperationsT = Aws::Vector<Operation>>
  CheckpointUpdatedExecutionState& WithOperations(OperationsT&& value) {
    SetOperations(std::forward<OperationsT>(value));
    return *this;
  }
  template <typename OperationsT = Operation>
  CheckpointUpdatedExecutionState& AddOperations(OperationsT&& value) {
    m_operationsHasBeenSet = true;
    m_operations.emplace_back(std::forward<OperationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates that more results are available. Use this value in a subsequent
   * call to retrieve the next page of results.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  inline bool NextMarkerHasBeenSet() const { return m_nextMarkerHasBeenSet; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  CheckpointUpdatedExecutionState& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Operation> m_operations;
  bool m_operationsHasBeenSet = false;

  Aws::String m_nextMarker;
  bool m_nextMarkerHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
