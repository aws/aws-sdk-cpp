﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/deadline/model/ServiceManagedEc2FleetConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace deadline {
namespace Model {

ServiceManagedEc2FleetConfiguration::ServiceManagedEc2FleetConfiguration(JsonView jsonValue) { *this = jsonValue; }

ServiceManagedEc2FleetConfiguration& ServiceManagedEc2FleetConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("instanceCapabilities")) {
    m_instanceCapabilities = jsonValue.GetObject("instanceCapabilities");
    m_instanceCapabilitiesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceMarketOptions")) {
    m_instanceMarketOptions = jsonValue.GetObject("instanceMarketOptions");
    m_instanceMarketOptionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("vpcConfiguration")) {
    m_vpcConfiguration = jsonValue.GetObject("vpcConfiguration");
    m_vpcConfigurationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("storageProfileId")) {
    m_storageProfileId = jsonValue.GetString("storageProfileId");
    m_storageProfileIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ServiceManagedEc2FleetConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_instanceCapabilitiesHasBeenSet) {
    payload.WithObject("instanceCapabilities", m_instanceCapabilities.Jsonize());
  }

  if (m_instanceMarketOptionsHasBeenSet) {
    payload.WithObject("instanceMarketOptions", m_instanceMarketOptions.Jsonize());
  }

  if (m_vpcConfigurationHasBeenSet) {
    payload.WithObject("vpcConfiguration", m_vpcConfiguration.Jsonize());
  }

  if (m_storageProfileIdHasBeenSet) {
    payload.WithString("storageProfileId", m_storageProfileId);
  }

  return payload;
}

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
