/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ListBulkDeploymentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListBulkDeploymentsResult::ListBulkDeploymentsResult()
{
}

ListBulkDeploymentsResult::ListBulkDeploymentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListBulkDeploymentsResult& ListBulkDeploymentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("BulkDeployments"))
  {
    Aws::Utils::Array<JsonView> bulkDeploymentsJsonList = jsonValue.GetArray("BulkDeployments");
    for(unsigned bulkDeploymentsIndex = 0; bulkDeploymentsIndex < bulkDeploymentsJsonList.GetLength(); ++bulkDeploymentsIndex)
    {
      m_bulkDeployments.push_back(bulkDeploymentsJsonList[bulkDeploymentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
