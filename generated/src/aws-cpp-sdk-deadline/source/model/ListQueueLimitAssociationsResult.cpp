/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListQueueLimitAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListQueueLimitAssociationsResult::ListQueueLimitAssociationsResult()
{
}

ListQueueLimitAssociationsResult::ListQueueLimitAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQueueLimitAssociationsResult& ListQueueLimitAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("queueLimitAssociations"))
  {
    Aws::Utils::Array<JsonView> queueLimitAssociationsJsonList = jsonValue.GetArray("queueLimitAssociations");
    for(unsigned queueLimitAssociationsIndex = 0; queueLimitAssociationsIndex < queueLimitAssociationsJsonList.GetLength(); ++queueLimitAssociationsIndex)
    {
      m_queueLimitAssociations.push_back(queueLimitAssociationsJsonList[queueLimitAssociationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
