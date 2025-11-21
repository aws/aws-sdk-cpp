/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/invoicing/model/Contact.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Invoicing {
namespace Model {

Contact::Contact(JsonView jsonValue) { *this = jsonValue; }

Contact& Contact::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Email")) {
    m_email = jsonValue.GetString("Email");
    m_emailHasBeenSet = true;
  }
  return *this;
}

JsonValue Contact::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_emailHasBeenSet) {
    payload.WithString("Email", m_email);
  }

  return payload;
}

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
