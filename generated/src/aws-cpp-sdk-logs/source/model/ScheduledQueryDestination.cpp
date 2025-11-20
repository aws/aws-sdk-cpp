/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/ScheduledQueryDestination.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

ScheduledQueryDestination::ScheduledQueryDestination(JsonView jsonValue) { *this = jsonValue; }

ScheduledQueryDestination& ScheduledQueryDestination::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationType")) {
    m_destinationType =
        ScheduledQueryDestinationTypeMapper::GetScheduledQueryDestinationTypeForName(jsonValue.GetString("destinationType"));
    m_destinationTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationIdentifier")) {
    m_destinationIdentifier = jsonValue.GetString("destinationIdentifier");
    m_destinationIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = ActionStatusMapper::GetActionStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("processedIdentifier")) {
    m_processedIdentifier = jsonValue.GetString("processedIdentifier");
    m_processedIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("errorMessage")) {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue ScheduledQueryDestination::Jsonize() const {
  JsonValue payload;

  if (m_destinationTypeHasBeenSet) {
    payload.WithString("destinationType", ScheduledQueryDestinationTypeMapper::GetNameForScheduledQueryDestinationType(m_destinationType));
  }

  if (m_destinationIdentifierHasBeenSet) {
    payload.WithString("destinationIdentifier", m_destinationIdentifier);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", ActionStatusMapper::GetNameForActionStatus(m_status));
  }

  if (m_processedIdentifierHasBeenSet) {
    payload.WithString("processedIdentifier", m_processedIdentifier);
  }

  if (m_errorMessageHasBeenSet) {
    payload.WithString("errorMessage", m_errorMessage);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
