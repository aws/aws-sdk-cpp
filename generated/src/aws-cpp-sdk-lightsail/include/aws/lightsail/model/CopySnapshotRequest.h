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
    AWS_LIGHTSAIL_API CopySnapshotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CopySnapshot"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceSnapshotName() const{ return m_sourceSnapshotName; }

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline bool SourceSnapshotNameHasBeenSet() const { return m_sourceSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline void SetSourceSnapshotName(const Aws::String& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = value; }

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline void SetSourceSnapshotName(Aws::String&& value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName = std::move(value); }

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline void SetSourceSnapshotName(const char* value) { m_sourceSnapshotNameHasBeenSet = true; m_sourceSnapshotName.assign(value); }

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const Aws::String& value) { SetSourceSnapshotName(value); return *this;}

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(Aws::String&& value) { SetSourceSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the source manual snapshot to copy.</p> <p>Constraint:</p> <ul>
     * <li> <p>Define this parameter only when copying a manual snapshot as another
     * manual snapshot.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceSnapshotName(const char* value) { SetSourceSnapshotName(value); return *this;}


    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceResourceName() const{ return m_sourceResourceName; }

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool SourceResourceNameHasBeenSet() const { return m_sourceResourceNameHasBeenSet; }

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceResourceName(const Aws::String& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = value; }

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceResourceName(Aws::String&& value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName = std::move(value); }

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetSourceResourceName(const char* value) { m_sourceResourceNameHasBeenSet = true; m_sourceResourceName.assign(value); }

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceResourceName(const Aws::String& value) { SetSourceResourceName(value); return *this;}

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceResourceName(Aws::String&& value) { SetSourceResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the source instance or disk from which the source automatic
     * snapshot was created.</p> <p>Constraint:</p> <ul> <li> <p>Define this parameter
     * only when copying an automatic snapshot as a manual snapshot. For more
     * information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithSourceResourceName(const char* value) { SetSourceResourceName(value); return *this;}


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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline const Aws::String& GetRestoreDate() const{ return m_restoreDate; }

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool RestoreDateHasBeenSet() const { return m_restoreDateHasBeenSet; }

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(const Aws::String& value) { m_restoreDateHasBeenSet = true; m_restoreDate = value; }

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(Aws::String&& value) { m_restoreDateHasBeenSet = true; m_restoreDate = std::move(value); }

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetRestoreDate(const char* value) { m_restoreDateHasBeenSet = true; m_restoreDate.assign(value); }

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithRestoreDate(const Aws::String& value) { SetRestoreDate(value); return *this;}

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithRestoreDate(Aws::String&& value) { SetRestoreDate(std::move(value)); return *this;}

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
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithRestoreDate(const char* value) { SetRestoreDate(value); return *this;}


    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot of the specified source instance or disk.</p> <p>Constraints:</p> <ul>
     * <li> <p>This parameter cannot be defined together with the <code>restore
     * date</code> parameter. The <code>use latest restorable auto snapshot</code> and
     * <code>restore date</code> parameters are mutually exclusive.</p> </li> <li>
     * <p>Define this parameter only when copying an automatic snapshot as a manual
     * snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool GetUseLatestRestorableAutoSnapshot() const{ return m_useLatestRestorableAutoSnapshot; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot of the specified source instance or disk.</p> <p>Constraints:</p> <ul>
     * <li> <p>This parameter cannot be defined together with the <code>restore
     * date</code> parameter. The <code>use latest restorable auto snapshot</code> and
     * <code>restore date</code> parameters are mutually exclusive.</p> </li> <li>
     * <p>Define this parameter only when copying an automatic snapshot as a manual
     * snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline bool UseLatestRestorableAutoSnapshotHasBeenSet() const { return m_useLatestRestorableAutoSnapshotHasBeenSet; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot of the specified source instance or disk.</p> <p>Constraints:</p> <ul>
     * <li> <p>This parameter cannot be defined together with the <code>restore
     * date</code> parameter. The <code>use latest restorable auto snapshot</code> and
     * <code>restore date</code> parameters are mutually exclusive.</p> </li> <li>
     * <p>Define this parameter only when copying an automatic snapshot as a manual
     * snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline void SetUseLatestRestorableAutoSnapshot(bool value) { m_useLatestRestorableAutoSnapshotHasBeenSet = true; m_useLatestRestorableAutoSnapshot = value; }

    /**
     * <p>A Boolean value to indicate whether to use the latest available automatic
     * snapshot of the specified source instance or disk.</p> <p>Constraints:</p> <ul>
     * <li> <p>This parameter cannot be defined together with the <code>restore
     * date</code> parameter. The <code>use latest restorable auto snapshot</code> and
     * <code>restore date</code> parameters are mutually exclusive.</p> </li> <li>
     * <p>Define this parameter only when copying an automatic snapshot as a manual
     * snapshot. For more information, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-keeping-automatic-snapshots">Amazon
     * Lightsail Developer Guide</a>.</p> </li> </ul>
     */
    inline CopySnapshotRequest& WithUseLatestRestorableAutoSnapshot(bool value) { SetUseLatestRestorableAutoSnapshot(value); return *this;}


    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline const Aws::String& GetTargetSnapshotName() const{ return m_targetSnapshotName; }

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline bool TargetSnapshotNameHasBeenSet() const { return m_targetSnapshotNameHasBeenSet; }

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(const Aws::String& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = value; }

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(Aws::String&& value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName = std::move(value); }

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline void SetTargetSnapshotName(const char* value) { m_targetSnapshotNameHasBeenSet = true; m_targetSnapshotName.assign(value); }

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const Aws::String& value) { SetTargetSnapshotName(value); return *this;}

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(Aws::String&& value) { SetTargetSnapshotName(std::move(value)); return *this;}

    /**
     * <p>The name of the new manual snapshot to be created as a copy.</p>
     */
    inline CopySnapshotRequest& WithTargetSnapshotName(const char* value) { SetTargetSnapshotName(value); return *this;}


    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline const RegionName& GetSourceRegion() const{ return m_sourceRegion; }

    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline bool SourceRegionHasBeenSet() const { return m_sourceRegionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline void SetSourceRegion(const RegionName& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = value; }

    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline void SetSourceRegion(RegionName&& value) { m_sourceRegionHasBeenSet = true; m_sourceRegion = std::move(value); }

    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(const RegionName& value) { SetSourceRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region where the source manual or automatic snapshot
     * is located.</p>
     */
    inline CopySnapshotRequest& WithSourceRegion(RegionName&& value) { SetSourceRegion(std::move(value)); return *this;}

  private:

    Aws::String m_sourceSnapshotName;
    bool m_sourceSnapshotNameHasBeenSet = false;

    Aws::String m_sourceResourceName;
    bool m_sourceResourceNameHasBeenSet = false;

    Aws::String m_restoreDate;
    bool m_restoreDateHasBeenSet = false;

    bool m_useLatestRestorableAutoSnapshot;
    bool m_useLatestRestorableAutoSnapshotHasBeenSet = false;

    Aws::String m_targetSnapshotName;
    bool m_targetSnapshotNameHasBeenSet = false;

    RegionName m_sourceRegion;
    bool m_sourceRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
