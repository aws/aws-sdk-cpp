/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DisassociateQueueEmailAddressesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisassociateQueueEmailAddressesRequest::SerializePayload() const {
  JsonValue payload;

  if (m_emailAddressesIdHasBeenSet) {
    Aws::Utils::Array<JsonValue> emailAddressesIdJsonList(m_emailAddressesId.size());
    for (unsigned emailAddressesIdIndex = 0; emailAddressesIdIndex < emailAddressesIdJsonList.GetLength(); ++emailAddressesIdIndex) {
      emailAddressesIdJsonList[emailAddressesIdIndex].AsString(m_emailAddressesId[emailAddressesIdIndex]);
    }
    payload.WithArray("EmailAddressesId", std::move(emailAddressesIdJsonList));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
