/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotsitewise/model/ComputeNodeExecutionStateDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTSiteWise {
namespace Model {

ComputeNodeExecutionStateDetails::ComputeNodeExecutionStateDetails(JsonView jsonValue) { *this = jsonValue; }

ComputeNodeExecutionStateDetails& ComputeNodeExecutionStateDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("code")) {
    m_code = ComputeNodeErrorCodeMapper::GetComputeNodeErrorCodeForName(jsonValue.GetString("code"));
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("message")) {
    m_message = jsonValue.GetString("message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("details")) {
    Aws::Utils::Array<JsonView> detailsJsonList = jsonValue.GetArray("details");
    for (unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex) {
      m_details.push_back(detailsJsonList[detailsIndex].AsObject());
    }
    m_detailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeNodeExecutionStateDetails::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("code", ComputeNodeErrorCodeMapper::GetNameForComputeNodeErrorCode(m_code));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("message", m_message);
  }

  if (m_detailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> detailsJsonList(m_details.size());
    for (unsigned detailsIndex = 0; detailsIndex < detailsJsonList.GetLength(); ++detailsIndex) {
      detailsJsonList[detailsIndex].AsObject(m_details[detailsIndex].Jsonize());
    }
    payload.WithArray("details", std::move(detailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
