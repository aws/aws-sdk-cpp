/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/DefaultSessionParametersMulticast.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoTWireless {
namespace Model {

DefaultSessionParametersMulticast::DefaultSessionParametersMulticast(JsonView jsonValue) { *this = jsonValue; }

DefaultSessionParametersMulticast& DefaultSessionParametersMulticast::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DlDr")) {
    m_dlDr = jsonValue.GetInteger("DlDr");
    m_dlDrHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DlFreq")) {
    m_dlFreq = jsonValue.GetInteger("DlFreq");
    m_dlFreqHasBeenSet = true;
  }
  return *this;
}

JsonValue DefaultSessionParametersMulticast::Jsonize() const {
  JsonValue payload;

  if (m_dlDrHasBeenSet) {
    payload.WithInteger("DlDr", m_dlDr);
  }

  if (m_dlFreqHasBeenSet) {
    payload.WithInteger("DlFreq", m_dlFreq);
  }

  return payload;
}

}  // namespace Model
}  // namespace IoTWireless
}  // namespace Aws
