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
#include <aws/sagemaker/model/HumanLoopRequestSource.h>
#include <aws/sagemaker/model/HumanLoopActivationConditionsConfig.h>
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
   * <p>Provides information about how and under what conditions SageMaker creates a
   * human loop. If <code>HumanLoopActivationConfig</code> is not given, then all
   * requests go to humans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/HumanLoopActivationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API HumanLoopActivationConfig
  {
  public:
    HumanLoopActivationConfig();
    HumanLoopActivationConfig(Aws::Utils::Json::JsonView jsonValue);
    HumanLoopActivationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline const HumanLoopRequestSource& GetHumanLoopRequestSource() const{ return m_humanLoopRequestSource; }

    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline bool HumanLoopRequestSourceHasBeenSet() const { return m_humanLoopRequestSourceHasBeenSet; }

    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline void SetHumanLoopRequestSource(const HumanLoopRequestSource& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = value; }

    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline void SetHumanLoopRequestSource(HumanLoopRequestSource&& value) { m_humanLoopRequestSourceHasBeenSet = true; m_humanLoopRequestSource = std::move(value); }

    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline HumanLoopActivationConfig& WithHumanLoopRequestSource(const HumanLoopRequestSource& value) { SetHumanLoopRequestSource(value); return *this;}

    /**
     * <p>Container for configuring the source of human task requests.</p>
     */
    inline HumanLoopActivationConfig& WithHumanLoopRequestSource(HumanLoopRequestSource&& value) { SetHumanLoopRequestSource(std::move(value)); return *this;}


    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline const HumanLoopActivationConditionsConfig& GetHumanLoopActivationConditionsConfig() const{ return m_humanLoopActivationConditionsConfig; }

    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline bool HumanLoopActivationConditionsConfigHasBeenSet() const { return m_humanLoopActivationConditionsConfigHasBeenSet; }

    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline void SetHumanLoopActivationConditionsConfig(const HumanLoopActivationConditionsConfig& value) { m_humanLoopActivationConditionsConfigHasBeenSet = true; m_humanLoopActivationConditionsConfig = value; }

    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline void SetHumanLoopActivationConditionsConfig(HumanLoopActivationConditionsConfig&& value) { m_humanLoopActivationConditionsConfigHasBeenSet = true; m_humanLoopActivationConditionsConfig = std::move(value); }

    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline HumanLoopActivationConfig& WithHumanLoopActivationConditionsConfig(const HumanLoopActivationConditionsConfig& value) { SetHumanLoopActivationConditionsConfig(value); return *this;}

    /**
     * <p>Container structure for defining under what conditions SageMaker creates a
     * human loop.</p>
     */
    inline HumanLoopActivationConfig& WithHumanLoopActivationConditionsConfig(HumanLoopActivationConditionsConfig&& value) { SetHumanLoopActivationConditionsConfig(std::move(value)); return *this;}

  private:

    HumanLoopRequestSource m_humanLoopRequestSource;
    bool m_humanLoopRequestSourceHasBeenSet;

    HumanLoopActivationConditionsConfig m_humanLoopActivationConditionsConfig;
    bool m_humanLoopActivationConditionsConfigHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
