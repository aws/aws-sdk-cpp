/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/PutSnapshotBlockResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutSnapshotBlockResult::PutSnapshotBlockResult() : 
    m_checksumAlgorithm(ChecksumAlgorithm::NOT_SET)
{
}

PutSnapshotBlockResult::PutSnapshotBlockResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_checksumAlgorithm(ChecksumAlgorithm::NOT_SET)
{
  *this = result;
}

PutSnapshotBlockResult& PutSnapshotBlockResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  AWS_UNREFERENCED_PARAM(result);

  const auto& headers = result.GetHeaderValueCollection();
  const auto& checksumIter = headers.find("x-amz-checksum");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
  }

  const auto& checksumAlgorithmIter = headers.find("x-amz-checksum-algorithm");
  if(checksumAlgorithmIter != headers.end())
  {
    m_checksumAlgorithm = ChecksumAlgorithmMapper::GetChecksumAlgorithmForName(checksumAlgorithmIter->second);
  }


  return *this;
}
