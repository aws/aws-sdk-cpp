/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/eventbridgev2/model/CreateSubscriberRequest.h>

#include <utility>

using namespace Aws::EventBridgeV2::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String CreateSubscriberRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_nameHasBeenSet) {
    mapSize++;
  }
  if (m_eventBusArnHasBeenSet) {
    mapSize++;
  }
  if (m_invokeConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_filterConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_typeHasBeenSet) {
    mapSize++;
  }
  if (m_startingPositionHasBeenSet) {
    mapSize++;
  }
  if (m_pointInTimeConfigurationHasBeenSet) {
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
  if (m_stateHasBeenSet) {
    mapSize++;
  }
  if (m_tagsHasBeenSet) {
    mapSize++;
  }
  if (m_clientTokenHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_nameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Name"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_name.c_str()));
  }

  if (m_eventBusArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EventBusArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_eventBusArn.c_str()));
  }

  if (m_invokeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("InvokeConfiguration"));
    m_invokeConfiguration.CborEncode(encoder);
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_filterConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("FilterConfiguration"));
    m_filterConfiguration.CborEncode(encoder);
  }

  if (m_typeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Type"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(OrderingTypeMapper::GetNameForOrderingType(m_type).c_str()));
  }

  if (m_startingPositionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("StartingPosition"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(StartingPositionMapper::GetNameForStartingPosition(m_startingPosition).c_str()));
  }

  if (m_pointInTimeConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("PointInTimeConfiguration"));
    m_pointInTimeConfiguration.CborEncode(encoder);
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

  if (m_stateHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("State"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(SubscriberStateMapper::GetNameForSubscriberState(m_state).c_str()));
  }

  if (m_tagsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Tags"));
    encoder.WriteMapStart(m_tags.size());
    for (const auto& item_0 : m_tags) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.first.c_str()));
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.second.c_str()));
    }
  }

  if (m_clientTokenHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClientToken"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clientToken.c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection CreateSubscriberRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}

CreateSubscriberRequest::EndpointParameters CreateSubscriberRequest::GetEndpointContextParams() const {
  EndpointParameters parameters;
  // Operation context parameters
  if (EventBusArnHasBeenSet()) {
    parameters.emplace_back(Aws::String("EventBusArn"), this->GetEventBusArn(),
                            Aws::Endpoint::EndpointParameter::ParameterOrigin::OPERATION_CONTEXT);
  }
  return parameters;
}
