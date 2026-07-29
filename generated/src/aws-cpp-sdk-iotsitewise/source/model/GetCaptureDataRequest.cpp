/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/GetCaptureDataRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetCaptureDataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_startTimeHasBeenSet) {
    payload.WithObject("startTime", m_startTime.Jsonize());
  }

  if (m_endTimeHasBeenSet) {
    payload.WithObject("endTime", m_endTime.Jsonize());
  }

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_propertyAliasHasBeenSet) {
    payload.WithString("propertyAlias", m_propertyAlias);
  }

  if (m_formatSettingsHasBeenSet) {
    payload.WithObject("formatSettings", m_formatSettings.Jsonize());
  }

  if (m_nextTokenHasBeenSet) {
    payload.WithString("nextToken", m_nextToken);
  }

  return payload.View().WriteReadable();
}
