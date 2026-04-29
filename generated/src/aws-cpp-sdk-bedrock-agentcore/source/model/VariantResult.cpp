/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/VariantResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

VariantResult::VariantResult(JsonView jsonValue) { *this = jsonValue; }

VariantResult& VariantResult::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("variantName")) {
    m_variantName = jsonValue.GetString("variantName");
    m_variantNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sampleSize")) {
    m_sampleSize = jsonValue.GetInteger("sampleSize");
    m_sampleSizeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mean")) {
    m_mean = jsonValue.GetDouble("mean");
    m_meanHasBeenSet = true;
  }
  if (jsonValue.ValueExists("absoluteChange")) {
    m_absoluteChange = jsonValue.GetDouble("absoluteChange");
    m_absoluteChangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("percentChange")) {
    m_percentChange = jsonValue.GetDouble("percentChange");
    m_percentChangeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("pValue")) {
    m_pValue = jsonValue.GetDouble("pValue");
    m_pValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidenceInterval")) {
    m_confidenceInterval = jsonValue.GetObject("confidenceInterval");
    m_confidenceIntervalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("isSignificant")) {
    m_isSignificant = jsonValue.GetBool("isSignificant");
    m_isSignificantHasBeenSet = true;
  }
  return *this;
}

JsonValue VariantResult::Jsonize() const {
  JsonValue payload;

  if (m_variantNameHasBeenSet) {
    payload.WithString("variantName", m_variantName);
  }

  if (m_sampleSizeHasBeenSet) {
    payload.WithInteger("sampleSize", m_sampleSize);
  }

  if (m_meanHasBeenSet) {
    payload.WithDouble("mean", m_mean);
  }

  if (m_absoluteChangeHasBeenSet) {
    payload.WithDouble("absoluteChange", m_absoluteChange);
  }

  if (m_percentChangeHasBeenSet) {
    payload.WithDouble("percentChange", m_percentChange);
  }

  if (m_pValueHasBeenSet) {
    payload.WithDouble("pValue", m_pValue);
  }

  if (m_confidenceIntervalHasBeenSet) {
    payload.WithObject("confidenceInterval", m_confidenceInterval.Jsonize());
  }

  if (m_isSignificantHasBeenSet) {
    payload.WithBool("isSignificant", m_isSignificant);
  }

  return payload;
}

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
