/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetCalculatedAttributeDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetCalculatedAttributeDefinitionResult::GetCalculatedAttributeDefinitionResult() : 
    m_statistic(Statistic::NOT_SET)
{
}

GetCalculatedAttributeDefinitionResult::GetCalculatedAttributeDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_statistic(Statistic::NOT_SET)
{
  *this = result;
}

GetCalculatedAttributeDefinitionResult& GetCalculatedAttributeDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CalculatedAttributeName"))
  {
    m_calculatedAttributeName = jsonValue.GetString("CalculatedAttributeName");

  }

  if(jsonValue.ValueExists("DisplayName"))
  {
    m_displayName = jsonValue.GetString("DisplayName");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Statistic"))
  {
    m_statistic = StatisticMapper::GetStatisticForName(jsonValue.GetString("Statistic"));

  }

  if(jsonValue.ValueExists("Conditions"))
  {
    m_conditions = jsonValue.GetObject("Conditions");

  }

  if(jsonValue.ValueExists("AttributeDetails"))
  {
    m_attributeDetails = jsonValue.GetObject("AttributeDetails");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
