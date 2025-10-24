﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/entityresolution/model/ProviderMarketplaceConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EntityResolution {
namespace Model {

ProviderMarketplaceConfiguration::ProviderMarketplaceConfiguration(JsonView jsonValue) { *this = jsonValue; }

ProviderMarketplaceConfiguration& ProviderMarketplaceConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("dataSetId")) {
    m_dataSetId = jsonValue.GetString("dataSetId");
    m_dataSetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revisionId")) {
    m_revisionId = jsonValue.GetString("revisionId");
    m_revisionIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("assetId")) {
    m_assetId = jsonValue.GetString("assetId");
    m_assetIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listingId")) {
    m_listingId = jsonValue.GetString("listingId");
    m_listingIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ProviderMarketplaceConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_dataSetIdHasBeenSet) {
    payload.WithString("dataSetId", m_dataSetId);
  }

  if (m_revisionIdHasBeenSet) {
    payload.WithString("revisionId", m_revisionId);
  }

  if (m_assetIdHasBeenSet) {
    payload.WithString("assetId", m_assetId);
  }

  if (m_listingIdHasBeenSet) {
    payload.WithString("listingId", m_listingId);
  }

  return payload;
}

}  // namespace Model
}  // namespace EntityResolution
}  // namespace Aws
