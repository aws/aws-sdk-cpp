/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/PutChunkResult.h>
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

PutChunkResult::PutChunkResult() : 
    m_chunkChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
}

PutChunkResult::PutChunkResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_chunkChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
  *this = result;
}

PutChunkResult& PutChunkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChunkChecksum"))
  {
    m_chunkChecksum = jsonValue.GetString("ChunkChecksum");

  }

  if(jsonValue.ValueExists("ChunkChecksumAlgorithm"))
  {
    m_chunkChecksumAlgorithm = DataChecksumAlgorithmMapper::GetDataChecksumAlgorithmForName(jsonValue.GetString("ChunkChecksumAlgorithm"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
