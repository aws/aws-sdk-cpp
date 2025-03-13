/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class RestoreSnapshotTierRequest : public EC2Request
  {
  public:
    AWS_EC2_API RestoreSnapshotTierRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RestoreSnapshotTier"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the snapshot to restore.</p>
     */
    inline const Aws::String& GetSnapshotId() const { return m_snapshotId; }
    inline bool SnapshotIdHasBeenSet() const { return m_snapshotIdHasBeenSet; }
    template<typename SnapshotIdT = Aws::String>
    void SetSnapshotId(SnapshotIdT&& value) { m_snapshotIdHasBeenSet = true; m_snapshotId = std::forward<SnapshotIdT>(value); }
    template<typename SnapshotIdT = Aws::String>
    RestoreSnapshotTierRequest& WithSnapshotId(SnapshotIdT&& value) { SetSnapshotId(std::forward<SnapshotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the number of days for which to temporarily restore an archived
     * snapshot. Required for temporary restores only. The snapshot will be
     * automatically re-archived after this period.</p> <p>To temporarily restore an
     * archived snapshot, specify the number of days and omit the
     * <b>PermanentRestore</b> parameter or set it to <code>false</code>.</p>
     */
    inline int GetTemporaryRestoreDays() const { return m_temporaryRestoreDays; }
    inline bool TemporaryRestoreDaysHasBeenSet() const { return m_temporaryRestoreDaysHasBeenSet; }
    inline void SetTemporaryRestoreDays(int value) { m_temporaryRestoreDaysHasBeenSet = true; m_temporaryRestoreDays = value; }
    inline RestoreSnapshotTierRequest& WithTemporaryRestoreDays(int value) { SetTemporaryRestoreDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to permanently restore an archived snapshot. To permanently
     * restore an archived snapshot, specify <code>true</code> and omit the
     * <b>RestoreSnapshotTierRequest$TemporaryRestoreDays</b> parameter.</p>
     */
    inline bool GetPermanentRestore() const { return m_permanentRestore; }
    inline bool PermanentRestoreHasBeenSet() const { return m_permanentRestoreHasBeenSet; }
    inline void SetPermanentRestore(bool value) { m_permanentRestoreHasBeenSet = true; m_permanentRestore = value; }
    inline RestoreSnapshotTierRequest& WithPermanentRestore(bool value) { SetPermanentRestore(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline RestoreSnapshotTierRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_snapshotId;
    bool m_snapshotIdHasBeenSet = false;

    int m_temporaryRestoreDays{0};
    bool m_temporaryRestoreDaysHasBeenSet = false;

    bool m_permanentRestore{false};
    bool m_permanentRestoreHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
