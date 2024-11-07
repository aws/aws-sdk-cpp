/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/ListCollaborationTrainedModelExportJobsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCollaborationTrainedModelExportJobsResult::ListCollaborationTrainedModelExportJobsResult()
{
}

ListCollaborationTrainedModelExportJobsResult::ListCollaborationTrainedModelExportJobsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCollaborationTrainedModelExportJobsResult& ListCollaborationTrainedModelExportJobsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("collaborationTrainedModelExportJobs"))
  {
    Aws::Utils::Array<JsonView> collaborationTrainedModelExportJobsJsonList = jsonValue.GetArray("collaborationTrainedModelExportJobs");
    for(unsigned collaborationTrainedModelExportJobsIndex = 0; collaborationTrainedModelExportJobsIndex < collaborationTrainedModelExportJobsJsonList.GetLength(); ++collaborationTrainedModelExportJobsIndex)
    {
      m_collaborationTrainedModelExportJobs.push_back(collaborationTrainedModelExportJobsJsonList[collaborationTrainedModelExportJobsIndex].AsObject());
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
