/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Tag.h>
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
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/RegisterTaskDefinitionResponse">AWS
 * API Reference</a></p>
 */
class RegisterTaskDefinitionResult {
 public:
  AWS_ECS_API RegisterTaskDefinitionResult() = default;
  AWS_ECS_API RegisterTaskDefinitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECS_API RegisterTaskDefinitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The full description of the registered task definition.</p>
   */
  inline const TaskDefinition& GetTaskDefinition() const { return m_taskDefinition; }
  template <typename TaskDefinitionT = TaskDefinition>
  void SetTaskDefinition(TaskDefinitionT&& value) {
    m_taskDefinitionHasBeenSet = true;
    m_taskDefinition = std::forward<TaskDefinitionT>(value);
  }
  template <typename TaskDefinitionT = TaskDefinition>
  RegisterTaskDefinitionResult& WithTaskDefinition(TaskDefinitionT&& value) {
    SetTaskDefinition(std::forward<TaskDefinitionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of tags associated with the task definition.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  RegisterTaskDefinitionResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  RegisterTaskDefinitionResult& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
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
  RegisterTaskDefinitionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TaskDefinition m_taskDefinition;

  Aws::Vector<Tag> m_tags;

  Aws::String m_requestId;
  bool m_taskDefinitionHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
