/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAffectedEntitiesForOrganizationResult::DescribeAffectedEntitiesForOrganizationResult()
{
}

DescribeAffectedEntitiesForOrganizationResult::DescribeAffectedEntitiesForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAffectedEntitiesForOrganizationResult& DescribeAffectedEntitiesForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("entities"))
  {
    Aws::Utils::Array<JsonView> entitiesJsonList = jsonValue.GetArray("entities");
    for(unsigned entitiesIndex = 0; entitiesIndex < entitiesJsonList.GetLength(); ++entitiesIndex)
    {
      m_entities.push_back(entitiesJsonList[entitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("failedSet"))
  {
    Aws::Utils::Array<JsonView> failedSetJsonList = jsonValue.GetArray("failedSet");
    for(unsigned failedSetIndex = 0; failedSetIndex < failedSetJsonList.GetLength(); ++failedSetIndex)
    {
      m_failedSet.push_back(failedSetJsonList[failedSetIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
