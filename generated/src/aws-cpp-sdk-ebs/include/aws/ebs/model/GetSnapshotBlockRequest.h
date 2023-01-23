/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ebs/EBS_EXPORTS.h>
#include <aws/ebs/EBSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EBS
{
namespace Model
{

  /**
   */
  class GetSnapshotBlockRequest : public EBSRequest
  {
  public:
    AWS_EBS_API GetSnapshotBlockRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSnapshotBlock"; }

    AWS_EBS_API Aws::String SerializePayload() const override;

    AWS_EBS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline const Aws::String& GetSnapshotId() const{ return m_snapshotId; }

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetSnapshotId(const Aws::String& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = value; }

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetSnapshotId(Aws::String&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::move(value); }

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline void SetSnapshotId(const char* value) { m_snapshotIdHasBeenSet = true; m_snapshotId.assign(value); }

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline GetSnapshotBlockRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline GetSnapshotBlockRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot containing the block from which to get data.</p>
     *  <p>If the specified snapshot is encrypted, you must have permission
     * to use the KMS key that was used to encrypt the snapshot. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/ebsapis-using-encryption.html">
     * Using encryption</a> in the <i>Amazon Elastic Compute Cloud User Guide</i>.</p>
     * 
     */
    inline GetSnapshotBlockRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The block index of the block in which to read the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline int GetBlockIndex() const{ return m_blockIndex; }

    /**
     * <p>The block index of the block in which to read the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline bool BlockIndexHasBeenSet() const { return m_blockIndexHasBeenSet; }

    /**
     * <p>The block index of the block in which to read the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline void SetBlockIndex(int value) { m_blockIndexHasBeenSet = true; m_blockIndex = value; }

    /**
     * <p>The block index of the block in which to read the data. A block index is a
     * logical index in units of <code>512</code> KiB blocks. To identify the block
     * index, divide the logical offset of the data in the logical volume by the block
     * size (logical offset of data/<code>524288</code>). The logical offset of the
     * data must be <code>512</code> KiB aligned.</p>
     */
    inline GetSnapshotBlockRequest& WithBlockIndex(int value) { SetBlockIndex(value); return *this;}


    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline const Aws::String& GetBlockToken() const{ return m_blockToken; }

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline bool BlockTokenHasBeenSet() const { return m_blockTokenHasBeenSet; }

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline void SetBlockToken(const Aws::String& value) { m_blockTokenHasBeenSet = true; m_blockToken = value; }

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline void SetBlockToken(Aws::String&& value) { m_blockTokenHasBeenSet = true; m_blockToken = std::move(value); }

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline void SetBlockToken(const char* value) { m_blockTokenHasBeenSet = true; m_blockToken.assign(value); }

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline GetSnapshotBlockRequest& WithBlockToken(const Aws::String& value) { SetBlockToken(value); return *this;}

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline GetSnapshotBlockRequest& WithBlockToken(Aws::String&& value) { SetBlockToken(std::move(value)); return *this;}

    /**
     * <p>The block token of the block from which to get data. You can obtain the
     * <code>BlockToken</code> by running the <code>ListChangedBlocks</code> or
     * <code>ListSnapshotBlocks</code> operations.</p>
     */
    inline GetSnapshotBlockRequest& WithBlockToken(const char* value) { SetBlockToken(value); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_blockIndex;
    bool m_blockIndexHasBeenSet = false;

    Aws::String m_blockToken;
    bool m_blockTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EBS
} // namespace Aws
