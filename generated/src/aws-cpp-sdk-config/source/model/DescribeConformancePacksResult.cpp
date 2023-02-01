/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/config/model/DescribeConformancePacksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ConfigService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConformancePacksResult::DescribeConformancePacksResult()
{
}

DescribeConformancePacksResult::DescribeConformancePacksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConformancePacksResult& DescribeConformancePacksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConformancePackDetails"))
  {
    Aws::Utils::Array<JsonView> conformancePackDetailsJsonList = jsonValue.GetArray("ConformancePackDetails");
    for(unsigned conformancePackDetailsIndex = 0; conformancePackDetailsIndex < conformancePackDetailsJsonList.GetLength(); ++conformancePackDetailsIndex)
    {
      m_conformancePackDetails.push_back(conformancePackDetailsJsonList[conformancePackDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
