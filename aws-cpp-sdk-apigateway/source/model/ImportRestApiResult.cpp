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

#include <aws/apigateway/model/ImportRestApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ImportRestApiResult::ImportRestApiResult() : 
    m_minimumCompressionSize(0),
    m_apiKeySource(ApiKeySourceType::NOT_SET)
{
}

ImportRestApiResult::ImportRestApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_minimumCompressionSize(0),
    m_apiKeySource(ApiKeySourceType::NOT_SET)
{
  *this = result;
}

ImportRestApiResult& ImportRestApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

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

  if(jsonValue.ValueExists("binaryMediaTypes"))
  {
    Array<JsonView> binaryMediaTypesJsonList = jsonValue.GetArray("binaryMediaTypes");
    for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
    {
      m_binaryMediaTypes.push_back(binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("minimumCompressionSize"))
  {
    m_minimumCompressionSize = jsonValue.GetInteger("minimumCompressionSize");

  }

  if(jsonValue.ValueExists("apiKeySource"))
  {
    m_apiKeySource = ApiKeySourceTypeMapper::GetApiKeySourceTypeForName(jsonValue.GetString("apiKeySource"));

  }

  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");

  }

  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");

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
