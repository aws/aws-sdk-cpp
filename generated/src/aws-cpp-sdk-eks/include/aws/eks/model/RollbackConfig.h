/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EKS {
namespace Model {

/**
 * <p>The rollback configuration for the cluster version rollback.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RollbackConfig">AWS
 * API Reference</a></p>
 */
class RollbackConfig {
 public:
  AWS_EKS_API RollbackConfig() = default;
  AWS_EKS_API RollbackConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API RollbackConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The length of time in minutes to wait before cancelling the update. Timeout
   * is a minimum-bound property, meaning the timeout occurs no sooner than the time
   * you specify, but can occur shortly thereafter. This value can be between 120 (2
   * hours) and 10080 (7 days). Default: <code>720</code> (12 hours) if not
   * specified.</p>
   */
  inline int GetTimeoutMinutes() const { return m_timeoutMinutes; }
  inline bool TimeoutMinutesHasBeenSet() const { return m_timeoutMinutesHasBeenSet; }
  inline void SetTimeoutMinutes(int value) {
    m_timeoutMinutesHasBeenSet = true;
    m_timeoutMinutes = value;
  }
  inline RollbackConfig& WithTimeoutMinutes(int value) {
    SetTimeoutMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_timeoutMinutes{0};
  bool m_timeoutMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
