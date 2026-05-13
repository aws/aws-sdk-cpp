/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/KinesisTargetDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {

KinesisTargetDefinition::KinesisTargetDefinition(JsonView jsonValue) { *this = jsonValue; }

KinesisTargetDefinition& KinesisTargetDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("streamArn")) {
    m_streamArn = jsonValue.GetString("streamArn");
    m_streamArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("roleArn")) {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  return *this;
}

JsonValue KinesisTargetDefinition::Jsonize() const {
  JsonValue payload;

  if (m_streamArnHasBeenSet) {
    payload.WithString("streamArn", m_streamArn);
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
