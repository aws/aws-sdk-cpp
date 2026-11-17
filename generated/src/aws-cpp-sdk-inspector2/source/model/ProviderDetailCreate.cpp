/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/inspector2/model/ProviderDetailCreate.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Inspector2 {
namespace Model {

ProviderDetailCreate::ProviderDetailCreate(JsonView jsonValue) { *this = jsonValue; }

ProviderDetailCreate& ProviderDetailCreate::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("azure")) {
    m_azure = jsonValue.GetObject("azure");
    m_azureHasBeenSet = true;
  }
  if (jsonValue.ValueExists("gcp")) {
    m_gcp = jsonValue.GetObject("gcp");
    m_gcpHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderDetailCreate::Jsonize() const {
  JsonValue payload;

  if (m_azureHasBeenSet) {
    payload.WithObject("azure", m_azure.Jsonize());
  }

  if (m_gcpHasBeenSet) {
    payload.WithObject("gcp", m_gcp.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
