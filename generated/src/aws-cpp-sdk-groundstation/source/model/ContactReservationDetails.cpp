/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/ContactReservationDetails.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

ContactReservationDetails::ContactReservationDetails(JsonView jsonValue) { *this = jsonValue; }

ContactReservationDetails& ContactReservationDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("contactId")) {
    m_contactId = jsonValue.GetString("contactId");
    m_contactIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactReservationDetails::Jsonize() const {
  JsonValue payload;

  if (m_contactIdHasBeenSet) {
    payload.WithString("contactId", m_contactId);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
