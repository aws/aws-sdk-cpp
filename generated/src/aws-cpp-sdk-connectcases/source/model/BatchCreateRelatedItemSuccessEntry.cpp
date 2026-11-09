/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/BatchCreateRelatedItemSuccessEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

BatchCreateRelatedItemSuccessEntry::BatchCreateRelatedItemSuccessEntry(JsonView jsonValue) { *this = jsonValue; }

BatchCreateRelatedItemSuccessEntry& BatchCreateRelatedItemSuccessEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("caseIdentifier")) {
    m_caseIdentifier = jsonValue.GetObject("caseIdentifier");
    m_caseIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relatedItemId")) {
    m_relatedItemId = jsonValue.GetString("relatedItemId");
    m_relatedItemIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("relatedItemArn")) {
    m_relatedItemArn = jsonValue.GetString("relatedItemArn");
    m_relatedItemArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchCreateRelatedItemSuccessEntry::Jsonize() const {
  JsonValue payload;

  if (m_caseIdentifierHasBeenSet) {
    payload.WithObject("caseIdentifier", m_caseIdentifier.Jsonize());
  }

  if (m_relatedItemIdHasBeenSet) {
    payload.WithString("relatedItemId", m_relatedItemId);
  }

  if (m_relatedItemArnHasBeenSet) {
    payload.WithString("relatedItemArn", m_relatedItemArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
