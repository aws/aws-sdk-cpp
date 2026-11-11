/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetScalingType.h>
#include <aws/codebuild/model/TargetTrackingScalingConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p>The scaling configuration output of a compute fleet.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ScalingConfigurationOutput">AWS
 * API Reference</a></p>
 */
class ScalingConfigurationOutput {
 public:
  AWS_CODEBUILD_API ScalingConfigurationOutput() = default;
  AWS_CODEBUILD_API ScalingConfigurationOutput(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API ScalingConfigurationOutput& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The scaling type for a compute fleet.</p>
   */
  inline FleetScalingType GetScalingType() const { return m_scalingType; }
  inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }
  inline void SetScalingType(FleetScalingType value) {
    m_scalingTypeHasBeenSet = true;
    m_scalingType = value;
  }
  inline ScalingConfigurationOutput& WithScalingType(FleetScalingType value) {
    SetScalingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>TargetTrackingScalingConfiguration</code> objects.</p>
   */
  inline const Aws::Vector<TargetTrackingScalingConfiguration>& GetTargetTrackingScalingConfigs() const {
    return m_targetTrackingScalingConfigs;
  }
  inline bool TargetTrackingScalingConfigsHasBeenSet() const { return m_targetTrackingScalingConfigsHasBeenSet; }
  template <typename TargetTrackingScalingConfigsT = Aws::Vector<TargetTrackingScalingConfiguration>>
  void SetTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) {
    m_targetTrackingScalingConfigsHasBeenSet = true;
    m_targetTrackingScalingConfigs = std::forward<TargetTrackingScalingConfigsT>(value);
  }
  template <typename TargetTrackingScalingConfigsT = Aws::Vector<TargetTrackingScalingConfiguration>>
  ScalingConfigurationOutput& WithTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) {
    SetTargetTrackingScalingConfigs(std::forward<TargetTrackingScalingConfigsT>(value));
    return *this;
  }
  template <typename TargetTrackingScalingConfigsT = TargetTrackingScalingConfiguration>
  ScalingConfigurationOutput& AddTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) {
    m_targetTrackingScalingConfigsHasBeenSet = true;
    m_targetTrackingScalingConfigs.emplace_back(std::forward<TargetTrackingScalingConfigsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of instances in the ﬂeet when auto-scaling.</p>
   */
  inline int64_t GetMaxCapacity() const { return m_maxCapacity; }
  inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
  inline void SetMaxCapacity(int64_t value) {
    m_maxCapacityHasBeenSet = true;
    m_maxCapacity = value;
  }
  inline ScalingConfigurationOutput& WithMaxCapacity(int64_t value) {
    SetMaxCapacity(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The desired number of instances in the ﬂeet when auto-scaling.</p>
   */
  inline int64_t GetDesiredCapacity() const { return m_desiredCapacity; }
  inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }
  inline void SetDesiredCapacity(int64_t value) {
    m_desiredCapacityHasBeenSet = true;
    m_desiredCapacity = value;
  }
  inline ScalingConfigurationOutput& WithDesiredCapacity(int64_t value) {
    SetDesiredCapacity(value);
    return *this;
  }
  ///@}
 private:
  FleetScalingType m_scalingType{FleetScalingType::NOT_SET};

  Aws::Vector<TargetTrackingScalingConfiguration> m_targetTrackingScalingConfigs;

  int64_t m_maxCapacity{0};

  int64_t m_desiredCapacity{0};
  bool m_scalingTypeHasBeenSet = false;
  bool m_targetTrackingScalingConfigsHasBeenSet = false;
  bool m_maxCapacityHasBeenSet = false;
  bool m_desiredCapacityHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
