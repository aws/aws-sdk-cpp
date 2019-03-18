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
   * <p>The estimated cost savings that might be realized if the recommended actions
   * are taken.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/support-2013-04-15/TrustedAdvisorCostOptimizingSummary">AWS
   * API Reference</a></p>
   */
  class AWS_SUPPORT_API TrustedAdvisorCostOptimizingSummary
  {
  public:
    TrustedAdvisorCostOptimizingSummary();
    TrustedAdvisorCostOptimizingSummary(Aws::Utils::Json::JsonView jsonValue);
    TrustedAdvisorCostOptimizingSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The estimated monthly savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline double GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }

    /**
     * <p>The estimated monthly savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }

    /**
     * <p>The estimated monthly savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline void SetEstimatedMonthlySavings(double value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }

    /**
     * <p>The estimated monthly savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline TrustedAdvisorCostOptimizingSummary& WithEstimatedMonthlySavings(double value) { SetEstimatedMonthlySavings(value); return *this;}


    /**
     * <p>The estimated percentage of savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline double GetEstimatedPercentMonthlySavings() const{ return m_estimatedPercentMonthlySavings; }

    /**
     * <p>The estimated percentage of savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline bool EstimatedPercentMonthlySavingsHasBeenSet() const { return m_estimatedPercentMonthlySavingsHasBeenSet; }

    /**
     * <p>The estimated percentage of savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline void SetEstimatedPercentMonthlySavings(double value) { m_estimatedPercentMonthlySavingsHasBeenSet = true; m_estimatedPercentMonthlySavings = value; }

    /**
     * <p>The estimated percentage of savings that might be realized if the recommended
     * actions are taken.</p>
     */
    inline TrustedAdvisorCostOptimizingSummary& WithEstimatedPercentMonthlySavings(double value) { SetEstimatedPercentMonthlySavings(value); return *this;}

  private:

    double m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet;

    double m_estimatedPercentMonthlySavings;
    bool m_estimatedPercentMonthlySavingsHasBeenSet;
  };

} // namespace Model
} // namespace Support
} // namespace Aws
