/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/AdditionalRecipient.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

AdditionalRecipient::AdditionalRecipient(JsonView jsonValue) { *this = jsonValue; }

AdditionalRecipient& AdditionalRecipient::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalRecipient::Jsonize() const {
  JsonValue payload;

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
