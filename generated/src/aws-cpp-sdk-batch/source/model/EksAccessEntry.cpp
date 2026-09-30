/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/EksAccessEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Batch {
namespace Model {

EksAccessEntry::EksAccessEntry(JsonView jsonValue) { *this = jsonValue; }

EksAccessEntry& EksAccessEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("desiredState")) {
    m_desiredState = EksAccessEntryDesiredStateMapper::GetEksAccessEntryDesiredStateForName(jsonValue.GetString("desiredState"));
    m_desiredStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = EksAccessEntryStatusMapper::GetEksAccessEntryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue EksAccessEntry::Jsonize() const {
  JsonValue payload;

  if (m_desiredStateHasBeenSet) {
    payload.WithString("desiredState", EksAccessEntryDesiredStateMapper::GetNameForEksAccessEntryDesiredState(m_desiredState));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", EksAccessEntryStatusMapper::GetNameForEksAccessEntryStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Batch
}  // namespace Aws
