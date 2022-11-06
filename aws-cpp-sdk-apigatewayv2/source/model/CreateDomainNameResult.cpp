/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/CreateDomainNameResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateDomainNameResult::CreateDomainNameResult()
{
}

CreateDomainNameResult::CreateDomainNameResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateDomainNameResult& CreateDomainNameResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("apiMappingSelectionExpression"))
  {
    m_apiMappingSelectionExpression = jsonValue.GetString("apiMappingSelectionExpression");

  }

  if(jsonValue.ValueExists("domainName"))
  {
    m_domainName = jsonValue.GetString("domainName");

  }

  if(jsonValue.ValueExists("domainNameConfigurations"))
  {
    Aws::Utils::Array<JsonView> domainNameConfigurationsJsonList = jsonValue.GetArray("domainNameConfigurations");
    for(unsigned domainNameConfigurationsIndex = 0; domainNameConfigurationsIndex < domainNameConfigurationsJsonList.GetLength(); ++domainNameConfigurationsIndex)
    {
      m_domainNameConfigurations.push_back(domainNameConfigurationsJsonList[domainNameConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("mutualTlsAuthentication"))
  {
    m_mutualTlsAuthentication = jsonValue.GetObject("mutualTlsAuthentication");

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
