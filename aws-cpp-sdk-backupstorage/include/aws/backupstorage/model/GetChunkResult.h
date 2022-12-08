/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/DataChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace BackupStorage
{
namespace Model
{
  class GetChunkResult
  {
  public:
    AWS_BACKUPSTORAGE_API GetChunkResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_BACKUPSTORAGE_API GetChunkResult(GetChunkResult&&);
    AWS_BACKUPSTORAGE_API GetChunkResult& operator=(GetChunkResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetChunkResult(const GetChunkResult&) = delete;
    GetChunkResult& operator=(const GetChunkResult&) = delete;


    AWS_BACKUPSTORAGE_API GetChunkResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_BACKUPSTORAGE_API GetChunkResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * Chunk data
     */
    inline Aws::IOStream& GetData() { return m_data.GetUnderlyingStream(); }

    /**
     * Chunk data
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_data = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * Data length
     */
    inline long long GetLength() const{ return m_length; }

    /**
     * Data length
     */
    inline void SetLength(long long value) { m_length = value; }

    /**
     * Data length
     */
    inline GetChunkResult& WithLength(long long value) { SetLength(value); return *this;}


    /**
     * Data checksum
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * Data checksum
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * Data checksum
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * Data checksum
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * Data checksum
     */
    inline GetChunkResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * Data checksum
     */
    inline GetChunkResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * Data checksum
     */
    inline GetChunkResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const DataChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_checksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_checksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline GetChunkResult& WithChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline GetChunkResult& WithChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

  Aws::Utils::Stream::ResponseStream m_data;

    long long m_length;

    Aws::String m_checksum;

    DataChecksumAlgorithm m_checksumAlgorithm;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
