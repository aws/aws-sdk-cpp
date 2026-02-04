/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TextAttributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

TextAttributes::TextAttributes(JsonView jsonValue) { *this = jsonValue; }

TextAttributes& TextAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("isMultiline")) {
    m_isMultiline = jsonValue.GetBool("isMultiline");
    m_isMultilineHasBeenSet = true;
  }
  return *this;
}

JsonValue TextAttributes::Jsonize() const {
  JsonValue payload;

  if (m_isMultilineHasBeenSet) {
    payload.WithBool("isMultiline", m_isMultiline);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
