/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backupstorage/BackupStorage_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class NotifyObjectCompleteResult
  {
  public:
    AWS_BACKUPSTORAGE_API NotifyObjectCompleteResult();
    AWS_BACKUPSTORAGE_API NotifyObjectCompleteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BACKUPSTORAGE_API NotifyObjectCompleteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * Object checksum
     */
    inline const Aws::String& GetObjectChecksum() const{ return m_objectChecksum; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const Aws::String& value) { m_objectChecksum = value; }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(Aws::String&& value) { m_objectChecksum = std::move(value); }

    /**
     * Object checksum
     */
    inline void SetObjectChecksum(const char* value) { m_objectChecksum.assign(value); }

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteResult& WithObjectChecksum(const Aws::String& value) { SetObjectChecksum(value); return *this;}

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteResult& WithObjectChecksum(Aws::String&& value) { SetObjectChecksum(std::move(value)); return *this;}

    /**
     * Object checksum
     */
    inline NotifyObjectCompleteResult& WithObjectChecksum(const char* value) { SetObjectChecksum(value); return *this;}


    /**
     * Checksum algorithm
     */
    inline const SummaryChecksumAlgorithm& GetObjectChecksumAlgorithm() const{ return m_objectChecksumAlgorithm; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { m_objectChecksumAlgorithm = value; }

    /**
     * Checksum algorithm
     */
    inline void SetObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { m_objectChecksumAlgorithm = std::move(value); }

    /**
     * Checksum algorithm
     */
    inline NotifyObjectCompleteResult& WithObjectChecksumAlgorithm(const SummaryChecksumAlgorithm& value) { SetObjectChecksumAlgorithm(value); return *this;}

    /**
     * Checksum algorithm
     */
    inline NotifyObjectCompleteResult& WithObjectChecksumAlgorithm(SummaryChecksumAlgorithm&& value) { SetObjectChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_objectChecksum;

    SummaryChecksumAlgorithm m_objectChecksumAlgorithm;
  };

} // namespace Model
} // namespace BackupStorage
} // namespace Aws
