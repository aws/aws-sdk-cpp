﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appmesh/model/CreateGatewayRouteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AppMesh::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateGatewayRouteResult::CreateGatewayRouteResult()
{
}

CreateGatewayRouteResult::CreateGatewayRouteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateGatewayRouteResult& CreateGatewayRouteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  m_gatewayRoute = jsonValue;


  return *this;
}
