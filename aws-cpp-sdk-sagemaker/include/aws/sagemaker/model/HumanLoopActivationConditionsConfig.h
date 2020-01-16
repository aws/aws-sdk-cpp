/*
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
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Defines under what conditions SageMaker creates a human loop. Used within
   * .</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopActivationConditionsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HumanLoopActivationConditionsConfig
  {
  public:
    HumanLoopActivationConditionsConfig();
    HumanLoopActivationConditionsConfig(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopActivationConditionsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline const Aws::String& GetHumanLoopActivationConditions() const{ return m_humanLoopActivationConditions; }

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline bool HumanLoopActivationConditionsHasBeenSet() const { return m_humanLoopActivationConditionsHasBeenSet; }

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline void SetHumanLoopActivationConditions(const Aws::String& value) { m_humanLoopActivationConditionsHasBeenSet = true; m_humanLoopActivationConditions = value; }

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline void SetHumanLoopActivationConditions(Aws::String&& value) { m_humanLoopActivationConditionsHasBeenSet = true; m_humanLoopActivationConditions = std::move(value); }

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline void SetHumanLoopActivationConditions(const char* value) { m_humanLoopActivationConditionsHasBeenSet = true; m_humanLoopActivationConditions.assign(value); }

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline HumanLoopActivationConditionsConfig& WithHumanLoopActivationConditions(const Aws::String& value) { SetHumanLoopActivationConditions(value); return *this;}

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline HumanLoopActivationConditionsConfig& WithHumanLoopActivationConditions(Aws::String&& value) { SetHumanLoopActivationConditions(std::move(value)); return *this;}

    /**
     * <p>JSON expressing use-case specific conditions declaratively. If any condition
     * is matched, atomic tasks are created against the configured work team. The set
     * of conditions is different for Rekognition and Textract.</p>
     */
    inline HumanLoopActivationConditionsConfig& WithHumanLoopActivationConditions(const char* value) { SetHumanLoopActivationConditions(value); return *this;}

  private:

    Aws::String m_humanLoopActivationConditions;
    bool m_humanLoopActivationConditionsHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
