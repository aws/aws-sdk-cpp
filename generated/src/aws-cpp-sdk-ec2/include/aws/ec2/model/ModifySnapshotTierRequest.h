/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TargetStorageTier.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifySnapshotTierRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifySnapshotTierRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifySnapshotTier"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline ModifySnapshotTierRequest& WithSnapshotId(const Aws::String& value) { SetSnapshotId(value); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotTierRequest& WithSnapshotId(Aws::String&& value) { SetSnapshotId(std::move(value)); return *this;}

    /**
     * <p>The ID of the snapshot.</p>
     */
    inline ModifySnapshotTierRequest& WithSnapshotId(const char* value) { SetSnapshotId(value); return *this;}


    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline const TargetStorageTier& GetStorageTier() const{ return m_storageTier; }

    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline bool StorageTierHasBeenSet() const { return m_storageTierHasBeenSet; }

    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline void SetStorageTier(const TargetStorageTier& value) { m_storageTierHasBeenSet = true; m_storageTier = value; }

    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline void SetStorageTier(TargetStorageTier&& value) { m_storageTierHasBeenSet = true; m_storageTier = std::move(value); }

    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline ModifySnapshotTierRequest& WithStorageTier(const TargetStorageTier& value) { SetStorageTier(value); return *this;}

    /**
     * <p>The name of the storage tier. You must specify <code>archive</code>.</p>
     */
    inline ModifySnapshotTierRequest& WithStorageTier(TargetStorageTier&& value) { SetStorageTier(std::move(value)); return *this;}


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ModifySnapshotTierRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    TargetStorageTier m_storageTier;
    bool m_storageTierHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
