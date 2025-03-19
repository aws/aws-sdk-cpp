/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/PutRestApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutRestApiResult::PutRestApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

PutRestApiResult& PutRestApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");
    m_createdDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warnings"))
  {
    Aws::Utils::Array<JsonView> warningsJsonList = jsonValue.GetArray("warnings");
    for(unsigned warningsIndex = 0; warningsIndex < warningsJsonList.GetLength(); ++warningsIndex)
    {
      m_warnings.push_back(warningsJsonList[warningsIndex].AsString());
    }
    m_warningsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("binaryMediaTypes"))
  {
    Aws::Utils::Array<JsonView> binaryMediaTypesJsonList = jsonValue.GetArray("binaryMediaTypes");
    for(unsigned binaryMediaTypesIndex = 0; binaryMediaTypesIndex < binaryMediaTypesJsonList.GetLength(); ++binaryMediaTypesIndex)
    {
      m_binaryMediaTypes.push_back(binaryMediaTypesJsonList[binaryMediaTypesIndex].AsString());
    }
    m_binaryMediaTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minimumCompressionSize"))
  {
    m_minimumCompressionSize = jsonValue.GetInteger("minimumCompressionSize");
    m_minimumCompressionSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiKeySource"))
  {
    m_apiKeySource = ApiKeySourceTypeMapper::GetApiKeySourceTypeForName(jsonValue.GetString("apiKeySource"));
    m_apiKeySourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpointConfiguration"))
  {
    m_endpointConfiguration = jsonValue.GetObject("endpointConfiguration");
    m_endpointConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policy"))
  {
    m_policy = jsonValue.GetString("policy");
    m_policyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disableExecuteApiEndpoint"))
  {
    m_disableExecuteApiEndpoint = jsonValue.GetBool("disableExecuteApiEndpoint");
    m_disableExecuteApiEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rootResourceId"))
  {
    m_rootResourceId = jsonValue.GetString("rootResourceId");
    m_rootResourceIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
