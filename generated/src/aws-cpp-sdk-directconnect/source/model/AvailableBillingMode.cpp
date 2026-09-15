/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/directconnect/model/AvailableBillingMode.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DirectConnect {
namespace Model {

AvailableBillingMode::AvailableBillingMode(JsonView jsonValue) { *this = jsonValue; }

AvailableBillingMode& AvailableBillingMode::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("billingMode")) {
    m_billingMode = BillingModeMapper::GetBillingModeForName(jsonValue.GetString("billingMode"));
    m_billingModeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("availablePortSpeeds")) {
    Aws::Utils::Array<JsonView> availablePortSpeedsJsonList = jsonValue.GetArray("availablePortSpeeds");
    for (unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength();
         ++availablePortSpeedsIndex) {
      m_availablePortSpeeds.push_back(availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString());
    }
    m_availablePortSpeedsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("includedRegions")) {
    Aws::Utils::Array<JsonView> includedRegionsJsonList = jsonValue.GetArray("includedRegions");
    for (unsigned includedRegionsIndex = 0; includedRegionsIndex < includedRegionsJsonList.GetLength(); ++includedRegionsIndex) {
      m_includedRegions.push_back(includedRegionsJsonList[includedRegionsIndex].AsString());
    }
    m_includedRegionsHasBeenSet = true;
  }
  return *this;
}

JsonValue AvailableBillingMode::Jsonize() const {
  JsonValue payload;

  if (m_billingModeHasBeenSet) {
    payload.WithString("billingMode", BillingModeMapper::GetNameForBillingMode(m_billingMode));
  }

  if (m_availablePortSpeedsHasBeenSet) {
    Aws::Utils::Array<JsonValue> availablePortSpeedsJsonList(m_availablePortSpeeds.size());
    for (unsigned availablePortSpeedsIndex = 0; availablePortSpeedsIndex < availablePortSpeedsJsonList.GetLength();
         ++availablePortSpeedsIndex) {
      availablePortSpeedsJsonList[availablePortSpeedsIndex].AsString(m_availablePortSpeeds[availablePortSpeedsIndex]);
    }
    payload.WithArray("availablePortSpeeds", std::move(availablePortSpeedsJsonList));
  }

  if (m_includedRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> includedRegionsJsonList(m_includedRegions.size());
    for (unsigned includedRegionsIndex = 0; includedRegionsIndex < includedRegionsJsonList.GetLength(); ++includedRegionsIndex) {
      includedRegionsJsonList[includedRegionsIndex].AsString(m_includedRegions[includedRegionsIndex]);
    }
    payload.WithArray("includedRegions", std::move(includedRegionsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
