/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListDomainConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDomainConfigurationsResult::ListDomainConfigurationsResult()
{
}

ListDomainConfigurationsResult::ListDomainConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDomainConfigurationsResult& ListDomainConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("domainConfigurations"))
  {
    Aws::Utils::Array<JsonView> domainConfigurationsJsonList = jsonValue.GetArray("domainConfigurations");
    for(unsigned domainConfigurationsIndex = 0; domainConfigurationsIndex < domainConfigurationsJsonList.GetLength(); ++domainConfigurationsIndex)
    {
      m_domainConfigurations.push_back(domainConfigurationsJsonList[domainConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextMarker"))
  {
    m_nextMarker = jsonValue.GetString("nextMarker");

  }



  return *this;
}
