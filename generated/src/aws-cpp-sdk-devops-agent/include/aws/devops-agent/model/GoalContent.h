/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Content of a goal</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GoalContent">AWS
 * API Reference</a></p>
 */
class GoalContent {
 public:
  AWS_DEVOPSAGENT_API GoalContent() = default;
  AWS_DEVOPSAGENT_API GoalContent(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API GoalContent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A detailed description of the goal.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  GoalContent& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The objectives to be achieved for this goal.</p>
   */
  inline const Aws::String& GetObjectives() const { return m_objectives; }
  inline bool ObjectivesHasBeenSet() const { return m_objectivesHasBeenSet; }
  template <typename ObjectivesT = Aws::String>
  void SetObjectives(ObjectivesT&& value) {
    m_objectivesHasBeenSet = true;
    m_objectives = std::forward<ObjectivesT>(value);
  }
  template <typename ObjectivesT = Aws::String>
  GoalContent& WithObjectives(ObjectivesT&& value) {
    SetObjectives(std::forward<ObjectivesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_description;

  Aws::String m_objectives;
  bool m_descriptionHasBeenSet = false;
  bool m_objectivesHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
