/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/EcsLaunchType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about Amazon ECS task involved in a GuardDuty finding,
 * including task definition and container identifiers.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/EcsTask">AWS
 * API Reference</a></p>
 */
class EcsTask {
 public:
  AWS_GUARDDUTY_API EcsTask() = default;
  AWS_GUARDDUTY_API EcsTask(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API EcsTask& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The timestamp indicating when the Amazon ECS task was created, in UTC
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  EcsTask& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of task definition which describes the container and volume
   * definitions of the Amazon ECS task.</p>
   */
  inline const Aws::String& GetTaskDefinitionArn() const { return m_taskDefinitionArn; }
  inline bool TaskDefinitionArnHasBeenSet() const { return m_taskDefinitionArnHasBeenSet; }
  template <typename TaskDefinitionArnT = Aws::String>
  void SetTaskDefinitionArn(TaskDefinitionArnT&& value) {
    m_taskDefinitionArnHasBeenSet = true;
    m_taskDefinitionArn = std::forward<TaskDefinitionArnT>(value);
  }
  template <typename TaskDefinitionArnT = Aws::String>
  EcsTask& WithTaskDefinitionArn(TaskDefinitionArnT&& value) {
    SetTaskDefinitionArn(std::forward<TaskDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The infrastructure type on which the Amazon ECS task runs.</p>
   */
  inline EcsLaunchType GetLaunchType() const { return m_launchType; }
  inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
  inline void SetLaunchType(EcsLaunchType value) {
    m_launchTypeHasBeenSet = true;
    m_launchType = value;
  }
  inline EcsTask& WithLaunchType(EcsLaunchType value) {
    SetLaunchType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of unique identifiers for the containers associated with the Amazon
   * ECS task.</p>
   */
  inline const Aws::Vector<Aws::String>& GetContainerUids() const { return m_containerUids; }
  inline bool ContainerUidsHasBeenSet() const { return m_containerUidsHasBeenSet; }
  template <typename ContainerUidsT = Aws::Vector<Aws::String>>
  void SetContainerUids(ContainerUidsT&& value) {
    m_containerUidsHasBeenSet = true;
    m_containerUids = std::forward<ContainerUidsT>(value);
  }
  template <typename ContainerUidsT = Aws::Vector<Aws::String>>
  EcsTask& WithContainerUids(ContainerUidsT&& value) {
    SetContainerUids(std::forward<ContainerUidsT>(value));
    return *this;
  }
  template <typename ContainerUidsT = Aws::String>
  EcsTask& AddContainerUids(ContainerUidsT&& value) {
    m_containerUidsHasBeenSet = true;
    m_containerUids.emplace_back(std::forward<ContainerUidsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_taskDefinitionArn;

  EcsLaunchType m_launchType{EcsLaunchType::NOT_SET};

  Aws::Vector<Aws::String> m_containerUids;
  bool m_createdAtHasBeenSet = false;
  bool m_taskDefinitionArnHasBeenSet = false;
  bool m_launchTypeHasBeenSet = false;
  bool m_containerUidsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
