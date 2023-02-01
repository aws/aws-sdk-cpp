/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/DescribeMergeConflictsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeMergeConflictsResult::DescribeMergeConflictsResult()
{
}

DescribeMergeConflictsResult::DescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeMergeConflictsResult& DescribeMergeConflictsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("conflictMetadata"))
  {
    m_conflictMetadata = jsonValue.GetObject("conflictMetadata");

  }

  if(jsonValue.ValueExists("mergeHunks"))
  {
    Aws::Utils::Array<JsonView> mergeHunksJsonList = jsonValue.GetArray("mergeHunks");
    for(unsigned mergeHunksIndex = 0; mergeHunksIndex < mergeHunksJsonList.GetLength(); ++mergeHunksIndex)
    {
      m_mergeHunks.push_back(mergeHunksJsonList[mergeHunksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("destinationCommitId"))
  {
    m_destinationCommitId = jsonValue.GetString("destinationCommitId");

  }

  if(jsonValue.ValueExists("sourceCommitId"))
  {
    m_sourceCommitId = jsonValue.GetString("sourceCommitId");

  }

  if(jsonValue.ValueExists("baseCommitId"))
  {
    m_baseCommitId = jsonValue.GetString("baseCommitId");

  }



  return *this;
}
