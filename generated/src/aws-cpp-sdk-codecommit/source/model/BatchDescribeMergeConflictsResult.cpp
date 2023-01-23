/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchDescribeMergeConflictsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDescribeMergeConflictsResult::BatchDescribeMergeConflictsResult()
{
}

BatchDescribeMergeConflictsResult::BatchDescribeMergeConflictsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

BatchDescribeMergeConflictsResult& BatchDescribeMergeConflictsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("conflicts"))
  {
    Aws::Utils::Array<JsonView> conflictsJsonList = jsonValue.GetArray("conflicts");
    for(unsigned conflictsIndex = 0; conflictsIndex < conflictsJsonList.GetLength(); ++conflictsIndex)
    {
      m_conflicts.push_back(conflictsJsonList[conflictsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
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
