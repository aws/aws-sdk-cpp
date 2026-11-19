/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/CurrencyCode.h>
#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostError.h>
#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostLineItem.h>
#include <aws/bcm-pricing-calculator/model/RateType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {
class GetUsageLinesEstimatedCostResult {
 public:
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostResult() = default;
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The type of pricing rates used to estimate the cost of the usage lines. </p>
   */
  inline RateType GetRateType() const { return m_rateType; }
  inline void SetRateType(RateType value) {
    m_rateTypeHasBeenSet = true;
    m_rateType = value;
  }
  inline GetUsageLinesEstimatedCostResult& WithRateType(RateType value) {
    SetRateType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The sum of the estimated costs of all usage lines that were priced. Usage
   * lines returned in <code>errors</code> aren't included. </p>
   */
  inline double GetTotalCost() const { return m_totalCost; }
  inline void SetTotalCost(double value) {
    m_totalCostHasBeenSet = true;
    m_totalCost = value;
  }
  inline GetUsageLinesEstimatedCostResult& WithTotalCost(double value) {
    SetTotalCost(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The currency of the costs in the response. </p>
   */
  inline CurrencyCode GetCurrency() const { return m_currency; }
  inline void SetCurrency(CurrencyCode value) {
    m_currencyHasBeenSet = true;
    m_currency = value;
  }
  inline GetUsageLinesEstimatedCostResult& WithCurrency(CurrencyCode value) {
    SetCurrency(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The estimated cost of each usage line that was priced. </p>
   */
  inline const Aws::Vector<GetUsageLinesEstimatedCostLineItem>& GetLineItems() const { return m_lineItems; }
  template <typename LineItemsT = Aws::Vector<GetUsageLinesEstimatedCostLineItem>>
  void SetLineItems(LineItemsT&& value) {
    m_lineItemsHasBeenSet = true;
    m_lineItems = std::forward<LineItemsT>(value);
  }
  template <typename LineItemsT = Aws::Vector<GetUsageLinesEstimatedCostLineItem>>
  GetUsageLinesEstimatedCostResult& WithLineItems(LineItemsT&& value) {
    SetLineItems(std::forward<LineItemsT>(value));
    return *this;
  }
  template <typename LineItemsT = GetUsageLinesEstimatedCostLineItem>
  GetUsageLinesEstimatedCostResult& AddLineItems(LineItemsT&& value) {
    m_lineItemsHasBeenSet = true;
    m_lineItems.emplace_back(std::forward<LineItemsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The usage lines that couldn't be priced, and the reason that each one
   * couldn't be priced. </p>
   */
  inline const Aws::Vector<GetUsageLinesEstimatedCostError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<GetUsageLinesEstimatedCostError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<GetUsageLinesEstimatedCostError>>
  GetUsageLinesEstimatedCostResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = GetUsageLinesEstimatedCostError>
  GetUsageLinesEstimatedCostResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetUsageLinesEstimatedCostResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RateType m_rateType{RateType::NOT_SET};

  double m_totalCost{0.0};

  CurrencyCode m_currency{CurrencyCode::NOT_SET};

  Aws::Vector<GetUsageLinesEstimatedCostLineItem> m_lineItems;

  Aws::Vector<GetUsageLinesEstimatedCostError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_rateTypeHasBeenSet = false;
  bool m_totalCostHasBeenSet = false;
  bool m_currencyHasBeenSet = false;
  bool m_lineItemsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
