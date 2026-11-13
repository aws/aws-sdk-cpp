/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalyticsv2/model/ApplicationOperationDescription.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace KinesisAnalyticsV2 {
namespace Model {

ApplicationOperationDescription::ApplicationOperationDescription(JsonView jsonValue) { *this = jsonValue; }

ApplicationOperationDescription& ApplicationOperationDescription::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ApplicationOperationId")) {
    m_applicationOperationId = jsonValue.GetString("ApplicationOperationId");
    m_applicationOperationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ApplicationName")) {
    m_applicationName = jsonValue.GetString("ApplicationName");
    m_applicationNameHasBeenSet = true;
  }
  return *this;
}

JsonValue ApplicationOperationDescription::Jsonize() const {
  JsonValue payload;

  if (m_applicationOperationIdHasBeenSet) {
    payload.WithString("ApplicationOperationId", m_applicationOperationId);
  }

  if (m_applicationNameHasBeenSet) {
    payload.WithString("ApplicationName", m_applicationName);
  }

  return payload;
}

}  // namespace Model
}  // namespace KinesisAnalyticsV2
}  // namespace Aws
