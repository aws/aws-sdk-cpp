/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/S3DestinationUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

S3DestinationUpdateInput::S3DestinationUpdateInput(JsonView jsonValue) { *this = jsonValue; }

S3DestinationUpdateInput& S3DestinationUpdateInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataFreshnessInSeconds")) {
    m_dataFreshnessInSeconds = jsonValue.GetInteger("DataFreshnessInSeconds");
    m_dataFreshnessInSecondsHasBeenSet = true;
  }
  return *this;
}

JsonValue S3DestinationUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_dataFreshnessInSecondsHasBeenSet) {
    payload.WithInteger("DataFreshnessInSeconds", m_dataFreshnessInSeconds);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
