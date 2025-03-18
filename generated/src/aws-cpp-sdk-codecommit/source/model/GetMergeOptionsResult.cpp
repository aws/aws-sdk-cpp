/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetMergeOptionsResult.h>
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

GetMergeOptionsResult::GetMergeOptionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetMergeOptionsResult& GetMergeOptionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("mergeOptions"))
  {
    Aws::Utils::Array<JsonView> mergeOptionsJsonList = jsonValue.GetArray("mergeOptions");
    for(unsigned mergeOptionsIndex = 0; mergeOptionsIndex < mergeOptionsJsonList.GetLength(); ++mergeOptionsIndex)
    {
      m_mergeOptions.push_back(MergeOptionTypeEnumMapper::GetMergeOptionTypeEnumForName(mergeOptionsJsonList[mergeOptionsIndex].AsString()));
    }
    m_mergeOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceCommitId"))
  {
    m_sourceCommitId = jsonValue.GetString("sourceCommitId");
    m_sourceCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("destinationCommitId"))
  {
    m_destinationCommitId = jsonValue.GetString("destinationCommitId");
    m_destinationCommitIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("baseCommitId"))
  {
    m_baseCommitId = jsonValue.GetString("baseCommitId");
    m_baseCommitIdHasBeenSet = true;
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
