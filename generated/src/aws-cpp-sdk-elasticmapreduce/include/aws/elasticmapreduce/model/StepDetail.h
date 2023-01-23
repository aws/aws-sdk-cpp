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
    AWS_EMR_API StepDetail();
    AWS_EMR_API StepDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API StepDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The step configuration.</p>
     */
    inline const StepConfig& GetStepConfig() const{ return m_stepConfig; }

    /**
     * <p>The step configuration.</p>
     */
    inline bool StepConfigHasBeenSet() const { return m_stepConfigHasBeenSet; }

    /**
     * <p>The step configuration.</p>
     */
    inline void SetStepConfig(const StepConfig& value) { m_stepConfigHasBeenSet = true; m_stepConfig = value; }

    /**
     * <p>The step configuration.</p>
     */
    inline void SetStepConfig(StepConfig&& value) { m_stepConfigHasBeenSet = true; m_stepConfig = std::move(value); }

    /**
     * <p>The step configuration.</p>
     */
    inline StepDetail& WithStepConfig(const StepConfig& value) { SetStepConfig(value); return *this;}

    /**
     * <p>The step configuration.</p>
     */
    inline StepDetail& WithStepConfig(StepConfig&& value) { SetStepConfig(std::move(value)); return *this;}


    /**
     * <p>The description of the step status.</p>
     */
    inline const StepExecutionStatusDetail& GetExecutionStatusDetail() const{ return m_executionStatusDetail; }

    /**
     * <p>The description of the step status.</p>
     */
    inline bool ExecutionStatusDetailHasBeenSet() const { return m_executionStatusDetailHasBeenSet; }

    /**
     * <p>The description of the step status.</p>
     */
    inline void SetExecutionStatusDetail(const StepExecutionStatusDetail& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>The description of the step status.</p>
     */
    inline void SetExecutionStatusDetail(StepExecutionStatusDetail&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = std::move(value); }

    /**
     * <p>The description of the step status.</p>
     */
    inline StepDetail& WithExecutionStatusDetail(const StepExecutionStatusDetail& value) { SetExecutionStatusDetail(value); return *this;}

    /**
     * <p>The description of the step status.</p>
     */
    inline StepDetail& WithExecutionStatusDetail(StepExecutionStatusDetail&& value) { SetExecutionStatusDetail(std::move(value)); return *this;}

  private:

    StepConfig m_stepConfig;
    bool m_stepConfigHasBeenSet = false;

    StepExecutionStatusDetail m_executionStatusDetail;
    bool m_executionStatusDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
