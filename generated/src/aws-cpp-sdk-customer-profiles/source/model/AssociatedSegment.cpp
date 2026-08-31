/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/customer-profiles/model/AssociatedSegment.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CustomerProfiles {
namespace Model {

AssociatedSegment::AssociatedSegment(JsonView jsonValue) { *this = jsonValue; }

AssociatedSegment& AssociatedSegment::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SegmentName")) {
    m_segmentName = jsonValue.GetString("SegmentName");
    m_segmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = EventSubscriptionSegmentStatusMapper::GetEventSubscriptionSegmentStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue AssociatedSegment::Jsonize() const {
  JsonValue payload;

  if (m_segmentNameHasBeenSet) {
    payload.WithString("SegmentName", m_segmentName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("Status", EventSubscriptionSegmentStatusMapper::GetNameForEventSubscriptionSegmentStatus(m_status));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  return payload;
}

}  // namespace Model
}  // namespace CustomerProfiles
}  // namespace Aws
