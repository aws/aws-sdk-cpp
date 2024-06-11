﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/UnusedPermissionsRecommendedStep.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about a recommended step for an unused access analyzer
   * finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/RecommendedStep">AWS
   * API Reference</a></p>
   */
  class RecommendedStep
  {
  public:
    AWS_ACCESSANALYZER_API RecommendedStep();
    AWS_ACCESSANALYZER_API RecommendedStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API RecommendedStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A recommended step for an unused permissions finding.</p>
     */
    inline const UnusedPermissionsRecommendedStep& GetUnusedPermissionsRecommendedStep() const{ return m_unusedPermissionsRecommendedStep; }
    inline bool UnusedPermissionsRecommendedStepHasBeenSet() const { return m_unusedPermissionsRecommendedStepHasBeenSet; }
    inline void SetUnusedPermissionsRecommendedStep(const UnusedPermissionsRecommendedStep& value) { m_unusedPermissionsRecommendedStepHasBeenSet = true; m_unusedPermissionsRecommendedStep = value; }
    inline void SetUnusedPermissionsRecommendedStep(UnusedPermissionsRecommendedStep&& value) { m_unusedPermissionsRecommendedStepHasBeenSet = true; m_unusedPermissionsRecommendedStep = std::move(value); }
    inline RecommendedStep& WithUnusedPermissionsRecommendedStep(const UnusedPermissionsRecommendedStep& value) { SetUnusedPermissionsRecommendedStep(value); return *this;}
    inline RecommendedStep& WithUnusedPermissionsRecommendedStep(UnusedPermissionsRecommendedStep&& value) { SetUnusedPermissionsRecommendedStep(std::move(value)); return *this;}
    ///@}
  private:

    UnusedPermissionsRecommendedStep m_unusedPermissionsRecommendedStep;
    bool m_unusedPermissionsRecommendedStepHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
