/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetResourceResult::GetResourceResult()
{
}

GetResourceResult::GetResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetResourceResult& GetResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("parentId"))
  {
    m_parentId = jsonValue.GetString("parentId");

  }

  if(jsonValue.ValueExists("pathPart"))
  {
    m_pathPart = jsonValue.GetString("pathPart");

  }

  if(jsonValue.ValueExists("path"))
  {
    m_path = jsonValue.GetString("path");

  }

  if(jsonValue.ValueExists("resourceMethods"))
  {
    Aws::Map<Aws::String, JsonView> resourceMethodsJsonMap = jsonValue.GetObject("resourceMethods").GetAllObjects();
    for(auto& resourceMethodsItem : resourceMethodsJsonMap)
    {
      m_resourceMethods[resourceMethodsItem.first] = resourceMethodsItem.second.AsObject();
    }
  }



  return *this;
}
