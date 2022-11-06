/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateApiResult::CreateApiResult() : 
    m_apiGatewayManaged(false),
    m_disableSchemaValidation(false),
    m_disableExecuteApiEndpoint(false),
    m_protocolType(ProtocolType::NOT_SET)
{
}

CreateApiResult::CreateApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_apiGatewayManaged(false),
    m_disableSchemaValidation(false),
    m_disableExecuteApiEndpoint(false),
    m_protocolType(ProtocolType::NOT_SET)
{
  *this = result;
}

CreateApiResult& CreateApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiEndpoint"))
  {
    m_apiEndpoint = jsonValue.GetString("apiEndpoint");

  }

  if(jsonValue.ValueExists("apiGatewayManaged"))
  {
    m_apiGatewayManaged = jsonValue.GetBool("apiGatewayManaged");

  }

  if(jsonValue.ValueExists("apiId"))
  {
    m_apiId = jsonValue.GetString("apiId");

  }

  if(jsonValue.ValueExists("apiKeySelectionExpression"))
  {
    m_apiKeySelectionExpression = jsonValue.GetString("apiKeySelectionExpression");

  }

  if(jsonValue.ValueExists("corsConfiguration"))
  {
    m_corsConfiguration = jsonValue.GetObject("corsConfiguration");

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

  if(jsonValue.ValueExists("disableExecuteApiEndpoint"))
  {
    m_disableExecuteApiEndpoint = jsonValue.GetBool("disableExecuteApiEndpoint");

  }

  if(jsonValue.ValueExists("importInfo"))
  {
    Aws::Utils::Array<JsonView> importInfoJsonList = jsonValue.GetArray("importInfo");
    for(unsigned importInfoIndex = 0; importInfoIndex < importInfoJsonList.GetLength(); ++importInfoIndex)
    {
      m_importInfo.push_back(importInfoJsonList[importInfoIndex].AsString());
    }
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

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
  }



  return *this;
}
