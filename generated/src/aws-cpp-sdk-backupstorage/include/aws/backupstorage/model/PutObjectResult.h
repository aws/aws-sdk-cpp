/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/backupstorage/model/DataChecksumAlgorithm.h>
#include <aws/backupstorage/model/SummaryChecksumAlgorithm.h>
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
  class PutObjectResult
  {
  public:
    AWS_BACKUPSTORAGE_API PutObjectResult();
    AWS_BACKUPSTORAGE_API PutObjectResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API PutObjectResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Inline chunk checksum
     */
    inline const Aws::String& GetInlineChunkChecksum() const{ return m_inlineChunkChecksum; }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(const Aws::String& value) { m_inlineChunkChecksum = value; }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(Aws::String&& value) { m_inlineChunkChecksum = std::move(value); }

    /**
     * Inline chunk checksum
     */
    inline void SetInlineChunkChecksum(const char* value) { m_inlineChunkChecksum.assign(value); }

    /**
     * Inline chunk checksum
     */
    inline PutObjectResult& WithInlineChunkChecksum(const Aws::String& value) { SetInlineChunkChecksum(value); return *this;}

    /**
     * Inline chunk checksum
     */
    inline PutObjectResult& WithInlineChunkChecksum(Aws::String&& value) { SetInlineChunkChecksum(std::move(value)); return *this;}

    /**
     * Inline chunk checksum
     */
    inline PutObjectResult& WithInlineChunkChecksum(const char* value) { SetInlineChunkChecksum(value); return *this;}


    /**
     * Inline chunk checksum algorithm
     */
    inline const DataChecksumAlgorithm& GetInlineChunkChecksumAlgorithm() const{ return m_inlineChunkChecksumAlgorithm; }

    /**
     * Inline chunk checksum algorithm
     */
    inline void SetInlineChunkChecksumAlgorithm(const DataChecksumAlgorithm& value) { m_inlineChunkChecksumAlgorithm = value; }

    /**
     * Inline chunk checksum algorithm
     */
    inline void SetInlineChunkChecksumAlgorithm(DataChecksumAlgorithm&& value) { m_inlineChunkChecksumAlgorithm = std::move(value); }

    /**
     * Inline chunk checksum algorithm
     */
    inline PutObjectResult& WithInlineChunkChecksumAlgorithm(const DataChecksumAlgorithm& value) { SetInlineChunkChecksumAlgorithm(value); return *this;}

    /**
     * Inline chunk checksum algorithm
     */
    inline PutObjectResult& WithInlineChunkChecksumAlgorithm(DataChecksumAlgorithm&& value) { SetInlineChunkChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * object checksum
     */
    inline const Aws::String& GetObjectChecksum() const{ return m_objectChecksum; }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(const Aws::String& value) { m_objectChecksum = value; }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(Aws::String&& value) { m_objectChecksum = std::move(value); }

    /**
     * object checksum
     */
    inline void SetObjectChecksum(const char* value) { m_objectChecksum.assign(value); }

    /**
     * object checksum
     */
    inline PutObjectResult& WithObjectChecksum(const Aws::String& value) { SetObjectChecksum(value); return *this;}

    /**
     * object checksum
     */
    inline PutObjectResult& WithObjectChecksum(Aws::String&& value) { SetObjectChecksum(std::move(value)); return *this;}

    /**
     * object checksum
     */
    inline PutObjectResult& WithObjectChecksum(const char* value) { SetObjectChecksum(value); return *this;}


    /**
     * object checksum algorithm
     */
    inline const SummaryChecksumAlgorithm& GetObjectChecksumAlgorithm() const{ return m_objectChecksumAlgorithm; }

    /**
     * object checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { m_objectChecksumAlgorithm = value; }

    /**
     * object checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { m_objectChecksumAlgorithm = std::move(value); }

    /**
     * object checksum algorithm
     */
    inline PutObjectResult& WithObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { SetObjectChecksumAlgorithm(value); return *this;}

    /**
     * object checksum algorithm
     */
    inline PutObjectResult& WithObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { SetObjectChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_inlineChunkChecksum;

    DataChecksumAlgorithm m_inlineChunkChecksumAlgorithm;

    Aws::String m_objectChecksum;

    SummaryChecksumAlgorithm m_objectChecksumAlgorithm;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
