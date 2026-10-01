/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/SendNotifyCodeVerificationRequest.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String SendNotifyCodeVerificationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_channelHasBeenSet) {
    payload.WithString("channel", NotifyChannelMapper::GetNameForNotifyChannel(m_channel));
  }

  if (m_destinationIdentityHasBeenSet) {
    payload.WithString("destinationIdentity", m_destinationIdentity);
  }

  if (m_originationIdentityHasBeenSet) {
    payload.WithString("originationIdentity", m_originationIdentity);
  }

  if (m_notifyCodeConfigurationHasBeenSet) {
    payload.WithString("notifyCodeConfiguration", m_notifyCodeConfiguration);
  }

  if (m_overrideChannelParametersHasBeenSet) {
    payload.WithObject("overrideChannelParameters", m_overrideChannelParameters.Jsonize());
  }

  if (m_overrideCodeConfigurationParametersHasBeenSet) {
    payload.WithObject("overrideCodeConfigurationParameters", m_overrideCodeConfigurationParameters.Jsonize());
  }

  if (m_configurationSetNameHasBeenSet) {
    payload.WithString("configurationSetName", m_configurationSetName);
  }

  if (m_contextHasBeenSet) {
    JsonValue contextJsonMap;
    for (auto& contextItem : m_context) {
      contextJsonMap.WithString(contextItem.first, contextItem.second);
    }
    payload.WithObject("context", std::move(contextJsonMap));
  }

  if (m_referenceIdHasBeenSet) {
    payload.WithString("referenceId", m_referenceId);
  }

  return payload.View().WriteReadable();
}
