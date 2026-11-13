/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/SupportingData.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

SupportingData::SupportingData(JsonView jsonValue) { *this = jsonValue; }

SupportingData& SupportingData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fetch")) {
    m_fetch = jsonValue.GetObject("fetch");
    m_fetchHasBeenSet = true;
  }
  if (jsonValue.ValueExists("analysis")) {
    m_analysis = jsonValue.GetObject("analysis");
    m_analysisHasBeenSet = true;
  }
  if (jsonValue.ValueExists("observation")) {
    m_observation = jsonValue.GetObject("observation");
    m_observationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("metadata")) {
    m_metadata = jsonValue.GetObject("metadata");
    m_metadataHasBeenSet = true;
  }
  return *this;
}

JsonValue SupportingData::Jsonize() const {
  JsonValue payload;

  if (m_fetchHasBeenSet) {
    payload.WithObject("fetch", m_fetch.Jsonize());
  }

  if (m_analysisHasBeenSet) {
    payload.WithObject("analysis", m_analysis.Jsonize());
  }

  if (m_observationHasBeenSet) {
    payload.WithObject("observation", m_observation.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    payload.WithObject("metadata", m_metadata.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
