/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/TagFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

TagFilter::TagFilter(JsonView jsonValue) { *this = jsonValue; }

TagFilter& TagFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("equalTo")) {
    m_equalTo = jsonValue.GetObject("equalTo");
    m_equalToHasBeenSet = true;
  }
  return *this;
}

JsonValue TagFilter::Jsonize() const {
  JsonValue payload;

  if (m_equalToHasBeenSet) {
    payload.WithObject("equalTo", m_equalTo.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
