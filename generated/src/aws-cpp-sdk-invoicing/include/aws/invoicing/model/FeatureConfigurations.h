/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/InvoiceConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {

/**
 * <p>Contains the default feature configuration settings for a procurement
 * portal.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/invoicing-2024-12-01/FeatureConfigurations">AWS
 * API Reference</a></p>
 */
class FeatureConfigurations {
 public:
  AWS_INVOICING_API FeatureConfigurations() = default;
  AWS_INVOICING_API FeatureConfigurations(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API FeatureConfigurations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INVOICING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The invoice configuration settings for the procurement portal.</p>
   */
  inline const InvoiceConfiguration& GetInvoiceConfiguration() const { return m_invoiceConfiguration; }
  inline bool InvoiceConfigurationHasBeenSet() const { return m_invoiceConfigurationHasBeenSet; }
  template <typename InvoiceConfigurationT = InvoiceConfiguration>
  void SetInvoiceConfiguration(InvoiceConfigurationT&& value) {
    m_invoiceConfigurationHasBeenSet = true;
    m_invoiceConfiguration = std::forward<InvoiceConfigurationT>(value);
  }
  template <typename InvoiceConfigurationT = InvoiceConfiguration>
  FeatureConfigurations& WithInvoiceConfiguration(InvoiceConfigurationT&& value) {
    SetInvoiceConfiguration(std::forward<InvoiceConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  InvoiceConfiguration m_invoiceConfiguration;
  bool m_invoiceConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
