/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListQueueFleetAssociationsResult.h>
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

ListQueueFleetAssociationsResult::ListQueueFleetAssociationsResult()
{
}

ListQueueFleetAssociationsResult::ListQueueFleetAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListQueueFleetAssociationsResult& ListQueueFleetAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("queueFleetAssociations"))
  {
    Aws::Utils::Array<JsonView> queueFleetAssociationsJsonList = jsonValue.GetArray("queueFleetAssociations");
    for(unsigned queueFleetAssociationsIndex = 0; queueFleetAssociationsIndex < queueFleetAssociationsJsonList.GetLength(); ++queueFleetAssociationsIndex)
    {
      m_queueFleetAssociations.push_back(queueFleetAssociationsJsonList[queueFleetAssociationsIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
