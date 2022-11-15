/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/ListInstanceTypeDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::OpenSearchService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListInstanceTypeDetailsResult::ListInstanceTypeDetailsResult()
{
}

ListInstanceTypeDetailsResult::ListInstanceTypeDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListInstanceTypeDetailsResult& ListInstanceTypeDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceTypeDetails"))
  {
    Aws::Utils::Array<JsonView> instanceTypeDetailsJsonList = jsonValue.GetArray("InstanceTypeDetails");
    for(unsigned instanceTypeDetailsIndex = 0; instanceTypeDetailsIndex < instanceTypeDetailsJsonList.GetLength(); ++instanceTypeDetailsIndex)
    {
      m_instanceTypeDetails.push_back(instanceTypeDetailsJsonList[instanceTypeDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
