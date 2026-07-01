/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquiryFileContent.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

InquiryFileContent::InquiryFileContent(JsonView jsonValue) { *this = jsonValue; }

InquiryFileContent& InquiryFileContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fileSections")) {
    Aws::Utils::Array<JsonView> fileSectionsJsonList = jsonValue.GetArray("fileSections");
    for (unsigned fileSectionsIndex = 0; fileSectionsIndex < fileSectionsJsonList.GetLength(); ++fileSectionsIndex) {
      m_fileSections.push_back(fileSectionsJsonList[fileSectionsIndex].AsString());
    }
    m_fileSectionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("content")) {
    m_content = HashingUtils::Base64Decode(jsonValue.GetString("content"));
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue InquiryFileContent::Jsonize() const {
  JsonValue payload;

  if (m_fileSectionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> fileSectionsJsonList(m_fileSections.size());
    for (unsigned fileSectionsIndex = 0; fileSectionsIndex < fileSectionsJsonList.GetLength(); ++fileSectionsIndex) {
      fileSectionsJsonList[fileSectionsIndex].AsString(m_fileSections[fileSectionsIndex]);
    }
    payload.WithArray("fileSections", std::move(fileSectionsJsonList));
  }

  if (m_contentHasBeenSet) {
    payload.WithString("content", HashingUtils::Base64Encode(m_content));
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
