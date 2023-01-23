/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace EBS
{
namespace Model
{
  class GetSnapshotBlockResult
  {
  public:
    AWS_EBS_API GetSnapshotBlockResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_EBS_API GetSnapshotBlockResult(GetSnapshotBlockResult&&);
    AWS_EBS_API GetSnapshotBlockResult& operator=(GetSnapshotBlockResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetSnapshotBlockResult(const GetSnapshotBlockResult&) = delete;
    GetSnapshotBlockResult& operator=(const GetSnapshotBlockResult&) = delete;


    AWS_EBS_API GetSnapshotBlockResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_EBS_API GetSnapshotBlockResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * <p>The size of the data in the block.</p>
     */
    inline int GetDataLength() const{ return m_dataLength; }

    /**
     * <p>The size of the data in the block.</p>
     */
    inline void SetDataLength(int value) { m_dataLength = value; }

    /**
     * <p>The size of the data in the block.</p>
     */
    inline GetSnapshotBlockResult& WithDataLength(int value) { SetDataLength(value); return *this;}


    /**
     * <p>The data content of the block.</p>
     */
    inline Aws::IOStream& GetBlockData() { return m_blockData.GetUnderlyingStream(); }

    /**
     * <p>The data content of the block.</p>
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_blockData = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline GetSnapshotBlockResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline GetSnapshotBlockResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The checksum generated for the block, which is Base64 encoded.</p>
     */
    inline GetSnapshotBlockResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline const ChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline void SetChecksumAlgorithm(const ChecksumAlgorithm& value) { m_checksumAlgorithm = value; }

    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline void SetChecksumAlgorithm(ChecksumAlgorithm&& value) { m_checksumAlgorithm = std::move(value); }

    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline GetSnapshotBlockResult& WithChecksumAlgorithm(const ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used to generate the checksum for the block, such as
     * SHA256.</p>
     */
    inline GetSnapshotBlockResult& WithChecksumAlgorithm(ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

    int m_dataLength;

  Aws::Utils::Stream::ResponseStream m_blockData;

    Aws::String m_checksum;

    ChecksumAlgorithm m_checksumAlgorithm;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
