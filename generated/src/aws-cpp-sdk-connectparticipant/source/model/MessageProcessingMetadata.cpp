/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/MessageProcessingMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectParticipant {
namespace Model {

MessageProcessingMetadata::MessageProcessingMetadata(JsonView jsonValue) { *this = jsonValue; }

MessageProcessingMetadata& MessageProcessingMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MessageProcessingStatus")) {
    m_messageProcessingStatus =
        MessageProcessingStatusMapper::GetMessageProcessingStatusForName(jsonValue.GetString("MessageProcessingStatus"));
    m_messageProcessingStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue MessageProcessingMetadata::Jsonize() const {
  JsonValue payload;

  if (m_messageProcessingStatusHasBeenSet) {
    payload.WithString("MessageProcessingStatus",
                       MessageProcessingStatusMapper::GetNameForMessageProcessingStatus(m_messageProcessingStatus));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectParticipant
}  // namespace Aws
