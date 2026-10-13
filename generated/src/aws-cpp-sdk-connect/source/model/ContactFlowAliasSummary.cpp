/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowAliasSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowAliasSummary::ContactFlowAliasSummary(JsonView jsonValue) { *this = jsonValue; }

ContactFlowAliasSummary& ContactFlowAliasSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AliasId")) {
    m_aliasId = jsonValue.GetString("AliasId");
    m_aliasIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInt64("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AliasName")) {
    m_aliasName = jsonValue.GetString("AliasName");
    m_aliasNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AliasDescription")) {
    m_aliasDescription = jsonValue.GetString("AliasDescription");
    m_aliasDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowAliasSummary::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_aliasIdHasBeenSet) {
    payload.WithString("AliasId", m_aliasId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInt64("Version", m_version);
  }

  if (m_aliasNameHasBeenSet) {
    payload.WithString("AliasName", m_aliasName);
  }

  if (m_aliasDescriptionHasBeenSet) {
    payload.WithString("AliasDescription", m_aliasDescription);
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
