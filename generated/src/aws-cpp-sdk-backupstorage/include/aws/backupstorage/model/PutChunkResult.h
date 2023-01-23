/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/DataChecksumAlgorithm.h>
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
namespace BackupStorage
{
namespace Model
{
  class PutChunkResult
  {
  public:
    AWS_BACKUPSTORAGE_API PutChunkResult();
    AWS_BACKUPSTORAGE_API PutChunkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API PutChunkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Chunk checksum
     */
    inline const Aws::String& GetChunkChecksum() const{ return m_chunkChecksum; }

    /**
     * Chunk checksum
     */
    inline void SetChunkChecksum(const Aws::String& value) { m_chunkChecksum = value; }

    /**
     * Chunk checksum
     */
    inline void SetChunkChecksum(Aws::String&& value) { m_chunkChecksum = std::move(value); }

    /**
     * Chunk checksum
     */
    inline void SetChunkChecksum(const char* value) { m_chunkChecksum.assign(value); }

    /**
     * Chunk checksum
     */
    inline PutChunkResult& WithChunkChecksum(const Aws::String& value) { SetChunkChecksum(value); return *this;}

    /**
     * Chunk checksum
     */
    inline PutChunkResult& WithChunkChecksum(Aws::String&& value) { SetChunkChecksum(std::move(value)); return *this;}

    /**
     * Chunk checksum
     */
    inline PutChunkResult& WithChunkChecksum(const char* value) { SetChunkChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const DataChecksumAlgorithm& GetChunkChecksumAlgorithm() const{ return m_chunkChecksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline void SetChunkChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_chunkChecksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetChunkChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_chunkChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline PutChunkResult& WithChunkChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetChunkChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline PutChunkResult& WithChunkChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetChunkChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_chunkChecksum;

    DataChecksumAlgorithm m_chunkChecksumAlgorithm;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
