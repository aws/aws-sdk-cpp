/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/gamelift/model/PutScalingPolicyRequest.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String PutScalingPolicyRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_fleetIdHasBeenSet) {
    mapSize++;
  }
  if (m_scalingAdjustmentHasBeenSet) {
    mapSize++;
  }
  if (m_scalingAdjustmentTypeHasBeenSet) {
    mapSize++;
  }
  if (m_thresholdHasBeenSet) {
    mapSize++;
  }
  if (m_comparisonOperatorHasBeenSet) {
    mapSize++;
  }
  if (m_evaluationPeriodsHasBeenSet) {
    mapSize++;
  }
  if (m_metricNameHasBeenSet) {
    mapSize++;
  }
  if (m_policyTypeHasBeenSet) {
    mapSize++;
  }
  if (m_targetConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_fleetIdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FleetId"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_fleetId.c_str()));
  }

  if (m_scalingAdjustmentHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScalingAdjustment"));
    (m_scalingAdjustment >= 0) ? encoder.WriteUInt(m_scalingAdjustment) : encoder.WriteNegInt(m_scalingAdjustment);
  }

  if (m_scalingAdjustmentTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ScalingAdjustmentType"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ScalingAdjustmentTypeMapper::GetNameForScalingAdjustmentType(m_scalingAdjustmentType).c_str()));
  }

  if (m_thresholdHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Threshold"));
    encoder.WriteFloat(m_threshold);
  }

  if (m_comparisonOperatorHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ComparisonOperator"));
    encoder.WriteText(
        Aws::Crt::ByteCursorFromCString(ComparisonOperatorTypeMapper::GetNameForComparisonOperatorType(m_comparisonOperator).c_str()));
  }

  if (m_evaluationPeriodsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EvaluationPeriods"));
    (m_evaluationPeriods >= 0) ? encoder.WriteUInt(m_evaluationPeriods) : encoder.WriteNegInt(m_evaluationPeriods);
  }

  if (m_metricNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MetricName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(MetricNameMapper::GetNameForMetricName(m_metricName).c_str()));
  }

  if (m_policyTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PolicyType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(PolicyTypeMapper::GetNameForPolicyType(m_policyType).c_str()));
  }

  if (m_targetConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("TargetConfiguration"));
    m_targetConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection PutScalingPolicyRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
