/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/GetSnapshotBlockResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetSnapshotBlockResult::GetSnapshotBlockResult(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  *this = std::move(result);
}

GetSnapshotBlockResult& GetSnapshotBlockResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_blockData = result.TakeOwnershipOfPayload();
  m_blockDataHasBeenSet = true;

  const auto& headers = result.GetHeaderValueCollection();
  const auto& dataLengthIter = headers.find("x-amz-data-length");
  if(dataLengthIter != headers.end())
  {
    m_dataLength = StringUtils::ConvertToInt32(dataLengthIter->second.c_str());
    m_dataLengthHasBeenSet = true;
  }

  const auto& checksumIter = headers.find("x-amz-checksum");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
    m_checksumHasBeenSet = true;
  }

  const auto& checksumAlgorithmIter = headers.find("x-amz-checksum-algorithm");
  if(checksumAlgorithmIter != headers.end())
  {
    m_checksumAlgorithm = ChecksumAlgorithmMapper::GetChecksumAlgorithmForName(checksumAlgorithmIter->second);
    m_checksumAlgorithmHasBeenSet = true;
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

   return *this;
}
