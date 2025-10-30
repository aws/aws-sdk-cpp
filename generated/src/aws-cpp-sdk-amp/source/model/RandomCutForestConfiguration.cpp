/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/RandomCutForestConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PrometheusService {
namespace Model {

RandomCutForestConfiguration::RandomCutForestConfiguration(JsonView jsonValue) { *this = jsonValue; }

RandomCutForestConfiguration& RandomCutForestConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("query")) {
    m_query = jsonValue.GetString("query");
    m_queryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("shingleSize")) {
    m_shingleSize = jsonValue.GetInteger("shingleSize");
    m_shingleSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSize")) {
    m_sampleSize = jsonValue.GetInteger("sampleSize");
    m_sampleSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ignoreNearExpectedFromAbove")) {
    m_ignoreNearExpectedFromAbove = jsonValue.GetObject("ignoreNearExpectedFromAbove");
    m_ignoreNearExpectedFromAboveHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ignoreNearExpectedFromBelow")) {
    m_ignoreNearExpectedFromBelow = jsonValue.GetObject("ignoreNearExpectedFromBelow");
    m_ignoreNearExpectedFromBelowHasBeenSet = true;
  }
  return *this;
}

JsonValue RandomCutForestConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_queryHasBeenSet) {
    payload.WithString("query", m_query);
  }

  if (m_shingleSizeHasBeenSet) {
    payload.WithInteger("shingleSize", m_shingleSize);
  }

  if (m_sampleSizeHasBeenSet) {
    payload.WithInteger("sampleSize", m_sampleSize);
  }

  if (m_ignoreNearExpectedFromAboveHasBeenSet) {
    payload.WithObject("ignoreNearExpectedFromAbove", m_ignoreNearExpectedFromAbove.Jsonize());
  }

  if (m_ignoreNearExpectedFromBelowHasBeenSet) {
    payload.WithObject("ignoreNearExpectedFromBelow", m_ignoreNearExpectedFromBelow.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace PrometheusService
}  // namespace Aws
