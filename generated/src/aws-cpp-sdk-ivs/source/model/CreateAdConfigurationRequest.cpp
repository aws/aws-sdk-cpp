/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ivs/model/CreateAdConfigurationRequest.h>

#include <utility>

using namespace Aws::IVS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAdConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_mediaTailorPlaybackConfigurationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> mediaTailorPlaybackConfigurationsJsonList(m_mediaTailorPlaybackConfigurations.size());
    for (unsigned mediaTailorPlaybackConfigurationsIndex = 0;
         mediaTailorPlaybackConfigurationsIndex < mediaTailorPlaybackConfigurationsJsonList.GetLength();
         ++mediaTailorPlaybackConfigurationsIndex) {
      mediaTailorPlaybackConfigurationsJsonList[mediaTailorPlaybackConfigurationsIndex].AsObject(
          m_mediaTailorPlaybackConfigurations[mediaTailorPlaybackConfigurationsIndex].Jsonize());
    }
    payload.WithArray("mediaTailorPlaybackConfigurations", std::move(mediaTailorPlaybackConfigurationsJsonList));
  }

  return payload.View().WriteReadable();
}
