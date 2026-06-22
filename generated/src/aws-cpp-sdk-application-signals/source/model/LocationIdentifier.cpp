/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/LocationIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ApplicationSignals {
namespace Model {

LocationIdentifier::LocationIdentifier(JsonView jsonValue) { *this = jsonValue; }

LocationIdentifier& LocationIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CodeLocation")) {
    m_codeLocation = jsonValue.GetObject("CodeLocation");
    m_codeLocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LocationHash")) {
    m_locationHash = jsonValue.GetString("LocationHash");
    m_locationHashHasBeenSet = true;
  }
  return *this;
}

JsonValue LocationIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_codeLocationHasBeenSet) {
    payload.WithObject("CodeLocation", m_codeLocation.Jsonize());
  }

  if (m_locationHashHasBeenSet) {
    payload.WithString("LocationHash", m_locationHash);
  }

  return payload;
}

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
