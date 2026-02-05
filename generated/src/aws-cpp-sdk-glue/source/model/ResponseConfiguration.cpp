/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/ResponseConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

ResponseConfiguration::ResponseConfiguration(JsonView jsonValue) { *this = jsonValue; }

ResponseConfiguration& ResponseConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResultPath")) {
    m_resultPath = jsonValue.GetString("ResultPath");
    m_resultPathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ErrorPath")) {
    m_errorPath = jsonValue.GetString("ErrorPath");
    m_errorPathHasBeenSet = true;
  }
  return *this;
}

JsonValue ResponseConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_resultPathHasBeenSet) {
    payload.WithString("ResultPath", m_resultPath);
  }

  if (m_errorPathHasBeenSet) {
    payload.WithString("ErrorPath", m_errorPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
