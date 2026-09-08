/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/CrossChannelWorkloadBehavior.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Defines the maximum number of contacts an agent can handle simultaneously for
 * a specific channel and workload type combination.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/WorkloadTypeConcurrency">AWS
 * API Reference</a></p>
 */
class WorkloadTypeConcurrency {
 public:
  AWS_CONNECT_API WorkloadTypeConcurrency() = default;
  AWS_CONNECT_API WorkloadTypeConcurrency(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API WorkloadTypeConcurrency& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The value of the workload type.</p>
   */
  inline const Aws::String& GetWorkloadType() const { return m_workloadType; }
  inline bool WorkloadTypeHasBeenSet() const { return m_workloadTypeHasBeenSet; }
  template <typename WorkloadTypeT = Aws::String>
  void SetWorkloadType(WorkloadTypeT&& value) {
    m_workloadTypeHasBeenSet = true;
    m_workloadType = std::forward<WorkloadTypeT>(value);
  }
  template <typename WorkloadTypeT = Aws::String>
  WorkloadTypeConcurrency& WithWorkloadType(WorkloadTypeT&& value) {
    SetWorkloadType(std::forward<WorkloadTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of contacts an agent can handle simultaneously for a
   * specific channel and workload type combination.</p> <p>Valid Range for
   * <code>VOICE</code>: Minimum value of 1. Maximum value of 1.</p> <p>Valid Range
   * for <code>CHAT</code>: Minimum value of 1. Maximum value of 10.</p> <p>Valid
   * Range for <code>TASK</code>: Minimum value of 1. Maximum value of 10.</p>
   */
  inline int GetConcurrency() const { return m_concurrency; }
  inline bool ConcurrencyHasBeenSet() const { return m_concurrencyHasBeenSet; }
  inline void SetConcurrency(int value) {
    m_concurrencyHasBeenSet = true;
    m_concurrency = value;
  }
  inline WorkloadTypeConcurrency& WithConcurrency(int value) {
    SetConcurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines the cross-channel and workload type routing behavior for each channel
   * and workload type combination that is enabled for this Routing Profile.</p>
   */
  inline const CrossChannelWorkloadBehavior& GetCrossChannelWorkloadBehavior() const { return m_crossChannelWorkloadBehavior; }
  inline bool CrossChannelWorkloadBehaviorHasBeenSet() const { return m_crossChannelWorkloadBehaviorHasBeenSet; }
  template <typename CrossChannelWorkloadBehaviorT = CrossChannelWorkloadBehavior>
  void SetCrossChannelWorkloadBehavior(CrossChannelWorkloadBehaviorT&& value) {
    m_crossChannelWorkloadBehaviorHasBeenSet = true;
    m_crossChannelWorkloadBehavior = std::forward<CrossChannelWorkloadBehaviorT>(value);
  }
  template <typename CrossChannelWorkloadBehaviorT = CrossChannelWorkloadBehavior>
  WorkloadTypeConcurrency& WithCrossChannelWorkloadBehavior(CrossChannelWorkloadBehaviorT&& value) {
    SetCrossChannelWorkloadBehavior(std::forward<CrossChannelWorkloadBehaviorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workloadType;

  int m_concurrency{0};

  CrossChannelWorkloadBehavior m_crossChannelWorkloadBehavior;
  bool m_workloadTypeHasBeenSet = false;
  bool m_concurrencyHasBeenSet = false;
  bool m_crossChannelWorkloadBehaviorHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
