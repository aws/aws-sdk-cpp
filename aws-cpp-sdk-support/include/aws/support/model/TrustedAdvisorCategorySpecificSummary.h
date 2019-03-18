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
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/TrustedAdvisorCostOptimizingSummary.h>
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
namespace Support
{
namespace Model
{

  /**
   * <p>The container for summary information that relates to the category of the
   * Trusted Advisor check.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCategorySpecificSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorCategorySpecificSummary
  {
  public:
    TrustedAdvisorCategorySpecificSummary();
    TrustedAdvisorCategorySpecificSummary(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorCategorySpecificSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline const TrustedAdvisorCostOptimizingSummary& GetCostOptimizing() const{ return m_costOptimizing; }

    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline bool CostOptimizingHasBeenSet() const { return m_costOptimizingHasBeenSet; }

    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline void SetCostOptimizing(const TrustedAdvisorCostOptimizingSummary& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = value; }

    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline void SetCostOptimizing(TrustedAdvisorCostOptimizingSummary&& value) { m_costOptimizingHasBeenSet = true; m_costOptimizing = std::move(value); }

    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline TrustedAdvisorCategorySpecificSummary& WithCostOptimizing(const TrustedAdvisorCostOptimizingSummary& value) { SetCostOptimizing(value); return *this;}

    /**
     * <p>The summary information about cost savings for a Trusted Advisor check that
     * is in the Cost Optimizing category.</p>
     */
    inline TrustedAdvisorCategorySpecificSummary& WithCostOptimizing(TrustedAdvisorCostOptimizingSummary&& value) { SetCostOptimizing(std::move(value)); return *this;}

  private:

    TrustedAdvisorCostOptimizingSummary m_costOptimizing;
    bool m_costOptimizingHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
