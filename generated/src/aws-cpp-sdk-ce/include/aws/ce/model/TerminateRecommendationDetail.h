/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>Details on termination recommendation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/TerminateRecommendationDetail">AWS
   * API Reference</a></p>
   */
  class TerminateRecommendationDetail
  {
  public:
    AWS_COSTEXPLORER_API TerminateRecommendationDetail();
    AWS_COSTEXPLORER_API TerminateRecommendationDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API TerminateRecommendationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The estimated savings that result from modification, on a monthly basis.</p>
     */
    inline const Aws::String& GetEstimatedMonthlySavings() const{ return m_estimatedMonthlySavings; }
    inline bool EstimatedMonthlySavingsHasBeenSet() const { return m_estimatedMonthlySavingsHasBeenSet; }
    inline void SetEstimatedMonthlySavings(const Aws::String& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = value; }
    inline void SetEstimatedMonthlySavings(Aws::String&& value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings = std::move(value); }
    inline void SetEstimatedMonthlySavings(const char* value) { m_estimatedMonthlySavingsHasBeenSet = true; m_estimatedMonthlySavings.assign(value); }
    inline TerminateRecommendationDetail& WithEstimatedMonthlySavings(const Aws::String& value) { SetEstimatedMonthlySavings(value); return *this;}
    inline TerminateRecommendationDetail& WithEstimatedMonthlySavings(Aws::String&& value) { SetEstimatedMonthlySavings(std::move(value)); return *this;}
    inline TerminateRecommendationDetail& WithEstimatedMonthlySavings(const char* value) { SetEstimatedMonthlySavings(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code that Amazon Web Services used to calculate the costs for
     * this instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline TerminateRecommendationDetail& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline TerminateRecommendationDetail& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline TerminateRecommendationDetail& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}
  private:

    Aws::String m_estimatedMonthlySavings;
    bool m_estimatedMonthlySavingsHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
