/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/billing/model/ApproverDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Billing {
namespace Model {

ApproverDetails::ApproverDetails(JsonView jsonValue) { *this = jsonValue; }

ApproverDetails& ApproverDetails::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("title")) {
    m_title = jsonValue.GetString("title");
    m_titleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("email")) {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue ApproverDetails::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_titleHasBeenSet) {
    payload.WithString("title", m_title);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("email", m_email);
  }

  return payload;
}

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
