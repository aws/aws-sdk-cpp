/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/FeedAssociation.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

FeedAssociation::FeedAssociation(JsonView jsonValue) { *this = jsonValue; }

FeedAssociation& FeedAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("associatedResourceName")) {
    m_associatedResourceName = jsonValue.GetString("associatedResourceName");
    m_associatedResourceNameHasBeenSet = true;
  }
  return *this;
}

JsonValue FeedAssociation::Jsonize() const {
  JsonValue payload;

  if (m_associatedResourceNameHasBeenSet) {
    payload.WithString("associatedResourceName", m_associatedResourceName);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
