/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowAliasInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowAliasInfo::ContactFlowAliasInfo(JsonView jsonValue) { *this = jsonValue; }

ContactFlowAliasInfo& ContactFlowAliasInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ContactFlowId")) {
    m_contactFlowId = jsonValue.GetString("ContactFlowId");
    m_contactFlowIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ContactFlowArn")) {
    m_contactFlowArn = jsonValue.GetString("ContactFlowArn");
    m_contactFlowArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AliasId")) {
    m_aliasId = jsonValue.GetString("AliasId");
    m_aliasIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowAliasInfo::Jsonize() const {
  JsonValue payload;

  if (m_contactFlowIdHasBeenSet) {
    payload.WithString("ContactFlowId", m_contactFlowId);
  }

  if (m_contactFlowArnHasBeenSet) {
    payload.WithString("ContactFlowArn", m_contactFlowArn);
  }

  if (m_aliasIdHasBeenSet) {
    payload.WithString("AliasId", m_aliasId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInt64("Version", m_version);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
