﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/apigateway/model/UpdateResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateResourceResult::UpdateResourceResult()
{
}

UpdateResourceResult::UpdateResourceResult(const AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateResourceResult& UpdateResourceResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
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
    Aws::Map<Aws::String, JsonValue> resourceMethodsJsonMap = jsonValue.GetObject("resourceMethods").GetAllObjects();
    for(auto& resourceMethodsItem : resourceMethodsJsonMap)
    {
      m_resourceMethods[resourceMethodsItem.first] = resourceMethodsItem.second.AsObject();
    }
  }



  return *this;
}
