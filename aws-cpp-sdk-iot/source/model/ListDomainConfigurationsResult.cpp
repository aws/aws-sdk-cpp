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
    Array<JsonView> domainConfigurationsJsonList = jsonValue.GetArray("domainConfigurations");
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
