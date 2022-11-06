/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/discovery/model/DescribeContinuousExportsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ApplicationDiscoveryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeContinuousExportsResult::DescribeContinuousExportsResult()
{
}

DescribeContinuousExportsResult::DescribeContinuousExportsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeContinuousExportsResult& DescribeContinuousExportsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("descriptions"))
  {
    Aws::Utils::Array<JsonView> descriptionsJsonList = jsonValue.GetArray("descriptions");
    for(unsigned descriptionsIndex = 0; descriptionsIndex < descriptionsJsonList.GetLength(); ++descriptionsIndex)
    {
      m_descriptions.push_back(descriptionsJsonList[descriptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
