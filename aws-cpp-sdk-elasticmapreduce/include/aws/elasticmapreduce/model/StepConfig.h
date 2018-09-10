﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ActionOnFailure.h>
#include <aws/elasticmapreduce/model/HadoopJarStepConfig.h>
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
   * <p>Specification of a cluster (job flow) step.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/StepConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API StepConfig
  {
  public:
    StepConfig();
    StepConfig(Aws::Utils::Json::JsonView jsonValue);
    StepConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the step.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the step.</p>
     */
    inline StepConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The action to take if the step fails.</p>
     */
    inline const ActionOnFailure& GetActionOnFailure() const{ return m_actionOnFailure; }

    /**
     * <p>The action to take if the step fails.</p>
     */
    inline void SetActionOnFailure(const ActionOnFailure& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = value; }

    /**
     * <p>The action to take if the step fails.</p>
     */
    inline void SetActionOnFailure(ActionOnFailure&& value) { m_actionOnFailureHasBeenSet = true; m_actionOnFailure = std::move(value); }

    /**
     * <p>The action to take if the step fails.</p>
     */
    inline StepConfig& WithActionOnFailure(const ActionOnFailure& value) { SetActionOnFailure(value); return *this;}

    /**
     * <p>The action to take if the step fails.</p>
     */
    inline StepConfig& WithActionOnFailure(ActionOnFailure&& value) { SetActionOnFailure(std::move(value)); return *this;}


    /**
     * <p>The JAR file used for the step.</p>
     */
    inline const HadoopJarStepConfig& GetHadoopJarStep() const{ return m_hadoopJarStep; }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline void SetHadoopJarStep(const HadoopJarStepConfig& value) { m_hadoopJarStepHasBeenSet = true; m_hadoopJarStep = value; }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline void SetHadoopJarStep(HadoopJarStepConfig&& value) { m_hadoopJarStepHasBeenSet = true; m_hadoopJarStep = std::move(value); }

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline StepConfig& WithHadoopJarStep(const HadoopJarStepConfig& value) { SetHadoopJarStep(value); return *this;}

    /**
     * <p>The JAR file used for the step.</p>
     */
    inline StepConfig& WithHadoopJarStep(HadoopJarStepConfig&& value) { SetHadoopJarStep(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    ActionOnFailure m_actionOnFailure;
    bool m_actionOnFailureHasBeenSet;

    HadoopJarStepConfig m_hadoopJarStep;
    bool m_hadoopJarStepHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
