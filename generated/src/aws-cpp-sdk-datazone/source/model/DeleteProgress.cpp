/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/DeleteProgress.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

DeleteProgress::DeleteProgress(JsonView jsonValue) { *this = jsonValue; }

DeleteProgress& DeleteProgress::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("successfullyDeletedProjectCount")) {
    m_successfullyDeletedProjectCount = jsonValue.GetInteger("successfullyDeletedProjectCount");
    m_successfullyDeletedProjectCountHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteProgress::Jsonize() const {
  JsonValue payload;

  if (m_successfullyDeletedProjectCountHasBeenSet) {
    payload.WithInteger("successfullyDeletedProjectCount", m_successfullyDeletedProjectCount);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
