/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/RegionName.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CopySnapshotRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CopySnapshotRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotName() const { return m_sourceSnapshotName; }
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }
    template<typename SourceSnapshotNameT = Aws::String>
    void SetSourceSnapshotName(SourceSnapshotNameT&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::forward<SourceSnapshotNameT>(value); }
    template<typename SourceSnapshotNameT = Aws::String>
    CopySnapshotRequest& WithSourceSnapshotName(SourceSnapshotNameT&& value) { SetSourceSnapshotName(std::forward<SourceSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceResourceName() const { return m_sourceResourceName; }
    inline bool SourceResourceNameHasBeenSet() const { return m_sourceResourceNameHasBeenSet; }
    template<typename SourceResourceNameT = Aws::String>
    void SetSourceResourceName(SourceResourceNameT&& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = std::forward<SourceResourceNameT>(value); }
    template<typename SourceResourceNameT = Aws::String>
    CopySnapshotRequest& WithSourceResourceName(SourceResourceNameT&& value) { SetSourceResourceName(std::forward<SourceResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the source automatic snapshot to copy. Use the <code>get auto
     * snapshots</code> operation to identify the dates of the available automatic
     * snapshots.</p> <p>Constraints:</p> <ul> <li> <p>Must be specified in
     * <code>YYYY-MM-DD</code> format.</p> </li> <li> <p>This parameter cannot be
     * defined together with the <code>use latest restorable auto snapshot</code>
     * parameter. The <code>restore date</code> and <code>use latest restorable auto
     * snapshot</code> parameters are mutually exclusive.</p> </li> <li> <p>Define this
     * parameter only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const { return m_restoreDate; }
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }
    template<typename RestoreDateT = Aws::String>
    void SetRestoreDate(RestoreDateT&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::forward<RestoreDateT>(value); }
    template<typename RestoreDateT = Aws::String>
    CopySnapshotRequest& WithRestoreDate(RestoreDateT&& value) { SetRestoreDate(std::forward<RestoreDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot of the specified source instance or disk.</p> <p>Constraints:</p> <ul>
     * <li> <p>This parameter cannot be defined together with the <code>restore
     * date</code> parameter. The <code>use latest restorable auto snapshot</code> and
     * <code>restore date</code> parameters are mutually exclusive.</p> </li> <li>
     * <p>Define this parameter only when copying an automatic snapshot as a manual
     * snapshot. For more information, see the <a
     * href="https://docs.aws.amazon.com/lightsail/latest/userguide/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const { return m_useLatestRestorableAutoSnapshot; }
    inline bool UseLatestRestorableAutoSnapshotHasBeenSet() const { return m_useLatestRestorableAutoSnapshotHasBeenSet; }
    inline void SetUseLatestRestorableAutoSnapshot(bool value) { m_useLatestRestorableAutoSnapshotHasBeenSet = true; m_useLatestRestorableAutoSnapshot = value; }
    inline CopySnapshotRequest& WithUseLatestRestorableAutoSnapshot(bool value) { SetUseLatestRestorableAutoSnapshot(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline const Aws::String& GetTargetSnapshotName() const { return m_targetSnapshotName; }
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }
    template<typename TargetSnapshotNameT = Aws::String>
    void SetTargetSnapshotName(TargetSnapshotNameT&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::forward<TargetSnapshotNameT>(value); }
    template<typename TargetSnapshotNameT = Aws::String>
    CopySnapshotRequest& WithTargetSnapshotName(TargetSnapshotNameT&& value) { SetTargetSnapshotName(std::forward<TargetSnapshotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline RegionName GetSourceRegion() const { return m_sourceRegion; }
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }
    inline void SetSourceRegion(RegionName value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }
    inline CopySnapshotRequest& WithSourceRegion(RegionName value) { SetSourceRegion(value); return *this;}
    ///@}
  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet = false;

    Aws::String m_sourceResourceName;
    bool m_sourceResourceNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot{false};
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet = false;

    RegionName m_sourceRegion{RegionName::NOT_SET};
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
