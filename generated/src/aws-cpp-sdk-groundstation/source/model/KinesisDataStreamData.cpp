/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/KinesisDataStreamData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

KinesisDataStreamData::KinesisDataStreamData(JsonView jsonValue) { *this = jsonValue; }

KinesisDataStreamData& KinesisDataStreamData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kinesisRoleArn")) {
    m_kinesisRoleArn = jsonValue.GetString("kinesisRoleArn");
    m_kinesisRoleArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kinesisDataStreamArn")) {
    m_kinesisDataStreamArn = jsonValue.GetString("kinesisDataStreamArn");
    m_kinesisDataStreamArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KinesisDataStreamData::Jsonize() const {
  JsonValue payload;

  if (m_kinesisRoleArnHasBeenSet) {
    payload.WithString("kinesisRoleArn", m_kinesisRoleArn);
  }

  if (m_kinesisDataStreamArnHasBeenSet) {
    payload.WithString("kinesisDataStreamArn", m_kinesisDataStreamArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
