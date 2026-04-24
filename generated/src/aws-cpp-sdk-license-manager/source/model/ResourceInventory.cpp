/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/ResourceInventory.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LicenseManager {
namespace Model {

ResourceInventory::ResourceInventory(JsonView jsonValue) { *this = jsonValue; }

ResourceInventory& ResourceInventory::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceId")) {
    m_resourceId = jsonValue.GetString("ResourceId");
    m_resourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceType")) {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("ResourceType"));
    m_resourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Platform")) {
    m_platform = jsonValue.GetString("Platform");
    m_platformHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PlatformVersion")) {
    m_platformVersion = jsonValue.GetString("PlatformVersion");
    m_platformVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ResourceOwningAccountId")) {
    m_resourceOwningAccountId = jsonValue.GetString("ResourceOwningAccountId");
    m_resourceOwningAccountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MarketplaceProductCodes")) {
    Aws::Utils::Array<JsonView> marketplaceProductCodesJsonList = jsonValue.GetArray("MarketplaceProductCodes");
    for (unsigned marketplaceProductCodesIndex = 0; marketplaceProductCodesIndex < marketplaceProductCodesJsonList.GetLength();
         ++marketplaceProductCodesIndex) {
      m_marketplaceProductCodes.push_back(marketplaceProductCodesJsonList[marketplaceProductCodesIndex].AsString());
    }
    m_marketplaceProductCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsageOperation")) {
    m_usageOperation = jsonValue.GetString("UsageOperation");
    m_usageOperationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmiId")) {
    m_amiId = jsonValue.GetString("AmiId");
    m_amiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("HostId")) {
    m_hostId = jsonValue.GetString("HostId");
    m_hostIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Region")) {
    m_region = jsonValue.GetString("Region");
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("InstanceType")) {
    m_instanceType = jsonValue.GetString("InstanceType");
    m_instanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceInventory::Jsonize() const {
  JsonValue payload;

  if (m_resourceIdHasBeenSet) {
    payload.WithString("ResourceId", m_resourceId);
  }

  if (m_resourceTypeHasBeenSet) {
    payload.WithString("ResourceType", ResourceTypeMapper::GetNameForResourceType(m_resourceType));
  }

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_platformHasBeenSet) {
    payload.WithString("Platform", m_platform);
  }

  if (m_platformVersionHasBeenSet) {
    payload.WithString("PlatformVersion", m_platformVersion);
  }

  if (m_resourceOwningAccountIdHasBeenSet) {
    payload.WithString("ResourceOwningAccountId", m_resourceOwningAccountId);
  }

  if (m_marketplaceProductCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> marketplaceProductCodesJsonList(m_marketplaceProductCodes.size());
    for (unsigned marketplaceProductCodesIndex = 0; marketplaceProductCodesIndex < marketplaceProductCodesJsonList.GetLength();
         ++marketplaceProductCodesIndex) {
      marketplaceProductCodesJsonList[marketplaceProductCodesIndex].AsString(m_marketplaceProductCodes[marketplaceProductCodesIndex]);
    }
    payload.WithArray("MarketplaceProductCodes", std::move(marketplaceProductCodesJsonList));
  }

  if (m_usageOperationHasBeenSet) {
    payload.WithString("UsageOperation", m_usageOperation);
  }

  if (m_amiIdHasBeenSet) {
    payload.WithString("AmiId", m_amiId);
  }

  if (m_hostIdHasBeenSet) {
    payload.WithString("HostId", m_hostId);
  }

  if (m_regionHasBeenSet) {
    payload.WithString("Region", m_region);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", m_instanceType);
  }

  return payload;
}

}  // namespace Model
}  // namespace LicenseManager
}  // namespace Aws
