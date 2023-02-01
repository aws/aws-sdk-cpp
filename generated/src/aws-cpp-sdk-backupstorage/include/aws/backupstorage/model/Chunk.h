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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BackupStorage
{
namespace Model
{

  /**
   * Chunk<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/backupstorage-2018-04-10/Chunk">AWS
   * API Reference</a></p>
   */
  class Chunk
  {
  public:
    AWS_BACKUPSTORAGE_API Chunk();
    AWS_BACKUPSTORAGE_API Chunk(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API Chunk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BACKUPSTORAGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Chunk index
     */
    inline long long GetIndex() const{ return m_index; }

    /**
     * Chunk index
     */
    inline bool IndexHasBeenSet() const { return m_indexHasBeenSet; }

    /**
     * Chunk index
     */
    inline void SetIndex(long long value) { m_indexHasBeenSet = true; m_index = value; }

    /**
     * Chunk index
     */
    inline Chunk& WithIndex(long long value) { SetIndex(value); return *this;}


    /**
     * Chunk length
     */
    inline long long GetLength() const{ return m_length; }

    /**
     * Chunk length
     */
    inline bool LengthHasBeenSet() const { return m_lengthHasBeenSet; }

    /**
     * Chunk length
     */
    inline void SetLength(long long value) { m_lengthHasBeenSet = true; m_length = value; }

    /**
     * Chunk length
     */
    inline Chunk& WithLength(long long value) { SetLength(value); return *this;}


    /**
     * Chunk checksum
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * Chunk checksum
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * Chunk checksum
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * Chunk checksum
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * Chunk checksum
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * Chunk checksum
     */
    inline Chunk& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * Chunk checksum
     */
    inline Chunk& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * Chunk checksum
     */
    inline Chunk& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const DataChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline Chunk& WithChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline Chunk& WithChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * Chunk token
     */
    inline const Aws::String& GetChunkToken() const{ return m_chunkToken; }

    /**
     * Chunk token
     */
    inline bool ChunkTokenHasBeenSet() const { return m_chunkTokenHasBeenSet; }

    /**
     * Chunk token
     */
    inline void SetChunkToken(const Aws::String& value) { m_chunkTokenHasBeenSet = true; m_chunkToken = value; }

    /**
     * Chunk token
     */
    inline void SetChunkToken(Aws::String&& value) { m_chunkTokenHasBeenSet = true; m_chunkToken = std::move(value); }

    /**
     * Chunk token
     */
    inline void SetChunkToken(const char* value) { m_chunkTokenHasBeenSet = true; m_chunkToken.assign(value); }

    /**
     * Chunk token
     */
    inline Chunk& WithChunkToken(const Aws::String& value) { SetChunkToken(value); return *this;}

    /**
     * Chunk token
     */
    inline Chunk& WithChunkToken(Aws::String&& value) { SetChunkToken(std::move(value)); return *this;}

    /**
     * Chunk token
     */
    inline Chunk& WithChunkToken(const char* value) { SetChunkToken(value); return *this;}

  private:

    long long m_index;
    bool m_indexHasBeenSet = false;

    long long m_length;
    bool m_lengthHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    DataChecksumAlgorithm m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;

    Aws::String m_chunkToken;
    bool m_chunkTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
