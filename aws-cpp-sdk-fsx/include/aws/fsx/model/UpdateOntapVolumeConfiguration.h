/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/SecurityStyle.h>
#include <aws/fsx/model/TieringPolicy.h>
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
  class AWS_FSX_API UpdateOntapVolumeConfiguration
  {
  public:
    UpdateOntapVolumeConfiguration();
    UpdateOntapVolumeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    UpdateOntapVolumeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline const Aws::String& GetJunctionPath() const{ return m_junctionPath; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline bool JunctionPathHasBeenSet() const { return m_junctionPathHasBeenSet; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const Aws::String& value) { m_junctionPathHasBeenSet = true; m_junctionPath = value; }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(Aws::String&& value) { m_junctionPathHasBeenSet = true; m_junctionPath = std::move(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline void SetJunctionPath(const char* value) { m_junctionPathHasBeenSet = true; m_junctionPath.assign(value); }

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithJunctionPath(const Aws::String& value) { SetJunctionPath(value); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithJunctionPath(Aws::String&& value) { SetJunctionPath(std::move(value)); return *this;}

    /**
     * <p>Specifies the location in the SVM's namespace where the volume is mounted.
     * The <code>JunctionPath</code> must have a leading forward slash, such as
     * <code>/vol3</code>.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithJunctionPath(const char* value) { SetJunctionPath(value); return *this;}


    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline const SecurityStyle& GetSecurityStyle() const{ return m_securityStyle; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline bool SecurityStyleHasBeenSet() const { return m_securityStyleHasBeenSet; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline void SetSecurityStyle(const SecurityStyle& value) { m_securityStyleHasBeenSet = true; m_securityStyle = value; }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline void SetSecurityStyle(SecurityStyle&& value) { m_securityStyleHasBeenSet = true; m_securityStyle = std::move(value); }

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithSecurityStyle(const SecurityStyle& value) { SetSecurityStyle(value); return *this;}

    /**
     * <p>The security style for the volume, which can be <code>UNIX</code>.
     * <code>NTFS</code>, or <code>MIXED</code>.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithSecurityStyle(SecurityStyle&& value) { SetSecurityStyle(std::move(value)); return *this;}


    /**
     * <p>Specifies the size of the volume in megabytes.</p>
     */
    inline int GetSizeInMegabytes() const{ return m_sizeInMegabytes; }

    /**
     * <p>Specifies the size of the volume in megabytes.</p>
     */
    inline bool SizeInMegabytesHasBeenSet() const { return m_sizeInMegabytesHasBeenSet; }

    /**
     * <p>Specifies the size of the volume in megabytes.</p>
     */
    inline void SetSizeInMegabytes(int value) { m_sizeInMegabytesHasBeenSet = true; m_sizeInMegabytes = value; }

    /**
     * <p>Specifies the size of the volume in megabytes.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithSizeInMegabytes(int value) { SetSizeInMegabytes(value); return *this;}


    /**
     * <p>Default is <code>false</code>. Set to true to enable the deduplication,
     * compression, and compaction storage efficiency features on the volume.</p>
     */
    inline bool GetStorageEfficiencyEnabled() const{ return m_storageEfficiencyEnabled; }

    /**
     * <p>Default is <code>false</code>. Set to true to enable the deduplication,
     * compression, and compaction storage efficiency features on the volume.</p>
     */
    inline bool StorageEfficiencyEnabledHasBeenSet() const { return m_storageEfficiencyEnabledHasBeenSet; }

    /**
     * <p>Default is <code>false</code>. Set to true to enable the deduplication,
     * compression, and compaction storage efficiency features on the volume.</p>
     */
    inline void SetStorageEfficiencyEnabled(bool value) { m_storageEfficiencyEnabledHasBeenSet = true; m_storageEfficiencyEnabled = value; }

    /**
     * <p>Default is <code>false</code>. Set to true to enable the deduplication,
     * compression, and compaction storage efficiency features on the volume.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithStorageEfficiencyEnabled(bool value) { SetStorageEfficiencyEnabled(value); return *this;}


    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline const TieringPolicy& GetTieringPolicy() const{ return m_tieringPolicy; }

    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline bool TieringPolicyHasBeenSet() const { return m_tieringPolicyHasBeenSet; }

    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline void SetTieringPolicy(const TieringPolicy& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = value; }

    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline void SetTieringPolicy(TieringPolicy&& value) { m_tieringPolicyHasBeenSet = true; m_tieringPolicy = std::move(value); }

    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithTieringPolicy(const TieringPolicy& value) { SetTieringPolicy(value); return *this;}

    /**
     * <p>Update the volume's data tiering policy.</p>
     */
    inline UpdateOntapVolumeConfiguration& WithTieringPolicy(TieringPolicy&& value) { SetTieringPolicy(std::move(value)); return *this;}

  private:

    Aws::String m_junctionPath;
    bool m_junctionPathHasBeenSet = false;

    SecurityStyle m_securityStyle;
    bool m_securityStyleHasBeenSet = false;

    int m_sizeInMegabytes;
    bool m_sizeInMegabytesHasBeenSet = false;

    bool m_storageEfficiencyEnabled;
    bool m_storageEfficiencyEnabledHasBeenSet = false;

    TieringPolicy m_tieringPolicy;
    bool m_tieringPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
