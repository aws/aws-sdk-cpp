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
    AWS_EBS_API CompleteSnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteSnapshot"; }

    AWS_EBS_API Aws::String SerializePayload() const override;

    AWS_EBS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the snapshot.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    CompleteSnapshotRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of blocks that were written to the snapshot.</p>
     */
    inline int GetChangedBlocksCount() const { return m_changedBlocksCount; }
    inline bool ChangedBlocksCountHasBeenSet() const { return m_changedBlocksCountHasBeenSet; }
    inline void SetChangedBlocksCount(int value) { m_changedBlocksCountHasBeenSet = true; m_changedBlocksCount = value; }
    inline CompleteSnapshotRequest& WithChangedBlocksCount(int value) { SetChangedBlocksCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregated Base-64 SHA256 checksum based on the checksums of each written
     * block.</p> <p>To generate the aggregated checksum using the linear aggregation
     * method, arrange the checksums for each written block in ascending order of their
     * block index, concatenate them to form a single string, and then generate the
     * checksum on the entire string using the SHA256 algorithm.</p>
     */
    inline const Aws::String& GetChecksum() const { return m_checksum; }
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
    template<typename ChecksumT = Aws::String>
    void SetChecksum(ChecksumT&& value) { m_checksumHasBeenSet = true; m_checksum = std::forward<ChecksumT>(value); }
    template<typename ChecksumT = Aws::String>
    CompleteSnapshotRequest& WithChecksum(ChecksumT&& value) { SetChecksum(std::forward<ChecksumT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
    inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
    inline void SetChecksumAlgorithm(ChecksumAlgorithm value) { m_checksumAlgorithmHasBeenSet = true; m_checksumAlgorithm = value; }
    inline CompleteSnapshotRequest& WithChecksumAlgorithm(ChecksumAlgorithm value) { SetChecksumAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation method used to generate the checksum. Currently, the only
     * supported aggregation method is <code>LINEAR</code>.</p>
     */
    inline ChecksumAggregationMethod GetChecksumAggregationMethod() const { return m_checksumAggregationMethod; }
    inline bool ChecksumAggregationMethodHasBeenSet() const { return m_checksumAggregationMethodHasBeenSet; }
    inline void SetChecksumAggregationMethod(ChecksumAggregationMethod value) { m_checksumAggregationMethodHasBeenSet = true; m_checksumAggregationMethod = value; }
    inline CompleteSnapshotRequest& WithChecksumAggregationMethod(ChecksumAggregationMethod value) { SetChecksumAggregationMethod(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_changedBlocksCount{0};
    bool m_changedBlocksCountHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
    bool m_checksumAlgorithmHasBeenSet = false;

    ChecksumAggregationMethod m_checksumAggregationMethod{ChecksumAggregationMethod::NOT_SET};
    bool m_checksumAggregationMethodHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
