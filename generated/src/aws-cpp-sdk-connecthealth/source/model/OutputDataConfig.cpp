/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/OutputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

OutputDataConfig::OutputDataConfig(JsonView jsonValue) { *this = jsonValue; }

OutputDataConfig& OutputDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("s3OutputPath")) {
    m_s3OutputPath = jsonValue.GetString("s3OutputPath");
    m_s3OutputPathHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_s3OutputPathHasBeenSet) {
    payload.WithString("s3OutputPath", m_s3OutputPath);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
