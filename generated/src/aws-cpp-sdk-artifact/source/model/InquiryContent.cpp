/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/InquiryContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

InquiryContent::InquiryContent(JsonView jsonValue) { *this = jsonValue; }

InquiryContent& InquiryContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("query")) {
    m_query = jsonValue.GetString("query");
    m_queryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fileContent")) {
    m_fileContent = jsonValue.GetObject("fileContent");
    m_fileContentHasBeenSet = true;
  }
  return *this;
}

JsonValue InquiryContent::Jsonize() const {
  JsonValue payload;

  if (m_queryHasBeenSet) {
    payload.WithString("query", m_query);
  }

  if (m_fileContentHasBeenSet) {
    payload.WithObject("fileContent", m_fileContent.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
