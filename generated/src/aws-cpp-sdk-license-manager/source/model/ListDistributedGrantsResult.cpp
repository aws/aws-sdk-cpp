/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/ListDistributedGrantsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDistributedGrantsResult::ListDistributedGrantsResult()
{
}

ListDistributedGrantsResult::ListDistributedGrantsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDistributedGrantsResult& ListDistributedGrantsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Grants"))
  {
    Aws::Utils::Array<JsonView> grantsJsonList = jsonValue.GetArray("Grants");
    for(unsigned grantsIndex = 0; grantsIndex < grantsJsonList.GetLength(); ++grantsIndex)
    {
      m_grants.push_back(grantsJsonList[grantsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
