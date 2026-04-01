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
 * <p>Information about a capacity provider associated with a daemon
 * revision.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonCapacityProvider">AWS
 * API Reference</a></p>
 */
class DaemonCapacityProvider {
 public:
  AWS_ECS_API DaemonCapacityProvider() = default;
  AWS_ECS_API DaemonCapacityProvider(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonCapacityProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the capacity provider.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DaemonCapacityProvider& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of daemon tasks running on this capacity provider.</p>
   */
  inline int GetRunningCount() const { return m_runningCount; }
  inline bool RunningCountHasBeenSet() const { return m_runningCountHasBeenSet; }
  inline void SetRunningCount(int value) {
    m_runningCountHasBeenSet = true;
    m_runningCount = value;
  }
  inline DaemonCapacityProvider& WithRunningCount(int value) {
    SetRunningCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  int m_runningCount{0};
  bool m_arnHasBeenSet = false;
  bool m_runningCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
