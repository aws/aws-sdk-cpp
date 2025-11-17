/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ExportImageTask.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppStream {
namespace Model {

ExportImageTask::ExportImageTask(JsonView jsonValue) { *this = jsonValue; }

ExportImageTask& ExportImageTask::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TaskId")) {
    m_taskId = jsonValue.GetString("TaskId");
    m_taskIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ImageArn")) {
    m_imageArn = jsonValue.GetString("ImageArn");
    m_imageArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmiName")) {
    m_amiName = jsonValue.GetString("AmiName");
    m_amiNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CreatedDate")) {
    m_createdDate = jsonValue.GetDouble("CreatedDate");
    m_createdDateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmiDescription")) {
    m_amiDescription = jsonValue.GetString("AmiDescription");
    m_amiDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = ExportImageTaskStateMapper::GetExportImageTaskStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AmiId")) {
    m_amiId = jsonValue.GetString("AmiId");
    m_amiIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TagSpecifications")) {
    Aws::Map<Aws::String, JsonView> tagSpecificationsJsonMap = jsonValue.GetObject("TagSpecifications").GetAllObjects();
    for (auto& tagSpecificationsItem : tagSpecificationsJsonMap) {
      m_tagSpecifications[tagSpecificationsItem.first] = tagSpecificationsItem.second.AsString();
    }
    m_tagSpecificationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorDetails")) {
    Aws::Utils::Array<JsonView> errorDetailsJsonList = jsonValue.GetArray("ErrorDetails");
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      m_errorDetails.push_back(errorDetailsJsonList[errorDetailsIndex].AsObject());
    }
    m_errorDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue ExportImageTask::Jsonize() const {
  JsonValue payload;

  if (m_taskIdHasBeenSet) {
    payload.WithString("TaskId", m_taskId);
  }

  if (m_imageArnHasBeenSet) {
    payload.WithString("ImageArn", m_imageArn);
  }

  if (m_amiNameHasBeenSet) {
    payload.WithString("AmiName", m_amiName);
  }

  if (m_createdDateHasBeenSet) {
    payload.WithDouble("CreatedDate", m_createdDate.SecondsWithMSPrecision());
  }

  if (m_amiDescriptionHasBeenSet) {
    payload.WithString("AmiDescription", m_amiDescription);
  }

  if (m_stateHasBeenSet) {
    payload.WithString("State", ExportImageTaskStateMapper::GetNameForExportImageTaskState(m_state));
  }

  if (m_amiIdHasBeenSet) {
    payload.WithString("AmiId", m_amiId);
  }

  if (m_tagSpecificationsHasBeenSet) {
    JsonValue tagSpecificationsJsonMap;
    for (auto& tagSpecificationsItem : m_tagSpecifications) {
      tagSpecificationsJsonMap.WithString(tagSpecificationsItem.first, tagSpecificationsItem.second);
    }
    payload.WithObject("TagSpecifications", std::move(tagSpecificationsJsonMap));
  }

  if (m_errorDetailsHasBeenSet) {
    Aws::Utils::Array<JsonValue> errorDetailsJsonList(m_errorDetails.size());
    for (unsigned errorDetailsIndex = 0; errorDetailsIndex < errorDetailsJsonList.GetLength(); ++errorDetailsIndex) {
      errorDetailsJsonList[errorDetailsIndex].AsObject(m_errorDetails[errorDetailsIndex].Jsonize());
    }
    payload.WithArray("ErrorDetails", std::move(errorDetailsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
