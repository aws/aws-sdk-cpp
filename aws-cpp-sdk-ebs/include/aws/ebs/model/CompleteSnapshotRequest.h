/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <aws/ebs/model/ChecksumAggregationMethod.h>
#include <utility>

namespace Aws
{
namespace EBS
{
namespace Model
{

  /**
   */
  class CompleteSnapshotRequest : public EBSRequest
  {
  public:
    AWS_EBS_API CompleteSnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteSnapshot"; }

    AWS_EBS_API Aws::String SerializePayload() const override;

    AWS_EBS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CompleteSnapshotRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CompleteSnapshotRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline CompleteSnapshotRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The number of blocks that were written to the snapshot.</p>
     */
    inline int GetChangedBlocksCount() const{ return m_changedBlocksCount; }

    /**
     * <p>The number of blocks that were written to the snapshot.</p>
     */
    inline bool ChangedBlocksCountHasBeenSet() const { return m_changedBlocksCountHasBeenSet; }

    /**
     * <p>The number of blocks that were written to the snapshot.</p>
     */
    inline void SetChangedBlocksCount(int value) { m_changedBlocksCountHasBeenSet = true; m_changedBlocksCount = value; }

    /**
     * <p>The number of blocks that were written to the snapshot.</p>
     */
    inline CompleteSnapshotRequest& WithChangedBlocksCount(int value) { SetChangedBlocksCount(value); return *this;}


    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline CompleteSnapshotRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline CompleteSnapshotRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline CompleteSnapshotRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline const ChecksumAlgorithm& GetChecksumAlgorithm() const{ return m_checksumAlgorithm; }

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline void SetChecksumAlgorithm(const ChecksumAlgorithm& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline void SetChecksumAlgorithm(ChecksumAlgorithm&& value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = std::move(value); }

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline CompleteSnapshotRequest& WithChecksumAlgorithm(const ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline CompleteSnapshotRequest& WithChecksumAlgorithm(ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}


    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline const ChecksumAggregationMethod& GetChecksumAggregationMethod() const{ return m_checksumAggregationMethod; }

    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline bool ChecksumAggregationMethodHasBeenSet() const { return m_checksumAggregationMethodHasBeenSet; }

    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline void SetChecksumAggregationMethod(const ChecksumAggregationMethod& value) { m_checksumAggregationMethodHasBeenSet = true; m_checksumAggregationMethod = value; }

    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline void SetChecksumAggregationMethod(ChecksumAggregationMethod&& value) { m_checksumAggregationMethodHasBeenSet = true; m_checksumAggregationMethod = std::move(value); }

    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline CompleteSnapshotRequest& WithChecksumAggregationMethod(const ChecksumAggregationMethod& value) { SetChecksumAggregationMethod(value); return *this;}

    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline CompleteSnapshotRequest& WithChecksumAggregationMethod(ChecksumAggregationMethod&& value) { SetChecksumAggregationMethod(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_changedBlocksCount;
    bool m_changedBlocksCountHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumAggregationMethod m_checksumAggregationMethod;
    bool m_checksumAggregationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
