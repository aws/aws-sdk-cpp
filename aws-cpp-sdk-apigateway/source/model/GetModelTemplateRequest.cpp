/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetModelTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetModelTemplateRequest::GetModelTemplateRequest() : 
    m_restApiIdHasBeenSet(false),
    m_modelNameHasBeenSet(false)
{
}

Aws::String GetModelTemplateRequest::SerializePayload() const
{
  return {};
}




