/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/apigatewayv2/model/UpdateApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateApiResult::UpdateApiResult() : 
    m_disableSchemaValidation(false),
    m_protocolType(ProtocolType::NOT_SET)
{
}

UpdateApiResult::UpdateApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_disableSchemaValidation(false),
    m_protocolType(ProtocolType::NOT_SET)
{
  *this = result;
}

UpdateApiResult& UpdateApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiEndpoint"))
  {
    m_apiEndpoint = jsonValue.GetString("apiEndpoint");

  }

  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

  }

  if(jsonValue.ValueExists("apiKeySelectionExpression"))
  {
    m_apiKeySelectionExpression = jsonValue.GetString("apiKeySelectionExpression");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetString("createdDate");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("disableSchemaValidation"))
  {
    m_disableSchemaValidation = jsonValue.GetBool("disableSchemaValidation");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("protocolType"))
  {
    m_protocolType = ProtocolTypeMapper::GetProtocolTypeForName(jsonValue.GetString("protocolType"));

  }

  if(jsonValue.ValueExists("routeSelectionExpression"))
  {
    m_routeSelectionExpression = jsonValue.GetString("routeSelectionExpression");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("warnings"))
  {
    Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
