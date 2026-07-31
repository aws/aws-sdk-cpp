/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>Service-level usage details by account.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/ServiceLevelAccountUsage">AWS
 * API Reference</a></p>
 */
class ServiceLevelAccountUsage {
 public:
  AWS_BILLING_API ServiceLevelAccountUsage() = default;
  AWS_BILLING_API ServiceLevelAccountUsage(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API ServiceLevelAccountUsage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service code for which to return Support-eligible spend data.</p>
   */
  inline const Aws::String& GetServiceCode() const { return m_serviceCode; }
  inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
  template <typename ServiceCodeT = Aws::String>
  void SetServiceCode(ServiceCodeT&& value) {
    m_serviceCodeHasBeenSet = true;
    m_serviceCode = std::forward<ServiceCodeT>(value);
  }
  template <typename ServiceCodeT = Aws::String>
  ServiceLevelAccountUsage& WithServiceCode(ServiceCodeT&& value) {
    SetServiceCode(std::forward<ServiceCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total support-eligible spend for the service.</p>
   */
  inline const Aws::String& GetTotalSupportEligibleSpend() const { return m_totalSupportEligibleSpend; }
  inline bool TotalSupportEligibleSpendHasBeenSet() const { return m_totalSupportEligibleSpendHasBeenSet; }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  void SetTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    m_totalSupportEligibleSpendHasBeenSet = true;
    m_totalSupportEligibleSpend = std::forward<TotalSupportEligibleSpendT>(value);
  }
  template <typename TotalSupportEligibleSpendT = Aws::String>
  ServiceLevelAccountUsage& WithTotalSupportEligibleSpend(TotalSupportEligibleSpendT&& value) {
    SetTotalSupportEligibleSpend(std::forward<TotalSupportEligibleSpendT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceCode;

  Aws::String m_totalSupportEligibleSpend;
  bool m_serviceCodeHasBeenSet = false;
  bool m_totalSupportEligibleSpendHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
