/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BCMPricingCalculator {
namespace Model {

/**
 * <p> Represents a usage line that you want to estimate. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetUsageLinesEstimatedCostInput">AWS
 * API Reference</a></p>
 */
class GetUsageLinesEstimatedCostInput {
 public:
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostInput() = default;
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Web Services service code of the usage line, for example
   * <code>AmazonEC2</code>. </p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  GetUsageLinesEstimatedCostInput& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The usage type of the usage line, for example
   * <code>BoxUsage:t3.micro</code>. </p>
   */
  inline const Aws::String& GetUsageType() const { return m_usageType; }
  inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
  template <typename UsageTypeT = Aws::String>
  void SetUsageType(UsageTypeT&& value) {
    m_usageTypeHasBeenSet = true;
    m_usageType = std::forward<UsageTypeT>(value);
  }
  template <typename UsageTypeT = Aws::String>
  GetUsageLinesEstimatedCostInput& WithUsageType(UsageTypeT&& value) {
    SetUsageType(std::forward<UsageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The operation of the usage line, for example <code>RunInstances</code>. </p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  GetUsageLinesEstimatedCostInput& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A unique identifier for the usage line in the request. Use the key to match
   * the usage line with its result in <code>lineItems</code> or <code>errors</code>
   * in the response. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  GetUsageLinesEstimatedCostInput& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The usage amount to price for the usage line in the usage type's pricing
   * unit. This value must be 0 or greater. </p>
   */
  inline double GetAmount() const { return m_amount; }
  inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }
  inline void SetAmount(double value) {
    m_amountHasBeenSet = true;
    m_amount = value;
  }
  inline GetUsageLinesEstimatedCostInput& WithAmount(double value) {
    SetAmount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceCode;

  Aws::String m_usageType;

  Aws::String m_operation;

  Aws::String m_key;

  double m_amount{0.0};
  bool m_serviceCodeHasBeenSet = false;
  bool m_usageTypeHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_amountHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
