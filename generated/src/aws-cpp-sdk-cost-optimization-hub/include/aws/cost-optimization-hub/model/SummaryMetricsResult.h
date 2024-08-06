/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cost-optimization-hub/CostOptimizationHub_EXPORTS.h>
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
namespace CostOptimizationHub
{
namespace Model
{

  /**
   * <p>The results or descriptions for the additional metrics, based on whether the
   * metrics were or were not requested.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cost-optimization-hub-2022-07-26/SummaryMetricsResult">AWS
   * API Reference</a></p>
   */
  class SummaryMetricsResult
  {
  public:
    AWS_COSTOPTIMIZATIONHUB_API SummaryMetricsResult();
    AWS_COSTOPTIMIZATIONHUB_API SummaryMetricsResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API SummaryMetricsResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTOPTIMIZATIONHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The savings percentage based on your Amazon Web Services spend over the past
     * 30 days.</p>  <p>Savings percentage is only supported when filtering by
     * Region, account ID, or tags.</p> 
     */
    inline const Aws::String& GetSavingsPercentage() const{ return m_savingsPercentage; }
    inline bool SavingsPercentageHasBeenSet() const { return m_savingsPercentageHasBeenSet; }
    inline void SetSavingsPercentage(const Aws::String& value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = value; }
    inline void SetSavingsPercentage(Aws::String&& value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage = std::move(value); }
    inline void SetSavingsPercentage(const char* value) { m_savingsPercentageHasBeenSet = true; m_savingsPercentage.assign(value); }
    inline SummaryMetricsResult& WithSavingsPercentage(const Aws::String& value) { SetSavingsPercentage(value); return *this;}
    inline SummaryMetricsResult& WithSavingsPercentage(Aws::String&& value) { SetSavingsPercentage(std::move(value)); return *this;}
    inline SummaryMetricsResult& WithSavingsPercentage(const char* value) { SetSavingsPercentage(value); return *this;}
    ///@}
  private:

    Aws::String m_savingsPercentage;
    bool m_savingsPercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace CostOptimizationHub
} // namespace Aws
