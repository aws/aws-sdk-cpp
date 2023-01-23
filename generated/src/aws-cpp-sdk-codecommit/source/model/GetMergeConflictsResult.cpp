/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetMergeConflictsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetMergeConflictsResult::GetMergeConflictsResult() : 
    m_mergeable(false)
{
}

GetMergeConflictsResult::GetMergeConflictsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_mergeable(false)
{
  *this = result;
}

GetMergeConflictsResult& GetMergeConflictsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mergeable"))
  {
    m_mergeable = jsonValue.GetBool("mergeable");

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

  if(jsonValue.ValueExists("conflictMetadataList"))
  {
    Aws::Utils::Array<JsonView> conflictMetadataListJsonList = jsonValue.GetArray("conflictMetadataList");
    for(unsigned conflictMetadataListIndex = 0; conflictMetadataListIndex < conflictMetadataListJsonList.GetLength(); ++conflictMetadataListIndex)
    {
      m_conflictMetadataList.push_back(conflictMetadataListJsonList[conflictMetadataListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
