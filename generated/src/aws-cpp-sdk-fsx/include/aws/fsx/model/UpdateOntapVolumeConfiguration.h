/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SecurityStyle.h>
#include <aws/fsx/model/TieringPolicy.h>
#include <aws/fsx/model/UpdateSnaplockConfiguration.h>
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
   * <p>Used to specify changes to the ONTAP configuration for the volume you are
   * updating.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/UpdateOntapVolumeConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateOntapVolumeConfiguration
  {
  public:
    AWS_FSX_API UpdateOntapVolumeConfiguration() = default;
    AWS_FSX_API UpdateOntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API UpdateOntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const { return m_junctionPath; }
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }
    template<typename JunctionPathT = Aws::String>
    void SetJunctionPath(JunctionPathT&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::forward<JunctionPathT>(value); }
    template<typename JunctionPathT = Aws::String>
    UpdateOntapVolumeConfiguration& WithJunctionPath(JunctionPathT&& value) { SetJunctionPath(std::forward<JunctionPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>,
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline SecurityStyle GetSecurityStyle() const { return m_securityStyle; }
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }
    inline void SetSecurityStyle(SecurityStyle value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }
    inline UpdateOntapVolumeConfiguration& WithSecurityStyle(SecurityStyle value) { SetSecurityStyle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the size of the volume in megabytes.</p>
     */
    inline int GetSizeInMegabytes() const { return m_sizeInMegabytes; }
    inline bool SizeInMegabytesHasBeenSet() const { return m_sizeInMegabytesHasBeenSet; }
    inline void SetSizeInMegabytes(int value) { m_sizeInMegabytesHasBeenSet = true; m_sizeInMegabytes = value; }
    inline UpdateOntapVolumeConfiguration& WithSizeInMegabytes(int value) { SetSizeInMegabytes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default is <code>false</code>. Set to true to enable the deduplication,
     * compression, and compaction storage efficiency features on the volume.</p>
     */
    inline bool GetStorageEfficiencyEnabled() const { return m_storageEfficiencyEnabled; }
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }
    inline UpdateOntapVolumeConfiguration& WithStorageEfficiencyEnabled(bool value) { SetStorageEfficiencyEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline const TieringPolicy& GetTieringPolicy() const { return m_tieringPolicy; }
    inline bool TieringPolicyHasBeenSet() const { return m_tieringPolicyHasBeenSet; }
    template<typename TieringPolicyT = TieringPolicy>
    void SetTieringPolicy(TieringPolicyT&& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = std::forward<TieringPolicyT>(value); }
    template<typename TieringPolicyT = TieringPolicy>
    UpdateOntapVolumeConfiguration& WithTieringPolicy(TieringPolicyT&& value) { SetTieringPolicy(std::forward<TieringPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the snapshot policy for the volume. There are three built-in
     * snapshot policies:</p> <ul> <li> <p> <code>default</code>: This is the default
     * policy. A maximum of six hourly snapshots taken five minutes past the hour. A
     * maximum of two daily snapshots taken Monday through Saturday at 10 minutes after
     * midnight. A maximum of two weekly snapshots taken every Sunday at 15 minutes
     * after midnight.</p> </li> <li> <p> <code>default-1weekly</code>: This policy is
     * the same as the <code>default</code> policy except that it only retains one
     * snapshot from the weekly schedule.</p> </li> <li> <p> <code>none</code>: This
     * policy does not take any snapshots. This policy can be assigned to volumes to
     * prevent automatic snapshots from being taken.</p> </li> </ul> <p>You can also
     * provide the name of a custom policy that you created with the ONTAP CLI or REST
     * API.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/fsx/latest/ONTAPGuide/snapshots-ontap.html#snapshot-policies">Snapshot
     * policies</a> in the <i>Amazon FSx for NetApp ONTAP User Guide</i>.</p>
     */
    inline const Aws::String& GetSnapshotPolicy() const { return m_snapshotPolicy; }
    inline bool SnapshotPolicyHasBeenSet() const { return m_snapshotPolicyHasBeenSet; }
    template<typename SnapshotPolicyT = Aws::String>
    void SetSnapshotPolicy(SnapshotPolicyT&& value) { m_snapshotPolicyHasBeenSet = true; m_snapshotPolicy = std::forward<SnapshotPolicyT>(value); }
    template<typename SnapshotPolicyT = Aws::String>
    UpdateOntapVolumeConfiguration& WithSnapshotPolicy(SnapshotPolicyT&& value) { SetSnapshotPolicy(std::forward<SnapshotPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag indicating whether tags for the volume should be copied to
     * backups. This value defaults to false. If it's set to true, all tags for the
     * volume are copied to all automatic and user-initiated backups where the user
     * doesn't specify tags. If this value is true, and you specify one or more tags,
     * only the specified tags are copied to backups. If you specify one or more tags
     * when creating a user-initiated backup, no tags are copied from the volume,
     * regardless of this value.</p>
     */
    inline bool GetCopyTagsToBackups() const { return m_copyTagsToBackups; }
    inline bool CopyTagsToBackupsHasBeenSet() const { return m_copyTagsToBackupsHasBeenSet; }
    inline void SetCopyTagsToBackups(bool value) { m_copyTagsToBackupsHasBeenSet = true; m_copyTagsToBackups = value; }
    inline UpdateOntapVolumeConfiguration& WithCopyTagsToBackups(bool value) { SetCopyTagsToBackups(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration object for updating the SnapLock configuration of an FSx
     * for ONTAP SnapLock volume. </p>
     */
    inline const UpdateSnaplockConfiguration& GetSnaplockConfiguration() const { return m_snaplockConfiguration; }
    inline bool SnaplockConfigurationHasBeenSet() const { return m_snaplockConfigurationHasBeenSet; }
    template<typename SnaplockConfigurationT = UpdateSnaplockConfiguration>
    void SetSnaplockConfiguration(SnaplockConfigurationT&& value) { m_snaplockConfigurationHasBeenSet = true; m_snaplockConfiguration = std::forward<SnaplockConfigurationT>(value); }
    template<typename SnaplockConfigurationT = UpdateSnaplockConfiguration>
    UpdateOntapVolumeConfiguration& WithSnaplockConfiguration(SnaplockConfigurationT&& value) { SetSnaplockConfiguration(std::forward<SnaplockConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configured size of the volume, in bytes.</p>
     */
    inline long long GetSizeInBytes() const { return m_sizeInBytes; }
    inline bool SizeInBytesHasBeenSet() const { return m_sizeInBytesHasBeenSet; }
    inline void SetSizeInBytes(long long value) { m_sizeInBytesHasBeenSet = true; m_sizeInBytes = value; }
    inline UpdateOntapVolumeConfiguration& WithSizeInBytes(long long value) { SetSizeInBytes(value); return *this;}
    ///@}
  private:

    Aws::String m_junctionPath;
    bool m_junctionPathHasBeenSet = false;

    SecurityStyle m_securityStyle{SecurityStyle::NOT_SET};
    bool m_securityStyleHasBeenSet = false;

    int m_sizeInMegabytes{0};
    bool m_sizeInMegabytesHasBeenSet = false;

    bool m_storageEfficiencyEnabled{false};
    bool m_storageEfficiencyEnabledHasBeenSet = false;

    TieringPolicy m_tieringPolicy;
    bool m_tieringPolicyHasBeenSet = false;

    Aws::String m_snapshotPolicy;
    bool m_snapshotPolicyHasBeenSet = false;

    bool m_copyTagsToBackups{false};
    bool m_copyTagsToBackupsHasBeenSet = false;

    UpdateSnaplockConfiguration m_snaplockConfiguration;
    bool m_snaplockConfigurationHasBeenSet = false;

    long long m_sizeInBytes{0};
    bool m_sizeInBytesHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
