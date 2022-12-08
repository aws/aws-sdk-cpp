/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
  class HumanLoopActivationConfig
  {
  public:
    AWS_SAGEMAKER_API HumanLoopActivationConfig();
    AWS_SAGEMAKER_API HumanLoopActivationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API HumanLoopActivationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


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

    HumanLoopActivationConditionsConfig m_humanLoopActivationConditionsConfig;
    bool m_humanLoopActivationConditionsConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
