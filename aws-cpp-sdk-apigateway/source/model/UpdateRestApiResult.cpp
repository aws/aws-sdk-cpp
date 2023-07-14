﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/UpdateRestApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateRestApiResult::UpdateRestApiResult() : 
    m_minimumCompressionSize(0),
    m_apiKeySource(ApiKeySourceType::NOT_SET),
    m_disableExecuteApiEndpoint(false)
{
}

UpdateRestApiResult::UpdateRestApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_minimumCompressionSize(0),
    m_apiKeySource(ApiKeySourceType::NOT_SET),
    m_disableExecuteApiEndpoint(false)
{
  *this = result;
}

UpdateRestApiResult& UpdateRestApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("disableExecuteApiEndpoint"))
  {
    m_disableExecuteApiEndpoint = jsonValue.GetBool("disableExecuteApiEndpoint");

  }



  return *this;
}
