/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetDocumentationPartRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDocumentationPartRequest::GetDocumentationPartRequest() : 
    m_restApiIdHasBeenSet(false),
    m_documentationPartIdHasBeenSet(false)
{
}

Aws::String GetDocumentationPartRequest::SerializePayload() const
{
  return {};
}




