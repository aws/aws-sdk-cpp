/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-web/model/CreateWebFunctionRevisionRequest.h>

#include <utility>

using namespace Aws::LambdaWeb::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateWebFunctionRevisionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("kmsKeyArn", m_kmsKeyArn);
  }

  if (m_buildConfigHasBeenSet) {
    payload.WithObject("buildConfig", m_buildConfig.Jsonize());
  }

  if (m_serviceConfigHasBeenSet) {
    payload.WithObject("serviceConfig", m_serviceConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
