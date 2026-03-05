/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/ResultItem.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

ResultItem::ResultItem(JsonView jsonValue) { *this = jsonValue; }

ResultItem& ResultItem::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lineageNode")) {
    m_lineageNode = jsonValue.GetObject("lineageNode");
    m_lineageNodeHasBeenSet = true;
  }
  return *this;
}

JsonValue ResultItem::Jsonize() const {
  JsonValue payload;

  if (m_lineageNodeHasBeenSet) {
    payload.WithObject("lineageNode", m_lineageNode.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
