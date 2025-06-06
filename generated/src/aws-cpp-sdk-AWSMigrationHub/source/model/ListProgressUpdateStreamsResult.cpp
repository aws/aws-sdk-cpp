﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/ListProgressUpdateStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListProgressUpdateStreamsResult::ListProgressUpdateStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListProgressUpdateStreamsResult& ListProgressUpdateStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProgressUpdateStreamSummaryList"))
  {
    Aws::Utils::Array<JsonView> progressUpdateStreamSummaryListJsonList = jsonValue.GetArray("ProgressUpdateStreamSummaryList");
    for(unsigned progressUpdateStreamSummaryListIndex = 0; progressUpdateStreamSummaryListIndex < progressUpdateStreamSummaryListJsonList.GetLength(); ++progressUpdateStreamSummaryListIndex)
    {
      m_progressUpdateStreamSummaryList.push_back(progressUpdateStreamSummaryListJsonList[progressUpdateStreamSummaryListIndex].AsObject());
    }
    m_progressUpdateStreamSummaryListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
