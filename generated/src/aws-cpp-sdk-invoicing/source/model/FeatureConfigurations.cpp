/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/FeatureConfigurations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

FeatureConfigurations::FeatureConfigurations(JsonView jsonValue) { *this = jsonValue; }

FeatureConfigurations& FeatureConfigurations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("InvoiceConfiguration")) {
    m_invoiceConfiguration = jsonValue.GetObject("InvoiceConfiguration");
    m_invoiceConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue FeatureConfigurations::Jsonize() const {
  JsonValue payload;

  if (m_invoiceConfigurationHasBeenSet) {
    payload.WithObject("InvoiceConfiguration", m_invoiceConfiguration.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
