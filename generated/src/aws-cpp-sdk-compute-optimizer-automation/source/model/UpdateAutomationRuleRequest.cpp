/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/UpdateAutomationRuleRequest.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

using namespace Aws::ComputeOptimizerAutomation::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateAutomationRuleRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_ruleArnHasBeenSet) {
    mapSize++;
  }
  if (m_ruleRevisionHasBeenSet) {
    mapSize++;
  }
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_ruleTypeHasBeenSet) {
    mapSize++;
  }
  if (m_organizationConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_priorityHasBeenSet) {
    mapSize++;
  }
  if (m_recommendedActionTypesHasBeenSet) {
    mapSize++;
  }
  if (m_criteriaHasBeenSet) {
    mapSize++;
  }
  if (m_scheduleHasBeenSet) {
    mapSize++;
  }
  if (m_statusHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_ruleArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ruleArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_ruleArn.c_str()));
  }

  if (m_ruleRevisionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ruleRevision"));
    (m_ruleRevision >= 0) ? encoder.WriteUInt(m_ruleRevision) : encoder.WriteNegInt(m_ruleRevision);
  }

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_ruleTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ruleType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleTypeMapper::GetNameForRuleType(m_ruleType).c_str()));
  }

  if (m_organizationConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("organizationConfiguration"));
    m_organizationConfiguration.CborEncode(encoder);
  }

  if (m_priorityHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("priority"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_priority.c_str()));
  }

  if (m_recommendedActionTypesHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("recommendedActionTypes"));
    encoder.WriteArrayStart(m_recommendedActionTypes.size());
    for (const auto& item_0 : m_recommendedActionTypes) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(RecommendedActionTypeMapper::GetNameForRecommendedActionType(item_0).c_str()));
    }
  }

  if (m_criteriaHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("criteria"));
    m_criteria.CborEncode(encoder);
  }

  if (m_scheduleHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("schedule"));
    m_schedule.CborEncode(encoder);
  }

  if (m_statusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("status"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(RuleStatusMapper::GetNameForRuleStatus(m_status).c_str()));
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("clientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateAutomationRuleRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
