/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested1.h>
#include <aws/rest-json-protocol/model/RecursiveShapesInputOutputNested2.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

RecursiveShapesInputOutputNested2::RecursiveShapesInputOutputNested2(JsonView jsonValue) { *this = jsonValue; }

RecursiveShapesInputOutputNested2& RecursiveShapesInputOutputNested2::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("bar")) {
    m_bar = jsonValue.GetString("bar");
    m_barHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recursiveMember")) {
    m_recursiveMember =
        Aws::MakeShared<RecursiveShapesInputOutputNested1>("RecursiveShapesInputOutputNested2", jsonValue.GetObject("recursiveMember"));
    m_recursiveMemberHasBeenSet = true;
  }
  return *this;
}

JsonValue RecursiveShapesInputOutputNested2::Jsonize() const {
  JsonValue payload;

  if (m_barHasBeenSet) {
    payload.WithString("bar", m_bar);
  }

  if (m_recursiveMemberHasBeenSet) {
    payload.WithObject("recursiveMember", m_recursiveMember->Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
