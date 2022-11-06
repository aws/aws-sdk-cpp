/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workmail/model/ListAvailabilityConfigurationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAvailabilityConfigurationsResult::ListAvailabilityConfigurationsResult()
{
}

ListAvailabilityConfigurationsResult::ListAvailabilityConfigurationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAvailabilityConfigurationsResult& ListAvailabilityConfigurationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AvailabilityConfigurations"))
  {
    Aws::Utils::Array<JsonView> availabilityConfigurationsJsonList = jsonValue.GetArray("AvailabilityConfigurations");
    for(unsigned availabilityConfigurationsIndex = 0; availabilityConfigurationsIndex < availabilityConfigurationsJsonList.GetLength(); ++availabilityConfigurationsIndex)
    {
      m_availabilityConfigurations.push_back(availabilityConfigurationsJsonList[availabilityConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
