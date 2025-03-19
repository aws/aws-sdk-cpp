/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/elasticmapreduce/model/StepExecutionStatusDetail.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Combines the execution state and configuration of a step.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepDetail">AWS
   * API Reference</a></p>
   */
  class StepDetail
  {
  public:
    AWS_EMR_API StepDetail() = default;
    AWS_EMR_API StepDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The step configuration.</p>
     */
    inline const StepConfig& GetStepConfig() const { return m_stepConfig; }
    inline bool StepConfigHasBeenSet() const { return m_stepConfigHasBeenSet; }
    template<typename StepConfigT = StepConfig>
    void SetStepConfig(StepConfigT&& value) { m_stepConfigHasBeenSet = true; m_stepConfig = std::forward<StepConfigT>(value); }
    template<typename StepConfigT = StepConfig>
    StepDetail& WithStepConfig(StepConfigT&& value) { SetStepConfig(std::forward<StepConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the step status.</p>
     */
    inline const StepExecutionStatusDetail& GetExecutionStatusDetail() const { return m_executionStatusDetail; }
    inline bool ExecutionStatusDetailHasBeenSet() const { return m_executionStatusDetailHasBeenSet; }
    template<typename ExecutionStatusDetailT = StepExecutionStatusDetail>
    void SetExecutionStatusDetail(ExecutionStatusDetailT&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = std::forward<ExecutionStatusDetailT>(value); }
    template<typename ExecutionStatusDetailT = StepExecutionStatusDetail>
    StepDetail& WithExecutionStatusDetail(ExecutionStatusDetailT&& value) { SetExecutionStatusDetail(std::forward<ExecutionStatusDetailT>(value)); return *this;}
    ///@}
  private:

    StepConfig m_stepConfig;
    bool m_stepConfigHasBeenSet = false;

    StepExecutionStatusDetail m_executionStatusDetail;
    bool m_executionStatusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
