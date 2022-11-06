/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/DescribeModelVersionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelVersionsResult::DescribeModelVersionsResult()
{
}

DescribeModelVersionsResult::DescribeModelVersionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelVersionsResult& DescribeModelVersionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("modelVersionDetails"))
  {
    Aws::Utils::Array<JsonView> modelVersionDetailsJsonList = jsonValue.GetArray("modelVersionDetails");
    for(unsigned modelVersionDetailsIndex = 0; modelVersionDetailsIndex < modelVersionDetailsJsonList.GetLength(); ++modelVersionDetailsIndex)
    {
      m_modelVersionDetails.push_back(modelVersionDetailsJsonList[modelVersionDetailsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
