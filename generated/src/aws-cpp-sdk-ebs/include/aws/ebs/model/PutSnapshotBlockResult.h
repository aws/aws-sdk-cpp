/**
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


    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksum = value; }

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksum = std::move(value); }

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline void SetChecksum(const char* value) { m_checksum.assign(value); }

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline PutSnapshotBlockResult& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline PutSnapshotBlockResult& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>The SHA256 checksum generated for the block data by Amazon EBS.</p>
     */
    inline PutSnapshotBlockResult& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline const ChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline void SetChecksumAlgorithm(const ChecksumAlgorithm& value) { m_checksumAlgorithm = value; }

    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline void SetChecksumAlgorithm(ChecksumAlgorithm&& value) { m_checksumAlgorithm = std::move(value); }

    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline PutSnapshotBlockResult& WithChecksumAlgorithm(const ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used by Amazon EBS to generate the checksum.</p>
     */
    inline PutSnapshotBlockResult& WithChecksumAlgorithm(ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_checksum;

    ChecksumAlgorithm m_checksumAlgorithm;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
