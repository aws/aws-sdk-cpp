/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetClientCertificateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetClientCertificateRequest::GetClientCertificateRequest() : 
    m_clientCertificateIdHasBeenSet(false)
{
}

Aws::String GetClientCertificateRequest::SerializePayload() const
{
  return {};
}




