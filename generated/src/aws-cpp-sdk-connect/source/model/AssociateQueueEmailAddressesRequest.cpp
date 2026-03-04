/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/AssociateQueueEmailAddressesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateQueueEmailAddressesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_emailAddressesConfigHasBeenSet) {
    Aws::Utils::Array<JsonValue> emailAddressesConfigJsonList(m_emailAddressesConfig.size());
    for (unsigned emailAddressesConfigIndex = 0; emailAddressesConfigIndex < emailAddressesConfigJsonList.GetLength();
         ++emailAddressesConfigIndex) {
      emailAddressesConfigJsonList[emailAddressesConfigIndex].AsObject(m_emailAddressesConfig[emailAddressesConfigIndex].Jsonize());
    }
    payload.WithArray("EmailAddressesConfig", std::move(emailAddressesConfigJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
