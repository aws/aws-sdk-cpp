/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/CustomFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

CustomFilter::CustomFilter(JsonView jsonValue) { *this = jsonValue; }

CustomFilter& CustomFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fields")) {
    m_fields = jsonValue.GetObject("fields");
    m_fieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomFilter::Jsonize() const {
  JsonValue payload;

  if (m_fieldsHasBeenSet) {
    payload.WithObject("fields", m_fields.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
