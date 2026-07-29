/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/FailedDataSegmentDeletion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

FailedDataSegmentDeletion::FailedDataSegmentDeletion(JsonView jsonValue) { *this = jsonValue; }

FailedDataSegmentDeletion& FailedDataSegmentDeletion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("timeSeriesId")) {
    m_timeSeriesId = jsonValue.GetString("timeSeriesId");
    m_timeSeriesIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("startTimestamp")) {
    m_startTimestamp = jsonValue.GetObject("startTimestamp");
    m_startTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endTimestamp")) {
    m_endTimestamp = jsonValue.GetObject("endTimestamp");
    m_endTimestampHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorCode")) {
    m_errorCode = DataSegmentErrorCodeMapper::GetDataSegmentErrorCodeForName(jsonValue.GetString("errorCode"));
    m_errorCodeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue FailedDataSegmentDeletion::Jsonize() const {
  JsonValue payload;

  if (m_timeSeriesIdHasBeenSet) {
    payload.WithString("timeSeriesId", m_timeSeriesId);
  }

  if (m_startTimestampHasBeenSet) {
    payload.WithObject("startTimestamp", m_startTimestamp.Jsonize());
  }

  if (m_endTimestampHasBeenSet) {
    payload.WithObject("endTimestamp", m_endTimestamp.Jsonize());
  }

  if (m_errorCodeHasBeenSet) {
    payload.WithString("errorCode", DataSegmentErrorCodeMapper::GetNameForDataSegmentErrorCode(m_errorCode));
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
