/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetMergeConflictsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMergeConflictsResult::GetMergeConflictsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMergeConflictsResult& GetMergeConflictsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mergeable"))
  {
    m_mergeable = jsonValue.GetBool("mergeable");
    m_mergeableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationCommitId"))
  {
    m_destinationCommitId = jsonValue.GetString("destinationCommitId");
    m_destinationCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceCommitId"))
  {
    m_sourceCommitId = jsonValue.GetString("sourceCommitId");
    m_sourceCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseCommitId"))
  {
    m_baseCommitId = jsonValue.GetString("baseCommitId");
    m_baseCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conflictMetadataList"))
  {
    Aws::Utils::Array<JsonView> conflictMetadataListJsonList = jsonValue.GetArray("conflictMetadataList");
    for(unsigned conflictMetadataListIndex = 0; conflictMetadataListIndex < conflictMetadataListJsonList.GetLength(); ++conflictMetadataListIndex)
    {
      m_conflictMetadataList.push_back(conflictMetadataListJsonList[conflictMetadataListIndex].AsObject());
    }
    m_conflictMetadataListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
