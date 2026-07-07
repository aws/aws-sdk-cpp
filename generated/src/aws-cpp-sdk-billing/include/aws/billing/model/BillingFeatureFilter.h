/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingFeatureFilterName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>A filter that narrows the set of preferences returned by
 * <code>GetBillingPreferences</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingFeatureFilter">AWS
 * API Reference</a></p>
 */
class BillingFeatureFilter {
 public:
  AWS_BILLING_API BillingFeatureFilter() = default;
  AWS_BILLING_API BillingFeatureFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingFeatureFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The filter name. Currently the only supported value is
   * <code>PREFERENCE_KEY</code>.</p>
   */
  inline BillingFeatureFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(BillingFeatureFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline BillingFeatureFilter& WithName(BillingFeatureFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter values to match. For <code>PREFERENCE_KEY</code>, supply 1 to 10
   * preference key values to match.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::Vector<Aws::String>>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::Vector<Aws::String>>
  BillingFeatureFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  template <typename ValueT = Aws::String>
  BillingFeatureFilter& AddValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value.emplace_back(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  BillingFeatureFilterName m_name{BillingFeatureFilterName::NOT_SET};

  Aws::Vector<Aws::String> m_value;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
