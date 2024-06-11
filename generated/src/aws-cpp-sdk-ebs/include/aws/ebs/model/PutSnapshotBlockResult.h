﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EBS
{
namespace Model
{
  class PutSnapshotBlockResult
  {
  public:
    AWS_EBS_API PutSnapshotBlockResult();
    AWS_EBS_API PutSnapshotBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EBS_API PutSnapshotBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }
    inline PutSnapshotBlockResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}
    inline PutSnapshotBlockResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}
    inline PutSnapshotBlockResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline const ChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }
    inline void SetChecksumAlgorithm(const ChecksumAlgorithm& value) { m_checksumAlgorithm = value; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm&& value) { m_checksumAlgorithm = std::move(value); }
    inline PutSnapshotBlockResult& WithChecksumAlgorithm(const ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}
    inline PutSnapshotBlockResult& WithChecksumAlgorithm(ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSnapshotBlockResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSnapshotBlockResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSnapshotBlockResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_checksum;

    ChecksumAlgorithm m_checksumAlgorithm;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
