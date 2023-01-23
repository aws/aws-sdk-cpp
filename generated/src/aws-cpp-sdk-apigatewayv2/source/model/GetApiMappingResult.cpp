/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetApiMappingResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetApiMappingResult::GetApiMappingResult()
{
}

GetApiMappingResult::GetApiMappingResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetApiMappingResult& GetApiMappingResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

  }

  if(jsonValue.ValueExists("apiMappingId"))
  {
    m_apiMappingId = jsonValue.GetString("apiMappingId");

  }

  if(jsonValue.ValueExists("apiMappingKey"))
  {
    m_apiMappingKey = jsonValue.GetString("apiMappingKey");

  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

  }



  return *this;
}
