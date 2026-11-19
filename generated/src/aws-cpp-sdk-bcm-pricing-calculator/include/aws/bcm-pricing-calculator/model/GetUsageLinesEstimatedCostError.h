/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-pricing-calculator/BCMPricingCalculator_EXPORTS.h>
#include <aws/bcm-pricing-calculator/model/GetUsageLinesEstimatedCostErrorCode.h>
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
 * <p> Represents a usage line that couldn't be priced. </p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-pricing-calculator-2024-06-19/GetUsageLinesEstimatedCostError">AWS
 * API Reference</a></p>
 */
class GetUsageLinesEstimatedCostError {
 public:
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostError() = default;
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostError(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API GetUsageLinesEstimatedCostError& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BCMPRICINGCALCULATOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The key of the usage line in the request that couldn't be priced. </p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  GetUsageLinesEstimatedCostError& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Web Services service code of the usage line that couldn't be
   * priced. </p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  GetUsageLinesEstimatedCostError& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The usage type of the usage line that couldn't be priced. </p>
   */
  inline const Aws::String& GetUsageType() const { return m_usageType; }
  inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }
  template <typename UsageTypeT = Aws::String>
  void SetUsageType(UsageTypeT&& value) {
    m_usageTypeHasBeenSet = true;
    m_usageType = std::forward<UsageTypeT>(value);
  }
  template <typename UsageTypeT = Aws::String>
  GetUsageLinesEstimatedCostError& WithUsageType(UsageTypeT&& value) {
    SetUsageType(std::forward<UsageTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The operation of the usage line that couldn't be priced. </p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  GetUsageLinesEstimatedCostError& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The code associated with the error. </p>
   */
  inline GetUsageLinesEstimatedCostErrorCode GetErrorCode() const { return m_errorCode; }
  inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
  inline void SetErrorCode(GetUsageLinesEstimatedCostErrorCode value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = value;
  }
  inline GetUsageLinesEstimatedCostError& WithErrorCode(GetUsageLinesEstimatedCostErrorCode value) {
    SetErrorCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The message that describes the error. </p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetUsageLinesEstimatedCostError& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::String m_serviceCode;

  Aws::String m_usageType;

  Aws::String m_operation;

  GetUsageLinesEstimatedCostErrorCode m_errorCode{GetUsageLinesEstimatedCostErrorCode::NOT_SET};

  Aws::String m_errorMessage;
  bool m_keyHasBeenSet = false;
  bool m_serviceCodeHasBeenSet = false;
  bool m_usageTypeHasBeenSet = false;
  bool m_operationHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace BCMPricingCalculator
}  // namespace Aws
