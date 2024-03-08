/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/ListMetadataTransferJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTTwinMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListMetadataTransferJobsResult::ListMetadataTransferJobsResult()
{
}

ListMetadataTransferJobsResult::ListMetadataTransferJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListMetadataTransferJobsResult& ListMetadataTransferJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("metadataTransferJobSummaries"))
  {
    Aws::Utils::Array<JsonView> metadataTransferJobSummariesJsonList = jsonValue.GetArray("metadataTransferJobSummaries");
    for(unsigned metadataTransferJobSummariesIndex = 0; metadataTransferJobSummariesIndex < metadataTransferJobSummariesJsonList.GetLength(); ++metadataTransferJobSummariesIndex)
    {
      m_metadataTransferJobSummaries.push_back(metadataTransferJobSummariesJsonList[metadataTransferJobSummariesIndex].AsObject());
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
