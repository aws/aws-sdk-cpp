/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableInheritedConstraints.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableInheritedConstraints::IntermediateTableInheritedConstraints(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableInheritedConstraints& IntermediateTableInheritedConstraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("additionalAnalyses")) {
    m_additionalAnalyses = jsonValue.GetObject("additionalAnalyses");
    m_additionalAnalysesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedAdditionalAnalyses")) {
    m_allowedAdditionalAnalyses = jsonValue.GetObject("allowedAdditionalAnalyses");
    m_allowedAdditionalAnalysesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedResultReceivers")) {
    m_allowedResultReceivers = jsonValue.GetObject("allowedResultReceivers");
    m_allowedResultReceiversHasBeenSet = true;
  }
  if (jsonValue.ValueExists("disallowedOutputColumns")) {
    m_disallowedOutputColumns = jsonValue.GetObject("disallowedOutputColumns");
    m_disallowedOutputColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableInheritedConstraints::Jsonize() const {
  JsonValue payload;

  if (m_additionalAnalysesHasBeenSet) {
    payload.WithObject("additionalAnalyses", m_additionalAnalyses.Jsonize());
  }

  if (m_allowedAdditionalAnalysesHasBeenSet) {
    payload.WithObject("allowedAdditionalAnalyses", m_allowedAdditionalAnalyses.Jsonize());
  }

  if (m_allowedResultReceiversHasBeenSet) {
    payload.WithObject("allowedResultReceivers", m_allowedResultReceivers.Jsonize());
  }

  if (m_disallowedOutputColumnsHasBeenSet) {
    payload.WithObject("disallowedOutputColumns", m_disallowedOutputColumns.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
