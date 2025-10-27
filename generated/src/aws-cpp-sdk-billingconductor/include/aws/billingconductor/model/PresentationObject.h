/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BillingConductor {
namespace Model {

/**
 * <p>The presentation configuration of the custom line item</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/PresentationObject">AWS
 * API Reference</a></p>
 */
class PresentationObject {
 public:
  AWS_BILLINGCONDUCTOR_API PresentationObject() = default;
  AWS_BILLINGCONDUCTOR_API PresentationObject(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API PresentationObject& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>This defines the service of where the custom line item is presented</p>
   */
  inline const Aws::String& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = Aws::String>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = Aws::String>
  PresentationObject& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_service;
  bool m_serviceHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
