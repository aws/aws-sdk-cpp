/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/TestTransformerResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchLogs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestTransformerResult::TestTransformerResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

TestTransformerResult& TestTransformerResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("transformedLogs"))
  {
    Aws::Utils::Array<JsonView> transformedLogsJsonList = jsonValue.GetArray("transformedLogs");
    for(unsigned transformedLogsIndex = 0; transformedLogsIndex < transformedLogsJsonList.GetLength(); ++transformedLogsIndex)
    {
      m_transformedLogs.push_back(transformedLogsJsonList[transformedLogsIndex].AsObject());
    }
    m_transformedLogsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
