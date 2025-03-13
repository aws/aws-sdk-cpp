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
    AWS_FSX_API DeleteVolumeOntapConfiguration() = default;
    AWS_FSX_API DeleteVolumeOntapConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API DeleteVolumeOntapConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Set to true if you want to skip taking a final backup of the volume you are
     * deleting.</p>
     */
    inline bool GetSkipFinalBackup() const { return m_skipFinalBackup; }
    inline bool SkipFinalBackupHasBeenSet() const { return m_skipFinalBackupHasBeenSet; }
    inline void SetSkipFinalBackup(bool value) { m_skipFinalBackupHasBeenSet = true; m_skipFinalBackup = value; }
    inline DeleteVolumeOntapConfiguration& WithSkipFinalBackup(bool value) { SetSkipFinalBackup(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetFinalBackupTags() const { return m_finalBackupTags; }
    inline bool FinalBackupTagsHasBeenSet() const { return m_finalBackupTagsHasBeenSet; }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    void SetFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags = std::forward<FinalBackupTagsT>(value); }
    template<typename FinalBackupTagsT = Aws::Vector<Tag>>
    DeleteVolumeOntapConfiguration& WithFinalBackupTags(FinalBackupTagsT&& value) { SetFinalBackupTags(std::forward<FinalBackupTagsT>(value)); return *this;}
    template<typename FinalBackupTagsT = Tag>
    DeleteVolumeOntapConfiguration& AddFinalBackupTags(FinalBackupTagsT&& value) { m_finalBackupTagsHasBeenSet = true; m_finalBackupTags.emplace_back(std::forward<FinalBackupTagsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline bool GetBypassSnaplockEnterpriseRetention() const { return m_bypassSnaplockEnterpriseRetention; }
    inline bool BypassSnaplockEnterpriseRetentionHasBeenSet() const { return m_bypassSnaplockEnterpriseRetentionHasBeenSet; }
    inline void SetBypassSnaplockEnterpriseRetention(bool value) { m_bypassSnaplockEnterpriseRetentionHasBeenSet = true; m_bypassSnaplockEnterpriseRetention = value; }
    inline DeleteVolumeOntapConfiguration& WithBypassSnaplockEnterpriseRetention(bool value) { SetBypassSnaplockEnterpriseRetention(value); return *this;}
    ///@}
  private:

    bool m_skipFinalBackup{false};
    bool m_skipFinalBackupHasBeenSet = false;

    Aws::Vector<Tag> m_finalBackupTags;
    bool m_finalBackupTagsHasBeenSet = false;

    bool m_bypassSnaplockEnterpriseRetention{false};
    bool m_bypassSnaplockEnterpriseRetentionHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
