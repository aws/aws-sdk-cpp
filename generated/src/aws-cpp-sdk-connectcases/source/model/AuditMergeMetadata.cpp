/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/model/AuditMergeMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectCases {
namespace Model {

AuditMergeMetadata::AuditMergeMetadata(JsonView jsonValue) { *this = jsonValue; }

AuditMergeMetadata& AuditMergeMetadata::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mergeEventId")) {
    m_mergeEventId = jsonValue.GetString("mergeEventId");
    m_mergeEventIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("primaryCaseId")) {
    m_primaryCaseId = jsonValue.GetString("primaryCaseId");
    m_primaryCaseIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secondaryCaseId")) {
    m_secondaryCaseId = jsonValue.GetString("secondaryCaseId");
    m_secondaryCaseIdHasBeenSet = true;
  }
  return *this;
}

JsonValue AuditMergeMetadata::Jsonize() const {
  JsonValue payload;

  if (m_mergeEventIdHasBeenSet) {
    payload.WithString("mergeEventId", m_mergeEventId);
  }

  if (m_primaryCaseIdHasBeenSet) {
    payload.WithString("primaryCaseId", m_primaryCaseId);
  }

  if (m_secondaryCaseIdHasBeenSet) {
    payload.WithString("secondaryCaseId", m_secondaryCaseId);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
