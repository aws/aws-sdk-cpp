/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/OutputColumnThreshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

OutputColumnThreshold::OutputColumnThreshold(JsonView jsonValue) { *this = jsonValue; }

OutputColumnThreshold& OutputColumnThreshold::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputColumnName")) {
    m_outputColumnName = jsonValue.GetString("outputColumnName");
    m_outputColumnNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("minimumIdentityCount")) {
    m_minimumIdentityCount = jsonValue.GetInteger("minimumIdentityCount");
    m_minimumIdentityCountHasBeenSet = true;
  }
  return *this;
}

JsonValue OutputColumnThreshold::Jsonize() const {
  JsonValue payload;

  if (m_outputColumnNameHasBeenSet) {
    payload.WithString("outputColumnName", m_outputColumnName);
  }

  if (m_minimumIdentityCountHasBeenSet) {
    payload.WithInteger("minimumIdentityCount", m_minimumIdentityCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
