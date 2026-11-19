/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculatorRequest.h>
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostInput.h>
#include <aws/bcm-pricing-calculator/model/RateType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BCMPricingCalculator {
namespace Model {

/**
 */
class GetUsageLinesEstimatedCostRequest : public BCMPricingCalculatorRequest {
 public:
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetUsageLinesEstimatedCost"; }

  AWS_BCMPRICINGCALCULATOR_API Aws::String SerializePayload() const override;

  AWS_BCMPRICINGCALCULATOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The usage lines that you want to estimate. You can include up to 500 usage
   * lines in a request. </p>
   */
  inline const Aws::Vector<GetUsageLinesEstimatedCostInput>& GetUsage() const { return m_usage; }
  inline bool UsageHasBeenSet() const { return m_usageHasBeenSet; }
  template <typename UsageT = Aws::Vector<GetUsageLinesEstimatedCostInput>>
  void SetUsage(UsageT&& value) {
    m_usageHasBeenSet = true;
    m_usage = std::forward<UsageT>(value);
  }
  template <typename UsageT = Aws::Vector<GetUsageLinesEstimatedCostInput>>
  GetUsageLinesEstimatedCostRequest& WithUsage(UsageT&& value) {
    SetUsage(std::forward<UsageT>(value));
    return *this;
  }
  template <typename UsageT = GetUsageLinesEstimatedCostInput>
  GetUsageLinesEstimatedCostRequest& AddUsage(UsageT&& value) {
    m_usageHasBeenSet = true;
    m_usage.emplace_back(std::forward<UsageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The type of pricing rates to use to estimate the cost of the usage lines.
   * You can only use a rate type that your Pricing Calculator rate preferences
   * allow. If you use billing transfer as a bill source account, you can only use
   * BEFORE_DISCOUNTS </p>
   */
  inline RateType GetRateType() const { return m_rateType; }
  inline bool RateTypeHasBeenSet() const { return m_rateTypeHasBeenSet; }
  inline void SetRateType(RateType value) {
    m_rateTypeHasBeenSet = true;
    m_rateType = value;
  }
  inline GetUsageLinesEstimatedCostRequest& WithRateType(RateType value) {
    SetRateType(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<GetUsageLinesEstimatedCostInput> m_usage;

  RateType m_rateType{RateType::NOT_SET};
  bool m_usageHasBeenSet = false;
  bool m_rateTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
