/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/JobActionOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

JobActionOptions::JobActionOptions(JsonView jsonValue) { *this = jsonValue; }

JobActionOptions& JobActionOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ValidateAddress")) {
    m_validateAddress = jsonValue.GetObject("ValidateAddress");
    m_validateAddressHasBeenSet = true;
  }
  return *this;
}

JsonValue JobActionOptions::Jsonize() const {
  JsonValue payload;

  if (m_validateAddressHasBeenSet) {
    payload.WithObject("ValidateAddress", m_validateAddress.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
