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
#include <aws/personalize/Personalize_EXPORTS.h>
#include <aws/personalize/model/HPOObjective.h>
#include <aws/personalize/model/HPOResourceConfig.h>
#include <aws/personalize/model/HyperParameterRanges.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Describes the properties for hyperparameter optimization (HPO). For use with
   * the bring-your-own-recipe feature. Do not use for Amazon Personalize native
   * recipes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/HPOConfig">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API HPOConfig
  {
  public:
    HPOConfig();
    HPOConfig(Aws::Utils::Json::JsonView jsonValue);
    HPOConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline const HPOObjective& GetHpoObjective() const{ return m_hpoObjective; }

    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline bool HpoObjectiveHasBeenSet() const { return m_hpoObjectiveHasBeenSet; }

    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline void SetHpoObjective(const HPOObjective& value) { m_hpoObjectiveHasBeenSet = true; m_hpoObjective = value; }

    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline void SetHpoObjective(HPOObjective&& value) { m_hpoObjectiveHasBeenSet = true; m_hpoObjective = std::move(value); }

    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline HPOConfig& WithHpoObjective(const HPOObjective& value) { SetHpoObjective(value); return *this;}

    /**
     * <p>The metric to optimize during HPO.</p>
     */
    inline HPOConfig& WithHpoObjective(HPOObjective&& value) { SetHpoObjective(std::move(value)); return *this;}


    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline const HPOResourceConfig& GetHpoResourceConfig() const{ return m_hpoResourceConfig; }

    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline bool HpoResourceConfigHasBeenSet() const { return m_hpoResourceConfigHasBeenSet; }

    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline void SetHpoResourceConfig(const HPOResourceConfig& value) { m_hpoResourceConfigHasBeenSet = true; m_hpoResourceConfig = value; }

    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline void SetHpoResourceConfig(HPOResourceConfig&& value) { m_hpoResourceConfigHasBeenSet = true; m_hpoResourceConfig = std::move(value); }

    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline HPOConfig& WithHpoResourceConfig(const HPOResourceConfig& value) { SetHpoResourceConfig(value); return *this;}

    /**
     * <p>Describes the resource configuration for HPO.</p>
     */
    inline HPOConfig& WithHpoResourceConfig(HPOResourceConfig&& value) { SetHpoResourceConfig(std::move(value)); return *this;}


    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline const HyperParameterRanges& GetAlgorithmHyperParameterRanges() const{ return m_algorithmHyperParameterRanges; }

    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline bool AlgorithmHyperParameterRangesHasBeenSet() const { return m_algorithmHyperParameterRangesHasBeenSet; }

    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline void SetAlgorithmHyperParameterRanges(const HyperParameterRanges& value) { m_algorithmHyperParameterRangesHasBeenSet = true; m_algorithmHyperParameterRanges = value; }

    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline void SetAlgorithmHyperParameterRanges(HyperParameterRanges&& value) { m_algorithmHyperParameterRangesHasBeenSet = true; m_algorithmHyperParameterRanges = std::move(value); }

    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline HPOConfig& WithAlgorithmHyperParameterRanges(const HyperParameterRanges& value) { SetAlgorithmHyperParameterRanges(value); return *this;}

    /**
     * <p>The hyperparameters and their allowable ranges.</p>
     */
    inline HPOConfig& WithAlgorithmHyperParameterRanges(HyperParameterRanges&& value) { SetAlgorithmHyperParameterRanges(std::move(value)); return *this;}

  private:

    HPOObjective m_hpoObjective;
    bool m_hpoObjectiveHasBeenSet;

    HPOResourceConfig m_hpoResourceConfig;
    bool m_hpoResourceConfigHasBeenSet;

    HyperParameterRanges m_algorithmHyperParameterRanges;
    bool m_algorithmHyperParameterRangesHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
