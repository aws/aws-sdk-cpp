/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/BillingMode.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {

/**
 * <p>Information about a billing mode available at an Direct Connect
 * location.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/AvailableBillingMode">AWS
 * API Reference</a></p>
 */
class AvailableBillingMode {
 public:
  AWS_DIRECTCONNECT_API AvailableBillingMode() = default;
  AWS_DIRECTCONNECT_API AvailableBillingMode(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API AvailableBillingMode& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DIRECTCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The billing mode.</p>
   */
  inline BillingMode GetBillingMode() const { return m_billingMode; }
  inline bool BillingModeHasBeenSet() const { return m_billingModeHasBeenSet; }
  inline void SetBillingMode(BillingMode value) {
    m_billingModeHasBeenSet = true;
    m_billingMode = value;
  }
  inline AvailableBillingMode& WithBillingMode(BillingMode value) {
    SetBillingMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port speeds available for the billing mode.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAvailablePortSpeeds() const { return m_availablePortSpeeds; }
  inline bool AvailablePortSpeedsHasBeenSet() const { return m_availablePortSpeedsHasBeenSet; }
  template <typename AvailablePortSpeedsT = Aws::Vector<Aws::String>>
  void SetAvailablePortSpeeds(AvailablePortSpeedsT&& value) {
    m_availablePortSpeedsHasBeenSet = true;
    m_availablePortSpeeds = std::forward<AvailablePortSpeedsT>(value);
  }
  template <typename AvailablePortSpeedsT = Aws::Vector<Aws::String>>
  AvailableBillingMode& WithAvailablePortSpeeds(AvailablePortSpeedsT&& value) {
    SetAvailablePortSpeeds(std::forward<AvailablePortSpeedsT>(value));
    return *this;
  }
  template <typename AvailablePortSpeedsT = Aws::String>
  AvailableBillingMode& AddAvailablePortSpeeds(AvailablePortSpeedsT&& value) {
    m_availablePortSpeedsHasBeenSet = true;
    m_availablePortSpeeds.emplace_back(std::forward<AvailablePortSpeedsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Regions included with the billing mode.</p>
   */
  inline const Aws::Vector<Aws::String>& GetIncludedRegions() const { return m_includedRegions; }
  inline bool IncludedRegionsHasBeenSet() const { return m_includedRegionsHasBeenSet; }
  template <typename IncludedRegionsT = Aws::Vector<Aws::String>>
  void SetIncludedRegions(IncludedRegionsT&& value) {
    m_includedRegionsHasBeenSet = true;
    m_includedRegions = std::forward<IncludedRegionsT>(value);
  }
  template <typename IncludedRegionsT = Aws::Vector<Aws::String>>
  AvailableBillingMode& WithIncludedRegions(IncludedRegionsT&& value) {
    SetIncludedRegions(std::forward<IncludedRegionsT>(value));
    return *this;
  }
  template <typename IncludedRegionsT = Aws::String>
  AvailableBillingMode& AddIncludedRegions(IncludedRegionsT&& value) {
    m_includedRegionsHasBeenSet = true;
    m_includedRegions.emplace_back(std::forward<IncludedRegionsT>(value));
    return *this;
  }
  ///@}
 private:
  BillingMode m_billingMode{BillingMode::NOT_SET};

  Aws::Vector<Aws::String> m_availablePortSpeeds;

  Aws::Vector<Aws::String> m_includedRegions;
  bool m_billingModeHasBeenSet = false;
  bool m_availablePortSpeedsHasBeenSet = false;
  bool m_includedRegionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
