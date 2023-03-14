/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/NotifyObjectCompleteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

NotifyObjectCompleteResult::NotifyObjectCompleteResult() : 
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET)
{
}

NotifyObjectCompleteResult::NotifyObjectCompleteResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET)
{
  *this = result;
}

NotifyObjectCompleteResult& NotifyObjectCompleteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ObjectChecksum"))
  {
    m_objectChecksum = jsonValue.GetString("ObjectChecksum");

  }

  if(jsonValue.ValueExists("ObjectChecksumAlgorithm"))
  {
    m_objectChecksumAlgorithm = SummaryChecksumAlgorithmMapper::GetSummaryChecksumAlgorithmForName(jsonValue.GetString("ObjectChecksumAlgorithm"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
