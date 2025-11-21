/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ParseToOCSF.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ParseToOCSF::ParseToOCSF(JsonView jsonValue) { *this = jsonValue; }

ParseToOCSF& ParseToOCSF::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("source")) {
    m_source = jsonValue.GetString("source");
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eventSource")) {
    m_eventSource = EventSourceMapper::GetEventSourceForName(jsonValue.GetString("eventSource"));
    m_eventSourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ocsfVersion")) {
    m_ocsfVersion = OCSFVersionMapper::GetOCSFVersionForName(jsonValue.GetString("ocsfVersion"));
    m_ocsfVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mappingVersion")) {
    m_mappingVersion = jsonValue.GetString("mappingVersion");
    m_mappingVersionHasBeenSet = true;
  }
  return *this;
}

JsonValue ParseToOCSF::Jsonize() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithString("source", m_source);
  }

  if (m_eventSourceHasBeenSet) {
    payload.WithString("eventSource", EventSourceMapper::GetNameForEventSource(m_eventSource));
  }

  if (m_ocsfVersionHasBeenSet) {
    payload.WithString("ocsfVersion", OCSFVersionMapper::GetNameForOCSFVersion(m_ocsfVersion));
  }

  if (m_mappingVersionHasBeenSet) {
    payload.WithString("mappingVersion", m_mappingVersion);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
