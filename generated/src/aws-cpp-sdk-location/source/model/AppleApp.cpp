/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/AppleApp.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

AppleApp::AppleApp(JsonView jsonValue) { *this = jsonValue; }

AppleApp& AppleApp::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BundleId")) {
    m_bundleId = jsonValue.GetString("BundleId");
    m_bundleIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AppleApp::Jsonize() const {
  JsonValue payload;

  if (m_bundleIdHasBeenSet) {
    payload.WithString("BundleId", m_bundleId);
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
