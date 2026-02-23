/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/TaskDefinition.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {
/**
 * <zonbook></zonbook><xhtml></xhtml><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeregisterTaskDefinitionResponse">AWS
 * API Reference</a></p>
 */
class DeregisterTaskDefinitionResult {
 public:
  AWS_ECS_API DeregisterTaskDefinitionResult() = default;
  AWS_ECS_API DeregisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API DeregisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The full description of the deregistered task.</p>
   */
  inline const TaskDefinition& GetTaskDefinition() const { return m_taskDefinition; }
  template <typename TaskDefinitionT = TaskDefinition>
  void SetTaskDefinition(TaskDefinitionT&& value) {
    m_taskDefinitionHasBeenSet = true;
    m_taskDefinition = std::forward<TaskDefinitionT>(value);
  }
  template <typename TaskDefinitionT = TaskDefinition>
  DeregisterTaskDefinitionResult& WithTaskDefinition(TaskDefinitionT&& value) {
    SetTaskDefinition(std::forward<TaskDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DeregisterTaskDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TaskDefinition m_taskDefinition;

  Aws::String m_requestId;
  bool m_taskDefinitionHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
