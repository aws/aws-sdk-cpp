/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesis/model/ListStreamsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Kinesis::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListStreamsResult::ListStreamsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListStreamsResult& ListStreamsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("StreamNames"))
  {
    Aws::Utils::Array<JsonView> streamNamesJsonList = jsonValue.GetArray("StreamNames");
    for(unsigned streamNamesIndex = 0; streamNamesIndex < streamNamesJsonList.GetLength(); ++streamNamesIndex)
    {
      m_streamNames.push_back(streamNamesJsonList[streamNamesIndex].AsString());
    }
    m_streamNamesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HasMoreStreams"))
  {
    m_hasMoreStreams = jsonValue.GetBool("HasMoreStreams");
    m_hasMoreStreamsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamSummaries"))
  {
    Aws::Utils::Array<JsonView> streamSummariesJsonList = jsonValue.GetArray("StreamSummaries");
    for(unsigned streamSummariesIndex = 0; streamSummariesIndex < streamSummariesJsonList.GetLength(); ++streamSummariesIndex)
    {
      m_streamSummaries.push_back(streamSummariesJsonList[streamSummariesIndex].AsObject());
    }
    m_streamSummariesHasBeenSet = true;
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
