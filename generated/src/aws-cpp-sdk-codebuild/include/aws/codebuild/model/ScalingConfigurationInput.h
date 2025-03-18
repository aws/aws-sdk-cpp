/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/FleetScalingType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/TargetTrackingScalingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>The scaling configuration input of a compute fleet.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ScalingConfigurationInput">AWS
   * API Reference</a></p>
   */
  class ScalingConfigurationInput
  {
  public:
    AWS_CODEBUILD_API ScalingConfigurationInput() = default;
    AWS_CODEBUILD_API ScalingConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API ScalingConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scaling type for a compute fleet.</p>
     */
    inline FleetScalingType GetScalingType() const { return m_scalingType; }
    inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }
    inline void SetScalingType(FleetScalingType value) { m_scalingTypeHasBeenSet = true; m_scalingType = value; }
    inline ScalingConfigurationInput& WithScalingType(FleetScalingType value) { SetScalingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>TargetTrackingScalingConfiguration</code> objects.</p>
     */
    inline const Aws::Vector<TargetTrackingScalingConfiguration>& GetTargetTrackingScalingConfigs() const { return m_targetTrackingScalingConfigs; }
    inline bool TargetTrackingScalingConfigsHasBeenSet() const { return m_targetTrackingScalingConfigsHasBeenSet; }
    template<typename TargetTrackingScalingConfigsT = Aws::Vector<TargetTrackingScalingConfiguration>>
    void SetTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) { m_targetTrackingScalingConfigsHasBeenSet = true; m_targetTrackingScalingConfigs = std::forward<TargetTrackingScalingConfigsT>(value); }
    template<typename TargetTrackingScalingConfigsT = Aws::Vector<TargetTrackingScalingConfiguration>>
    ScalingConfigurationInput& WithTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) { SetTargetTrackingScalingConfigs(std::forward<TargetTrackingScalingConfigsT>(value)); return *this;}
    template<typename TargetTrackingScalingConfigsT = TargetTrackingScalingConfiguration>
    ScalingConfigurationInput& AddTargetTrackingScalingConfigs(TargetTrackingScalingConfigsT&& value) { m_targetTrackingScalingConfigsHasBeenSet = true; m_targetTrackingScalingConfigs.emplace_back(std::forward<TargetTrackingScalingConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of instances in the ﬂeet when auto-scaling.</p>
     */
    inline int GetMaxCapacity() const { return m_maxCapacity; }
    inline bool MaxCapacityHasBeenSet() const { return m_maxCapacityHasBeenSet; }
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }
    inline ScalingConfigurationInput& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}
    ///@}
  private:

    FleetScalingType m_scalingType{FleetScalingType::NOT_SET};
    bool m_scalingTypeHasBeenSet = false;

    Aws::Vector<TargetTrackingScalingConfiguration> m_targetTrackingScalingConfigs;
    bool m_targetTrackingScalingConfigsHasBeenSet = false;

    int m_maxCapacity{0};
    bool m_maxCapacityHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
