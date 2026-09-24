/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/UpdateSubscriberRequest.h>

#include <utility>

using namespace Aws::EventBridgeV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateSubscriberRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_subscriberArnHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_resumePositionHasBeenSet) {
    mapSize++;
  }
  if (m_invokeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_filterConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_batchConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_transformerHasBeenSet) {
    mapSize++;
  }
  if (m_retryPolicyHasBeenSet) {
    mapSize++;
  }
  if (m_onFailureConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_logConfigurationHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_subscriberArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SubscriberArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_subscriberArn.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SubscriberStateMapper::GetNameForSubscriberState(m_state).c_str()));
  }

  if (m_resumePositionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ResumePosition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(ResumePositionMapper::GetNameForResumePosition(m_resumePosition).c_str()));
  }

  if (m_invokeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InvokeConfiguration"));
    m_invokeConfiguration.CborEncode(encoder);
  }

  if (m_filterConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FilterConfiguration"));
    m_filterConfiguration.CborEncode(encoder);
  }

  if (m_batchConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("BatchConfiguration"));
    m_batchConfiguration.CborEncode(encoder);
  }

  if (m_transformerHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Transformer"));
    m_transformer.CborEncode(encoder);
  }

  if (m_retryPolicyHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("RetryPolicy"));
    m_retryPolicy.CborEncode(encoder);
  }

  if (m_onFailureConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("OnFailureConfiguration"));
    m_onFailureConfiguration.CborEncode(encoder);
  }

  if (m_logConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("LogConfiguration"));
    m_logConfiguration.CborEncode(encoder);
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateSubscriberRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
