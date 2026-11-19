/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/VoicemailInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

VoicemailInfo::VoicemailInfo(JsonView jsonValue) { *this = jsonValue; }

VoicemailInfo& VoicemailInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NumberOfVoicemails")) {
    m_numberOfVoicemails = jsonValue.GetInteger("NumberOfVoicemails");
    m_numberOfVoicemailsHasBeenSet = true;
  }
  return *this;
}

JsonValue VoicemailInfo::Jsonize() const {
  JsonValue payload;

  if (m_numberOfVoicemailsHasBeenSet) {
    payload.WithInteger("NumberOfVoicemails", m_numberOfVoicemails);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
