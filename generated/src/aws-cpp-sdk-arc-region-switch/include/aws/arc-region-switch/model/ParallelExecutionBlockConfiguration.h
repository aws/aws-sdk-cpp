/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/arc-region-switch/ARCRegionswitch_EXPORTS.h>
#include <aws/arc-region-switch/model/Step.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace ARCRegionswitch
{
namespace Model
{
  class Step;

  /**
   * <p>Configuration for steps that should be executed in parallel during a Region
   * switch.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/arc-region-switch-2022-07-26/ParallelExecutionBlockConfiguration">AWS
   * API Reference</a></p>
   */
  class ParallelExecutionBlockConfiguration
  {
  public:
    AWS_ARCREGIONSWITCH_API ParallelExecutionBlockConfiguration() = default;
    AWS_ARCREGIONSWITCH_API ParallelExecutionBlockConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API ParallelExecutionBlockConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ARCREGIONSWITCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The steps for a parallel execution block.</p>
     */
    inline const Aws::Vector<Step>& GetSteps() const { return m_steps; }
    inline bool StepsHasBeenSet() const { return m_stepsHasBeenSet; }
    template<typename StepsT = Aws::Vector<Step>>
    void SetSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps = std::forward<StepsT>(value); }
    template<typename StepsT = Aws::Vector<Step>>
    ParallelExecutionBlockConfiguration& WithSteps(StepsT&& value) { SetSteps(std::forward<StepsT>(value)); return *this;}
    template<typename StepsT = Step>
    ParallelExecutionBlockConfiguration& AddSteps(StepsT&& value) { m_stepsHasBeenSet = true; m_steps.emplace_back(std::forward<StepsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Step> m_steps;
    bool m_stepsHasBeenSet = false;
  };

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
