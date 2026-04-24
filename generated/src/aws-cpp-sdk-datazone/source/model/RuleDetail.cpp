/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/RuleDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

RuleDetail::RuleDetail(JsonView jsonValue) { *this = jsonValue; }

RuleDetail& RuleDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("metadataFormEnforcementDetail")) {
    m_metadataFormEnforcementDetail = jsonValue.GetObject("metadataFormEnforcementDetail");
    m_metadataFormEnforcementDetailHasBeenSet = true;
  }
  if (jsonValue.ValueExists("glossaryTermEnforcementDetail")) {
    m_glossaryTermEnforcementDetail = jsonValue.GetObject("glossaryTermEnforcementDetail");
    m_glossaryTermEnforcementDetailHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleDetail::Jsonize() const {
  JsonValue payload;

  if (m_metadataFormEnforcementDetailHasBeenSet) {
    payload.WithObject("metadataFormEnforcementDetail", m_metadataFormEnforcementDetail.Jsonize());
  }

  if (m_glossaryTermEnforcementDetailHasBeenSet) {
    payload.WithObject("glossaryTermEnforcementDetail", m_glossaryTermEnforcementDetail.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
