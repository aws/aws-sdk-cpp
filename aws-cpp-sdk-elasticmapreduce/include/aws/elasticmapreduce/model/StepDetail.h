/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/StepConfig.h>
#include <aws/elasticmapreduce/model/StepExecutionStatusDetail.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EMR
{
namespace Model
{

  /**
   * <p>Combines the execution state and configuration of a step.</p>
   */
  class AWS_EMR_API StepDetail
  {
  public:
    StepDetail();
    StepDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    StepDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The step configuration.</p>
     */
    inline const StepConfig& GetStepConfig() const{ return m_stepConfig; }

    /**
     * <p>The step configuration.</p>
     */
    inline void SetStepConfig(const StepConfig& value) { m_stepConfigHasBeenSet = true; m_stepConfig = value; }

    /**
     * <p>The step configuration.</p>
     */
    inline void SetStepConfig(StepConfig&& value) { m_stepConfigHasBeenSet = true; m_stepConfig = value; }

    /**
     * <p>The step configuration.</p>
     */
    inline StepDetail& WithStepConfig(const StepConfig& value) { SetStepConfig(value); return *this;}

    /**
     * <p>The step configuration.</p>
     */
    inline StepDetail& WithStepConfig(StepConfig&& value) { SetStepConfig(value); return *this;}

    /**
     * <p>The description of the step status.</p>
     */
    inline const StepExecutionStatusDetail& GetExecutionStatusDetail() const{ return m_executionStatusDetail; }

    /**
     * <p>The description of the step status.</p>
     */
    inline void SetExecutionStatusDetail(const StepExecutionStatusDetail& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>The description of the step status.</p>
     */
    inline void SetExecutionStatusDetail(StepExecutionStatusDetail&& value) { m_executionStatusDetailHasBeenSet = true; m_executionStatusDetail = value; }

    /**
     * <p>The description of the step status.</p>
     */
    inline StepDetail& WithExecutionStatusDetail(const StepExecutionStatusDetail& value) { SetExecutionStatusDetail(value); return *this;}

    /**
     * <p>The description of the step status.</p>
     */
    inline StepDetail& WithExecutionStatusDetail(StepExecutionStatusDetail&& value) { SetExecutionStatusDetail(value); return *this;}

  private:
    StepConfig m_stepConfig;
    bool m_stepConfigHasBeenSet;
    StepExecutionStatusDetail m_executionStatusDetail;
    bool m_executionStatusDetailHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
