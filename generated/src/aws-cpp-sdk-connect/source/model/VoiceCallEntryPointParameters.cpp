/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoiceCallEntryPointParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

VoiceCallEntryPointParameters::VoiceCallEntryPointParameters(JsonView jsonValue) { *this = jsonValue; }

VoiceCallEntryPointParameters& VoiceCallEntryPointParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("SourcePhoneNumber")) {
    m_sourcePhoneNumber = jsonValue.GetString("SourcePhoneNumber");
    m_sourcePhoneNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DestinationPhoneNumber")) {
    m_destinationPhoneNumber = jsonValue.GetString("DestinationPhoneNumber");
    m_destinationPhoneNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowId")) {
    m_flowId = jsonValue.GetString("FlowId");
    m_flowIdHasBeenSet = true;
  }
  return *this;
}

JsonValue VoiceCallEntryPointParameters::Jsonize() const {
  JsonValue payload;

  if (m_sourcePhoneNumberHasBeenSet) {
    payload.WithString("SourcePhoneNumber", m_sourcePhoneNumber);
  }

  if (m_destinationPhoneNumberHasBeenSet) {
    payload.WithString("DestinationPhoneNumber", m_destinationPhoneNumber);
  }

  if (m_flowIdHasBeenSet) {
    payload.WithString("FlowId", m_flowId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
