/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-microvms/model/CreateMicrovmShellAuthTokenRequest.h>

#include <utility>

using namespace Aws::LambdaMicrovms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateMicrovmShellAuthTokenRequest::SerializePayload() const {
  JsonValue payload;

  if (m_expirationInMinutesHasBeenSet) {
    payload.WithInteger("expirationInMinutes", m_expirationInMinutes);
  }

  return payload.View().WriteReadable();
}
