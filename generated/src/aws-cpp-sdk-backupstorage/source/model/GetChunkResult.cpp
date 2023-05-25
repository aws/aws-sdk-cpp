/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/GetChunkResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetChunkResult::GetChunkResult() : 
    m_length(0),
    m_checksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
}

GetChunkResult::GetChunkResult(GetChunkResult&& toMove) : 
    m_data(std::move(toMove.m_data)),
    m_length(toMove.m_length),
    m_checksum(std::move(toMove.m_checksum)),
    m_checksumAlgorithm(toMove.m_checksumAlgorithm),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetChunkResult& GetChunkResult::operator=(GetChunkResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_data = std::move(toMove.m_data);
   m_length = toMove.m_length;
   m_checksum = std::move(toMove.m_checksum);
   m_checksumAlgorithm = toMove.m_checksumAlgorithm;
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetChunkResult::GetChunkResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_length(0),
    m_checksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
  *this = std::move(result);
}

GetChunkResult& GetChunkResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_data = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& lengthIter = headers.find("x-amz-data-length");
  if(lengthIter != headers.end())
  {
     m_length = StringUtils::ConvertToInt64(lengthIter->second.c_str());
  }

  const auto& checksumIter = headers.find("x-amz-checksum");
  if(checksumIter != headers.end())
  {
    m_checksum = checksumIter->second;
  }

  const auto& checksumAlgorithmIter = headers.find("x-amz-checksum-algorithm");
  if(checksumAlgorithmIter != headers.end())
  {
    m_checksumAlgorithm = DataChecksumAlgorithmMapper::GetDataChecksumAlgorithmForName(checksumAlgorithmIter->second);
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
