/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchCreateRelatedItemIdentifier.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BatchCreateRelatedItemIdentifier::BatchCreateRelatedItemIdentifier(JsonView jsonValue) { *this = jsonValue; }

BatchCreateRelatedItemIdentifier& BatchCreateRelatedItemIdentifier::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseIdentifier")) {
    m_caseIdentifier = jsonValue.GetObject("caseIdentifier");
    m_caseIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateRelatedItemIdentifier::Jsonize() const {
  JsonValue payload;

  if (m_caseIdentifierHasBeenSet) {
    payload.WithObject("caseIdentifier", m_caseIdentifier.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
