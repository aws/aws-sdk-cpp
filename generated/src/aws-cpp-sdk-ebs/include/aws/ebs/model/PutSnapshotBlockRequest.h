/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <aws/ebs/model/ChecksumAlgorithm.h>
#include <utility>

namespace Aws
{
namespace EBS
{
namespace Model
{

  /**
   */
  class PutSnapshotBlockRequest : public StreamingEBSRequest
  {
  public:
    AWS_EBS_API PutSnapshotBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutSnapshotBlock"; }

    AWS_EBS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    AWS_EBS_API bool SignBody() const override { return false; }


    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline PutSnapshotBlockRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline PutSnapshotBlockRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>  <p>If the specified snapshot is
     * encrypted, you must have permission to use the KMS key that was used to encrypt
     * the snapshot. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>..</p>
     * 
     */
    inline PutSnapshotBlockRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The block index of the block in which to write the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline int GetBlockIndex() const{ return m_blockIndex; }

    /**
     * <p>The block index of the block in which to write the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline bool BlockIndexHasBeenSet() const { return m_blockIndexHasBeenSet; }

    /**
     * <p>The block index of the block in which to write the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline void SetBlockIndex(int value) { m_blockIndexHasBeenSet = true; m_blockIndex = value; }

    /**
     * <p>The block index of the block in which to write the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline PutSnapshotBlockRequest& WithBlockIndex(int value) { SetBlockIndex(value); return *this;}


    /**
     * <p>The size of the data to write to the block, in bytes. Currently, the only
     * supported size is <code>524288</code> bytes.</p> <p>Valid values:
     * <code>524288</code> </p>
     */
    inline int GetDataLength() const{ return m_dataLength; }

    /**
     * <p>The size of the data to write to the block, in bytes. Currently, the only
     * supported size is <code>524288</code> bytes.</p> <p>Valid values:
     * <code>524288</code> </p>
     */
    inline bool DataLengthHasBeenSet() const { return m_dataLengthHasBeenSet; }

    /**
     * <p>The size of the data to write to the block, in bytes. Currently, the only
     * supported size is <code>524288</code> bytes.</p> <p>Valid values:
     * <code>524288</code> </p>
     */
    inline void SetDataLength(int value) { m_dataLengthHasBeenSet = true; m_dataLength = value; }

    /**
     * <p>The size of the data to write to the block, in bytes. Currently, the only
     * supported size is <code>524288</code> bytes.</p> <p>Valid values:
     * <code>524288</code> </p>
     */
    inline PutSnapshotBlockRequest& WithDataLength(int value) { SetDataLength(value); return *this;}


    /**
     * <p>The progress of the write process, as a percentage.</p>
     */
    inline int GetProgress() const{ return m_progress; }

    /**
     * <p>The progress of the write process, as a percentage.</p>
     */
    inline bool ProgressHasBeenSet() const { return m_progressHasBeenSet; }

    /**
     * <p>The progress of the write process, as a percentage.</p>
     */
    inline void SetProgress(int value) { m_progressHasBeenSet = true; m_progress = value; }

    /**
     * <p>The progress of the write process, as a percentage.</p>
     */
    inline PutSnapshotBlockRequest& WithProgress(int value) { SetProgress(value); return *this;}


    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline const Aws::String& GetChecksum() const{ return m_checksum; }

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline void SetChecksum(const Aws::String& value) { m_checksumHasBeenSet = true; m_checksum = value; }

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline void SetChecksum(Aws::String&& value) { m_checksumHasBeenSet = true; m_checksum = std::move(value); }

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline void SetChecksum(const char* value) { m_checksumHasBeenSet = true; m_checksum.assign(value); }

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline PutSnapshotBlockRequest& WithChecksum(const Aws::String& value) { SetChecksum(value); return *this;}

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline PutSnapshotBlockRequest& WithChecksum(Aws::String&& value) { SetChecksum(std::move(value)); return *this;}

    /**
     * <p>A Base64-encoded SHA256 checksum of the data. Only SHA256 checksums are
     * supported.</p>
     */
    inline PutSnapshotBlockRequest& WithChecksum(const char* value) { SetChecksum(value); return *this;}


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
    inline PutSnapshotBlockRequest& WithChecksumAlgorithm(const ChecksumAlgorithm& value) { SetChecksumAlgorithm(value); return *this;}

    /**
     * <p>The algorithm used to generate the checksum. Currently, the only supported
     * algorithm is <code>SHA256</code>.</p>
     */
    inline PutSnapshotBlockRequest& WithChecksumAlgorithm(ChecksumAlgorithm&& value) { SetChecksumAlgorithm(std::move(value)); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_blockIndex;
    bool m_blockIndexHasBeenSet = false;


    int m_dataLength;
    bool m_dataLengthHasBeenSet = false;

    int m_progress;
    bool m_progressHasBeenSet = false;

    Aws::String m_checksum;
    bool m_checksumHasBeenSet = false;

    ChecksumAlgorithm m_checksumAlgorithm;
    bool m_checksumAlgorithmHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
