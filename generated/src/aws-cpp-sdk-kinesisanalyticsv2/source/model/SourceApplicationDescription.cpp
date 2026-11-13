/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/SourceApplicationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

SourceApplicationDescription::SourceApplicationDescription(JsonView jsonValue) { *this = jsonValue; }

SourceApplicationDescription& SourceApplicationDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationName")) {
    m_applicationName = jsonValue.GetString("ApplicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationCreationTimestamp")) {
    m_applicationCreationTimestamp = jsonValue.GetDouble("ApplicationCreationTimestamp");
    m_applicationCreationTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationVersionId")) {
    m_applicationVersionId = jsonValue.GetInt64("ApplicationVersionId");
    m_applicationVersionIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SourceApplicationDescription::Jsonize() const {
  JsonValue payload;

  if (m_applicationNameHasBeenSet) {
    payload.WithString("ApplicationName", m_applicationName);
  }

  if (m_applicationCreationTimestampHasBeenSet) {
    payload.WithDouble("ApplicationCreationTimestamp", m_applicationCreationTimestamp.SecondsWithMSPrecision());
  }

  if (m_applicationVersionIdHasBeenSet) {
    payload.WithInt64("ApplicationVersionId", m_applicationVersionId);
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
