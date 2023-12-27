/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/model/Tag.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace FSx
{
namespace Model
{

  /**
   * <p>Use to specify skipping a final backup, adding tags to a final backup, or
   * bypassing the retention period of an FSx for ONTAP SnapLock Enterprise volume
   * when deleting an FSx for ONTAP volume. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/DeleteVolumeOntapConfiguration">AWS
   * API Reference</a></p>
   */
  class DeleteVolumeOntapConfiguration
  {
  public:
    AWS_FSX_API DeleteVolumeOntapConfiguration();
    AWS_FSX_API DeleteVolumeOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteVolumeOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline bool GetSkipFinalBackup() const{ return m_skipFinalBackup; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }

    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline DeleteVolumeOntapConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}


    
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const{ return m_finalBackupTags; }

    
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }

    
    inline void SetFinalBackupTags(const Aws::Vector<Tag>& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = value; }

    
    inline void SetFinalBackupTags(Aws::Vector<Tag>&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::move(value); }

    
    inline DeleteVolumeOntapConfiguration& WithFinalBackupTags(const Aws::Vector<Tag>& value) { SetFinalBackupTags(value); return *this;}

    
    inline DeleteVolumeOntapConfiguration& WithFinalBackupTags(Aws::Vector<Tag>&& value) { SetFinalBackupTags(std::move(value)); return *this;}

    
    inline DeleteVolumeOntapConfiguration& AddFinalBackupTags(const Tag& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(value); return *this; }

    
    inline DeleteVolumeOntapConfiguration& AddFinalBackupTags(Tag&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.push_back(std::move(value)); return *this; }


    /**
     * <p>Setting this to <code>true</code> allows a SnapLock administrator to delete
     * an FSx for ONTAP SnapLock Enterprise volume with unexpired write once, read many
     * (WORM) files. The IAM permission
     * <code>fsx:BypassSnaplockEnterpriseRetention</code> is also required to delete
     * SnapLock Enterprise volumes with unexpired WORM files. The default value is
     * <code>false</code>. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-delete-volume.html">
     * Deleting a SnapLock volume</a>. </p>
     */
    inline bool GetBypassSnaplockEnterpriseRetention() const{ return m_bypassSnaplockEnterpriseRetention; }

    /**
     * <p>Setting this to <code>true</code> allows a SnapLock administrator to delete
     * an FSx for ONTAP SnapLock Enterprise volume with unexpired write once, read many
     * (WORM) files. The IAM permission
     * <code>fsx:BypassSnaplockEnterpriseRetention</code> is also required to delete
     * SnapLock Enterprise volumes with unexpired WORM files. The default value is
     * <code>false</code>. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-delete-volume.html">
     * Deleting a SnapLock volume</a>. </p>
     */
    inline bool BypassSnaplockEnterpriseRetentionHasBeenSet() const { return m_bypassSnaplockEnterpriseRetentionHasBeenSet; }

    /**
     * <p>Setting this to <code>true</code> allows a SnapLock administrator to delete
     * an FSx for ONTAP SnapLock Enterprise volume with unexpired write once, read many
     * (WORM) files. The IAM permission
     * <code>fsx:BypassSnaplockEnterpriseRetention</code> is also required to delete
     * SnapLock Enterprise volumes with unexpired WORM files. The default value is
     * <code>false</code>. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-delete-volume.html">
     * Deleting a SnapLock volume</a>. </p>
     */
    inline void SetBypassSnaplockEnterpriseRetention(bool value) { m_bypassSnaplockEnterpriseRetentionHasBeenSet = true; m_bypassSnaplockEnterpriseRetention = value; }

    /**
     * <p>Setting this to <code>true</code> allows a SnapLock administrator to delete
     * an FSx for ONTAP SnapLock Enterprise volume with unexpired write once, read many
     * (WORM) files. The IAM permission
     * <code>fsx:BypassSnaplockEnterpriseRetention</code> is also required to delete
     * SnapLock Enterprise volumes with unexpired WORM files. The default value is
     * <code>false</code>. </p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snaplock-delete-volume.html">
     * Deleting a SnapLock volume</a>. </p>
     */
    inline DeleteVolumeOntapConfiguration& WithBypassSnaplockEnterpriseRetention(bool value) { SetBypassSnaplockEnterpriseRetention(value); return *this;}

  private:

    bool m_skipFinalBackup;
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;

    bool m_bypassSnaplockEnterpriseRetention;
    bool m_bypassSnaplockEnterpriseRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
