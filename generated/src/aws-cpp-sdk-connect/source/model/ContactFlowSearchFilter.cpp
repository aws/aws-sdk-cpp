/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ContactFlowSearchFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

ContactFlowSearchFilter::ContactFlowSearchFilter(JsonView jsonValue) { *this = jsonValue; }

ContactFlowSearchFilter& ContactFlowSearchFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TagFilter")) {
    m_tagFilter = jsonValue.GetObject("TagFilter");
    m_tagFilterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FlowAttributeFilter")) {
    m_flowAttributeFilter = jsonValue.GetObject("FlowAttributeFilter");
    m_flowAttributeFilterHasBeenSet = true;
  }
  return *this;
}

JsonValue ContactFlowSearchFilter::Jsonize() const {
  JsonValue payload;

  if (m_tagFilterHasBeenSet) {
    payload.WithObject("TagFilter", m_tagFilter.Jsonize());
  }

  if (m_flowAttributeFilterHasBeenSet) {
    payload.WithObject("FlowAttributeFilter", m_flowAttributeFilter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
