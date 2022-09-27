﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/PutObjectResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutObjectResult::PutObjectResult() : 
    m_inlineChunkChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET)
{
}

PutObjectResult::PutObjectResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_inlineChunkChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET),
    m_objectChecksumAlgorithm(SummaryChecksumAlgorithm::NOT_SET)
{
  *this = result;
}

PutObjectResult& PutObjectResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InlineChunkChecksum"))
  {
    m_inlineChunkChecksum = jsonValue.GetString("InlineChunkChecksum");

  }

  if(jsonValue.ValueExists("InlineChunkChecksumAlgorithm"))
  {
    m_inlineChunkChecksumAlgorithm = DataChecksumAlgorithmMapper::GetDataChecksumAlgorithmForName(jsonValue.GetString("InlineChunkChecksumAlgorithm"));

  }

  if(jsonValue.ValueExists("ObjectChecksum"))
  {
    m_objectChecksum = jsonValue.GetString("ObjectChecksum");

  }

  if(jsonValue.ValueExists("ObjectChecksumAlgorithm"))
  {
    m_objectChecksumAlgorithm = SummaryChecksumAlgorithmMapper::GetSummaryChecksumAlgorithmForName(jsonValue.GetString("ObjectChecksumAlgorithm"));

  }



  return *this;
}
