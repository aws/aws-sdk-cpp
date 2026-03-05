/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/EmailAddressSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

EmailAddressSummary::EmailAddressSummary(JsonView jsonValue) { *this = jsonValue; }

EmailAddressSummary& EmailAddressSummary::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Id")) {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IsDefaultOutboundEmail")) {
    m_isDefaultOutboundEmail = jsonValue.GetBool("IsDefaultOutboundEmail");
    m_isDefaultOutboundEmailHasBeenSet = true;
  }
  return *this;
}

JsonValue EmailAddressSummary::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("Id", m_id);
  }

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  if (m_isDefaultOutboundEmailHasBeenSet) {
    payload.WithBool("IsDefaultOutboundEmail", m_isDefaultOutboundEmail);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
