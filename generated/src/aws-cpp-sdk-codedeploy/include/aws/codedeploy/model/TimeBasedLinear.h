/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>A configuration that shifts traffic from one version of a Lambda function or
 * ECS task set to another in equal increments, with an equal number of minutes
 * between each increment. The original and target Lambda function versions or ECS
 * task sets are specified in the deployment's AppSpec file.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/TimeBasedLinear">AWS
 * API Reference</a></p>
 */
class TimeBasedLinear {
 public:
  AWS_CODEDEPLOY_API TimeBasedLinear() = default;
  AWS_CODEDEPLOY_API TimeBasedLinear(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API TimeBasedLinear& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEDEPLOY_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The percentage of traffic that is shifted at the start of each increment of a
   * <code>TimeBasedLinear</code> deployment.</p>
   */
  inline int64_t GetLinearPercentage() const { return m_linearPercentage; }
  inline bool LinearPercentageHasBeenSet() const { return m_linearPercentageHasBeenSet; }
  inline void SetLinearPercentage(int64_t value) {
    m_linearPercentageHasBeenSet = true;
    m_linearPercentage = value;
  }
  inline TimeBasedLinear& WithLinearPercentage(int64_t value) {
    SetLinearPercentage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of minutes between each incremental traffic shift of a
   * <code>TimeBasedLinear</code> deployment.</p>
   */
  inline int64_t GetLinearInterval() const { return m_linearInterval; }
  inline bool LinearIntervalHasBeenSet() const { return m_linearIntervalHasBeenSet; }
  inline void SetLinearInterval(int64_t value) {
    m_linearIntervalHasBeenSet = true;
    m_linearInterval = value;
  }
  inline TimeBasedLinear& WithLinearInterval(int64_t value) {
    SetLinearInterval(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_linearPercentage{0};

  int64_t m_linearInterval{0};
  bool m_linearPercentageHasBeenSet = false;
  bool m_linearIntervalHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
