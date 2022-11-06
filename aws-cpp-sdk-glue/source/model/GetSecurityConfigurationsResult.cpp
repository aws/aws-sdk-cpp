/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetSecurityConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSecurityConfigurationsResult::GetSecurityConfigurationsResult()
{
}

GetSecurityConfigurationsResult::GetSecurityConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSecurityConfigurationsResult& GetSecurityConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SecurityConfigurations"))
  {
    Aws::Utils::Array<JsonView> securityConfigurationsJsonList = jsonValue.GetArray("SecurityConfigurations");
    for(unsigned securityConfigurationsIndex = 0; securityConfigurationsIndex < securityConfigurationsJsonList.GetLength(); ++securityConfigurationsIndex)
    {
      m_securityConfigurations.push_back(securityConfigurationsJsonList[securityConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
