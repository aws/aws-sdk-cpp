/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/DeleteAccessLogSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteAccessLogSettingsRequest::DeleteAccessLogSettingsRequest() : 
    m_apiIdHasBeenSet(false),
    m_stageNameHasBeenSet(false)
{
}

Aws::String DeleteAccessLogSettingsRequest::SerializePayload() const
{
  return {};
}




