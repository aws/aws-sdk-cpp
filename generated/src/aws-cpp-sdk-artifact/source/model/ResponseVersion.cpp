/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/artifact/model/ResponseVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Artifact {
namespace Model {

ResponseVersion::ResponseVersion(JsonView jsonValue) { *this = jsonValue; }

ResponseVersion& ResponseVersion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("responseText")) {
    m_responseText = jsonValue.GetString("responseText");
    m_responseTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestamp")) {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseVersion::Jsonize() const {
  JsonValue payload;

  if (m_responseTextHasBeenSet) {
    payload.WithString("responseText", m_responseText);
  }

  if (m_timestampHasBeenSet) {
    payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
