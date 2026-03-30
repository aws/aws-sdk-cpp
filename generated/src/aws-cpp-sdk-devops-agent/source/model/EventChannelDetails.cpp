/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/EventChannelDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DevOpsAgent {
namespace Model {

EventChannelDetails::EventChannelDetails(JsonView jsonValue) { *this = jsonValue; }

EventChannelDetails& EventChannelDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("type")) {
    m_type = EventChannelTypeMapper::GetEventChannelTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue EventChannelDetails::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("type", EventChannelTypeMapper::GetNameForEventChannelType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
