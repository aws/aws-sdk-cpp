/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/Tag.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p> <b>[Snapshot and AMI policies only]</b> Specifies optional parameters for
   * snapshot and AMI policies. The set of valid parameters depends on the
   * combination of policy type and target resource type.</p> <p>If you choose to
   * exclude boot volumes and you specify tags that consequently exclude all of the
   * additional data volumes attached to an instance, then Amazon Data Lifecycle
   * Manager will not create any snapshots for the affected instance, and it will
   * emit a <code>SnapshotsCreateFailed</code> Amazon CloudWatch metric. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/monitor-dlm-cw-metrics.html">Monitor
   * your policies using Amazon CloudWatch</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Parameters">AWS API
   * Reference</a></p>
   */
  class Parameters
  {
  public:
    AWS_DLM_API Parameters();
    AWS_DLM_API Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>[Snapshot policies that target instances only]</b> Indicates whether to
     * exclude the root volume from multi-volume snapshot sets. The default is
     * <code>false</code>. If you specify <code>true</code>, then the root volumes
     * attached to targeted instances will be excluded from the multi-volume snapshot
     * sets created by the policy.</p>
     */
    inline bool GetExcludeBootVolume() const{ return m_excludeBootVolume; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> Indicates whether to
     * exclude the root volume from multi-volume snapshot sets. The default is
     * <code>false</code>. If you specify <code>true</code>, then the root volumes
     * attached to targeted instances will be excluded from the multi-volume snapshot
     * sets created by the policy.</p>
     */
    inline bool ExcludeBootVolumeHasBeenSet() const { return m_excludeBootVolumeHasBeenSet; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> Indicates whether to
     * exclude the root volume from multi-volume snapshot sets. The default is
     * <code>false</code>. If you specify <code>true</code>, then the root volumes
     * attached to targeted instances will be excluded from the multi-volume snapshot
     * sets created by the policy.</p>
     */
    inline void SetExcludeBootVolume(bool value) { m_excludeBootVolumeHasBeenSet = true; m_excludeBootVolume = value; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> Indicates whether to
     * exclude the root volume from multi-volume snapshot sets. The default is
     * <code>false</code>. If you specify <code>true</code>, then the root volumes
     * attached to targeted instances will be excluded from the multi-volume snapshot
     * sets created by the policy.</p>
     */
    inline Parameters& WithExcludeBootVolume(bool value) { SetExcludeBootVolume(value); return *this;}


    /**
     * <p> <b>[AMI policies only]</b> Indicates whether targeted instances are rebooted
     * when the lifecycle policy runs. <code>true</code> indicates that targeted
     * instances are not rebooted when the policy runs. <code>false</code> indicates
     * that target instances are rebooted when the policy runs. The default is
     * <code>true</code> (instances are not rebooted).</p>
     */
    inline bool GetNoReboot() const{ return m_noReboot; }

    /**
     * <p> <b>[AMI policies only]</b> Indicates whether targeted instances are rebooted
     * when the lifecycle policy runs. <code>true</code> indicates that targeted
     * instances are not rebooted when the policy runs. <code>false</code> indicates
     * that target instances are rebooted when the policy runs. The default is
     * <code>true</code> (instances are not rebooted).</p>
     */
    inline bool NoRebootHasBeenSet() const { return m_noRebootHasBeenSet; }

    /**
     * <p> <b>[AMI policies only]</b> Indicates whether targeted instances are rebooted
     * when the lifecycle policy runs. <code>true</code> indicates that targeted
     * instances are not rebooted when the policy runs. <code>false</code> indicates
     * that target instances are rebooted when the policy runs. The default is
     * <code>true</code> (instances are not rebooted).</p>
     */
    inline void SetNoReboot(bool value) { m_noRebootHasBeenSet = true; m_noReboot = value; }

    /**
     * <p> <b>[AMI policies only]</b> Indicates whether targeted instances are rebooted
     * when the lifecycle policy runs. <code>true</code> indicates that targeted
     * instances are not rebooted when the policy runs. <code>false</code> indicates
     * that target instances are rebooted when the policy runs. The default is
     * <code>true</code> (instances are not rebooted).</p>
     */
    inline Parameters& WithNoReboot(bool value) { SetNoReboot(value); return *this;}


    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline const Aws::Vector<Tag>& GetExcludeDataVolumeTags() const{ return m_excludeDataVolumeTags; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline bool ExcludeDataVolumeTagsHasBeenSet() const { return m_excludeDataVolumeTagsHasBeenSet; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline void SetExcludeDataVolumeTags(const Aws::Vector<Tag>& value) { m_excludeDataVolumeTagsHasBeenSet = true; m_excludeDataVolumeTags = value; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline void SetExcludeDataVolumeTags(Aws::Vector<Tag>&& value) { m_excludeDataVolumeTagsHasBeenSet = true; m_excludeDataVolumeTags = std::move(value); }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline Parameters& WithExcludeDataVolumeTags(const Aws::Vector<Tag>& value) { SetExcludeDataVolumeTags(value); return *this;}

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline Parameters& WithExcludeDataVolumeTags(Aws::Vector<Tag>&& value) { SetExcludeDataVolumeTags(std::move(value)); return *this;}

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline Parameters& AddExcludeDataVolumeTags(const Tag& value) { m_excludeDataVolumeTagsHasBeenSet = true; m_excludeDataVolumeTags.push_back(value); return *this; }

    /**
     * <p> <b>[Snapshot policies that target instances only]</b> The tags used to
     * identify data (non-root) volumes to exclude from multi-volume snapshot sets.</p>
     * <p>If you create a snapshot lifecycle policy that targets instances and you
     * specify tags for this parameter, then data volumes with the specified tags that
     * are attached to targeted instances will be excluded from the multi-volume
     * snapshot sets created by the policy.</p>
     */
    inline Parameters& AddExcludeDataVolumeTags(Tag&& value) { m_excludeDataVolumeTagsHasBeenSet = true; m_excludeDataVolumeTags.push_back(std::move(value)); return *this; }

  private:

    bool m_excludeBootVolume;
    bool m_excludeBootVolumeHasBeenSet = false;

    bool m_noReboot;
    bool m_noRebootHasBeenSet = false;

    Aws::Vector<Tag> m_excludeDataVolumeTags;
    bool m_excludeDataVolumeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
