/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/RelatedItemUpdateContent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

RelatedItemUpdateContent::RelatedItemUpdateContent(JsonView jsonValue) { *this = jsonValue; }

RelatedItemUpdateContent& RelatedItemUpdateContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("comment")) {
    m_comment = jsonValue.GetObject("comment");
    m_commentHasBeenSet = true;
  }
  if (jsonValue.ValueExists("custom")) {
    m_custom = jsonValue.GetObject("custom");
    m_customHasBeenSet = true;
  }
  return *this;
}

JsonValue RelatedItemUpdateContent::Jsonize() const {
  JsonValue payload;

  if (m_commentHasBeenSet) {
    payload.WithObject("comment", m_comment.Jsonize());
  }

  if (m_customHasBeenSet) {
    payload.WithObject("custom", m_custom.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
