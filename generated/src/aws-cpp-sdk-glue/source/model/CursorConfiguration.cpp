/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/CursorConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

CursorConfiguration::CursorConfiguration(JsonView jsonValue) { *this = jsonValue; }

CursorConfiguration& CursorConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("NextPage")) {
    m_nextPage = jsonValue.GetObject("NextPage");
    m_nextPageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LimitParameter")) {
    m_limitParameter = jsonValue.GetObject("LimitParameter");
    m_limitParameterHasBeenSet = true;
  }
  return *this;
}

JsonValue CursorConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_nextPageHasBeenSet) {
    payload.WithObject("NextPage", m_nextPage.Jsonize());
  }

  if (m_limitParameterHasBeenSet) {
    payload.WithObject("LimitParameter", m_limitParameter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
