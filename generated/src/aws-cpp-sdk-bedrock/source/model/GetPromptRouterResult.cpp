/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetPromptRouterResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetPromptRouterResult::GetPromptRouterResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetPromptRouterResult& GetPromptRouterResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("promptRouterName"))
  {
    m_promptRouterName = jsonValue.GetString("promptRouterName");
    m_promptRouterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("routingCriteria"))
  {
    m_routingCriteria = jsonValue.GetObject("routingCriteria");
    m_routingCriteriaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("promptRouterArn"))
  {
    m_promptRouterArn = jsonValue.GetString("promptRouterArn");
    m_promptRouterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("models"))
  {
    Aws::Utils::Array<JsonView> modelsJsonList = jsonValue.GetArray("models");
    for(unsigned modelsIndex = 0; modelsIndex < modelsJsonList.GetLength(); ++modelsIndex)
    {
      m_models.push_back(modelsJsonList[modelsIndex].AsObject());
    }
    m_modelsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fallbackModel"))
  {
    m_fallbackModel = jsonValue.GetObject("fallbackModel");
    m_fallbackModelHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = PromptRouterStatusMapper::GetPromptRouterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = PromptRouterTypeMapper::GetPromptRouterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
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
