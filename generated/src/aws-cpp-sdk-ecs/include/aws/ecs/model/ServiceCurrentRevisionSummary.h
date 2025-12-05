/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The summary of the current service revision configuration</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceCurrentRevisionSummary">AWS
 * API Reference</a></p>
 */
class ServiceCurrentRevisionSummary {
 public:
  AWS_ECS_API ServiceCurrentRevisionSummary() = default;
  AWS_ECS_API ServiceCurrentRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API ServiceCurrentRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the current service revision.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ServiceCurrentRevisionSummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of requested tasks in the current service revision</p>
   */
  inline int GetRequestedTaskCount() const { return m_requestedTaskCount; }
  inline bool RequestedTaskCountHasBeenSet() const { return m_requestedTaskCountHasBeenSet; }
  inline void SetRequestedTaskCount(int value) {
    m_requestedTaskCountHasBeenSet = true;
    m_requestedTaskCount = value;
  }
  inline ServiceCurrentRevisionSummary& WithRequestedTaskCount(int value) {
    SetRequestedTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of running tasks of the current service revision</p>
   */
  inline int GetRunningTaskCount() const { return m_runningTaskCount; }
  inline bool RunningTaskCountHasBeenSet() const { return m_runningTaskCountHasBeenSet; }
  inline void SetRunningTaskCount(int value) {
    m_runningTaskCountHasBeenSet = true;
    m_runningTaskCount = value;
  }
  inline ServiceCurrentRevisionSummary& WithRunningTaskCount(int value) {
    SetRunningTaskCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of pending tasks in the current service revision</p>
   */
  inline int GetPendingTaskCount() const { return m_pendingTaskCount; }
  inline bool PendingTaskCountHasBeenSet() const { return m_pendingTaskCountHasBeenSet; }
  inline void SetPendingTaskCount(int value) {
    m_pendingTaskCountHasBeenSet = true;
    m_pendingTaskCount = value;
  }
  inline ServiceCurrentRevisionSummary& WithPendingTaskCount(int value) {
    SetPendingTaskCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_requestedTaskCount{0};

  int m_runningTaskCount{0};

  int m_pendingTaskCount{0};
  bool m_arnHasBeenSet = false;
  bool m_requestedTaskCountHasBeenSet = false;
  bool m_runningTaskCountHasBeenSet = false;
  bool m_pendingTaskCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
