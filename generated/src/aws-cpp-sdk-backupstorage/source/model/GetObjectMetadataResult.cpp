/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/GetObjectMetadataResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws;

GetObjectMetadataResult::GetObjectMetadataResult() : 
    m_metadataBlobLength(0),
    m_metadataBlobChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
}

GetObjectMetadataResult::GetObjectMetadataResult(GetObjectMetadataResult&& toMove) : 
    m_metadataString(std::move(toMove.m_metadataString)),
    m_metadataBlob(std::move(toMove.m_metadataBlob)),
    m_metadataBlobLength(toMove.m_metadataBlobLength),
    m_metadataBlobChecksum(std::move(toMove.m_metadataBlobChecksum)),
    m_metadataBlobChecksumAlgorithm(toMove.m_metadataBlobChecksumAlgorithm),
    m_requestId(std::move(toMove.m_requestId))
{
}

GetObjectMetadataResult& GetObjectMetadataResult::operator=(GetObjectMetadataResult&& toMove)
{
   if(this == &toMove)
   {
      return *this;
   }

   m_metadataString = std::move(toMove.m_metadataString);
   m_metadataBlob = std::move(toMove.m_metadataBlob);
   m_metadataBlobLength = toMove.m_metadataBlobLength;
   m_metadataBlobChecksum = std::move(toMove.m_metadataBlobChecksum);
   m_metadataBlobChecksumAlgorithm = toMove.m_metadataBlobChecksumAlgorithm;
   m_requestId = std::move(toMove.m_requestId);

   return *this;
}

GetObjectMetadataResult::GetObjectMetadataResult(Aws::AmazonWebServiceResult<ResponseStream>&& result) : 
    m_metadataBlobLength(0),
    m_metadataBlobChecksumAlgorithm(DataChecksumAlgorithm::NOT_SET)
{
  *this = std::move(result);
}

GetObjectMetadataResult& GetObjectMetadataResult::operator =(Aws::AmazonWebServiceResult<ResponseStream>&& result)
{
  m_metadataBlob = result.TakeOwnershipOfPayload();

  const auto& headers = result.GetHeaderValueCollection();
  const auto& metadataStringIter = headers.find("x-amz-metadata-string");
  if(metadataStringIter != headers.end())
  {
    m_metadataString = metadataStringIter->second;
  }

  const auto& metadataBlobLengthIter = headers.find("x-amz-data-length");
  if(metadataBlobLengthIter != headers.end())
  {
     m_metadataBlobLength = StringUtils::ConvertToInt64(metadataBlobLengthIter->second.c_str());
  }

  const auto& metadataBlobChecksumIter = headers.find("x-amz-checksum");
  if(metadataBlobChecksumIter != headers.end())
  {
    m_metadataBlobChecksum = metadataBlobChecksumIter->second;
  }

  const auto& metadataBlobChecksumAlgorithmIter = headers.find("x-amz-checksum-algorithm");
  if(metadataBlobChecksumAlgorithmIter != headers.end())
  {
    m_metadataBlobChecksumAlgorithm = DataChecksumAlgorithmMapper::GetDataChecksumAlgorithmForName(metadataBlobChecksumAlgorithmIter->second);
  }

  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }

   return *this;
}
