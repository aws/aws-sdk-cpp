/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
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
  class GetObjectMetadataResult
  {
  public:
    AWS_BACKUPSTORAGE_API GetObjectMetadataResult();
    //We have to define these because Microsoft doesn't auto generate them
    AWS_BACKUPSTORAGE_API GetObjectMetadataResult(GetObjectMetadataResult&&);
    AWS_BACKUPSTORAGE_API GetObjectMetadataResult& operator=(GetObjectMetadataResult&&);
    //we delete these because Microsoft doesn't handle move generation correctly
    //and we therefore don't trust them to get it right here either.
    GetObjectMetadataResult(const GetObjectMetadataResult&) = delete;
    GetObjectMetadataResult& operator=(const GetObjectMetadataResult&) = delete;


    AWS_BACKUPSTORAGE_API GetObjectMetadataResult(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
    AWS_BACKUPSTORAGE_API GetObjectMetadataResult& operator=(Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);



    /**
     * Metadata string.
     */
    inline const Aws::String& GetMetadataString() const{ return m_metadataString; }

    /**
     * Metadata string.
     */
    inline void SetMetadataString(const Aws::String& value) { m_metadataString = value; }

    /**
     * Metadata string.
     */
    inline void SetMetadataString(Aws::String&& value) { m_metadataString = std::move(value); }

    /**
     * Metadata string.
     */
    inline void SetMetadataString(const char* value) { m_metadataString.assign(value); }

    /**
     * Metadata string.
     */
    inline GetObjectMetadataResult& WithMetadataString(const Aws::String& value) { SetMetadataString(value); return *this;}

    /**
     * Metadata string.
     */
    inline GetObjectMetadataResult& WithMetadataString(Aws::String&& value) { SetMetadataString(std::move(value)); return *this;}

    /**
     * Metadata string.
     */
    inline GetObjectMetadataResult& WithMetadataString(const char* value) { SetMetadataString(value); return *this;}


    /**
     * Metadata blob.
     */
    inline Aws::IOStream& GetMetadataBlob() { return m_metadataBlob.GetUnderlyingStream(); }

    /**
     * Metadata blob.
     */
    inline void ReplaceBody(Aws::IOStream* body) { m_metadataBlob = Aws::Utils::Stream::ResponseStream(body); }


    /**
     * The size of MetadataBlob.
     */
    inline long long GetMetadataBlobLength() const{ return m_metadataBlobLength; }

    /**
     * The size of MetadataBlob.
     */
    inline void SetMetadataBlobLength(long long value) { m_metadataBlobLength = value; }

    /**
     * The size of MetadataBlob.
     */
    inline GetObjectMetadataResult& WithMetadataBlobLength(long long value) { SetMetadataBlobLength(value); return *this;}


    /**
     * MetadataBlob checksum.
     */
    inline const Aws::String& GetMetadataBlobChecksum() const{ return m_metadataBlobChecksum; }

    /**
     * MetadataBlob checksum.
     */
    inline void SetMetadataBlobChecksum(const Aws::String& value) { m_metadataBlobChecksum = value; }

    /**
     * MetadataBlob checksum.
     */
    inline void SetMetadataBlobChecksum(Aws::String&& value) { m_metadataBlobChecksum = std::move(value); }

    /**
     * MetadataBlob checksum.
     */
    inline void SetMetadataBlobChecksum(const char* value) { m_metadataBlobChecksum.assign(value); }

    /**
     * MetadataBlob checksum.
     */
    inline GetObjectMetadataResult& WithMetadataBlobChecksum(const Aws::String& value) { SetMetadataBlobChecksum(value); return *this;}

    /**
     * MetadataBlob checksum.
     */
    inline GetObjectMetadataResult& WithMetadataBlobChecksum(Aws::String&& value) { SetMetadataBlobChecksum(std::move(value)); return *this;}

    /**
     * MetadataBlob checksum.
     */
    inline GetObjectMetadataResult& WithMetadataBlobChecksum(const char* value) { SetMetadataBlobChecksum(value); return *this;}


    /**
     * Checksum algorithm.
     */
    inline const DataChecksumAlgorithm& GetMetadataBlobChecksumAlgorithm() const{ return m_metadataBlobChecksumAlgorithm; }

    /**
     * Checksum algorithm.
     */
    inline void SetMetadataBlobChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_metadataBlobChecksumAlgorithm = value; }

    /**
     * Checksum algorithm.
     */
    inline void SetMetadataBlobChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_metadataBlobChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm.
     */
    inline GetObjectMetadataResult& WithMetadataBlobChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetMetadataBlobChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm.
     */
    inline GetObjectMetadataResult& WithMetadataBlobChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetMetadataBlobChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_metadataString;

  Aws::Utils::Stream::ResponseStream m_metadataBlob;

    long long m_metadataBlobLength;

    Aws::String m_metadataBlobChecksum;

    DataChecksumAlgorithm m_metadataBlobChecksumAlgorithm;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
