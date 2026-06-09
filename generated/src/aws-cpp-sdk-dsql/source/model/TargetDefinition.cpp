/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dsql/model/TargetDefinition.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DSQL {
namespace Model {

TargetDefinition::TargetDefinition(JsonView jsonValue) { *this = jsonValue; }

TargetDefinition& TargetDefinition::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("kinesis")) {
    m_kinesis = jsonValue.GetObject("kinesis");
    m_kinesisHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetDefinition::Jsonize() const {
  JsonValue payload;

  if (m_kinesisHasBeenSet) {
    payload.WithObject("kinesis", m_kinesis.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DSQL
}  // namespace Aws
