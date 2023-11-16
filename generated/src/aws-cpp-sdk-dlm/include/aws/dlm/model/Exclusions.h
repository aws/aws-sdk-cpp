/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p> <b>[Default policies only]</b> Specifies exclusion parameters for volumes or
   * instances for which you do not want to create snapshots or AMIs. The policy will
   * not create snapshots or AMIs for target resources that match any of the
   * specified exclusion parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/Exclusions">AWS API
   * Reference</a></p>
   */
  class Exclusions
  {
  public:
    AWS_DLM_API Exclusions();
    AWS_DLM_API Exclusions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Exclusions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Indicates whether to
     * exclude volumes that are attached to instances as the boot volume. If you
     * exclude boot volumes, only volumes attached as data (non-boot) volumes will be
     * backed up by the policy. To exclude boot volumes, specify <code>true</code>.</p>
     */
    inline bool GetExcludeBootVolumes() const{ return m_excludeBootVolumes; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Indicates whether to
     * exclude volumes that are attached to instances as the boot volume. If you
     * exclude boot volumes, only volumes attached as data (non-boot) volumes will be
     * backed up by the policy. To exclude boot volumes, specify <code>true</code>.</p>
     */
    inline bool ExcludeBootVolumesHasBeenSet() const { return m_excludeBootVolumesHasBeenSet; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Indicates whether to
     * exclude volumes that are attached to instances as the boot volume. If you
     * exclude boot volumes, only volumes attached as data (non-boot) volumes will be
     * backed up by the policy. To exclude boot volumes, specify <code>true</code>.</p>
     */
    inline void SetExcludeBootVolumes(bool value) { m_excludeBootVolumesHasBeenSet = true; m_excludeBootVolumes = value; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Indicates whether to
     * exclude volumes that are attached to instances as the boot volume. If you
     * exclude boot volumes, only volumes attached as data (non-boot) volumes will be
     * backed up by the policy. To exclude boot volumes, specify <code>true</code>.</p>
     */
    inline Exclusions& WithExcludeBootVolumes(bool value) { SetExcludeBootVolumes(value); return *this;}


    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeVolumeTypes() const{ return m_excludeVolumeTypes; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline bool ExcludeVolumeTypesHasBeenSet() const { return m_excludeVolumeTypesHasBeenSet; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline void SetExcludeVolumeTypes(const Aws::Vector<Aws::String>& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes = value; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline void SetExcludeVolumeTypes(Aws::Vector<Aws::String>&& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes = std::move(value); }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline Exclusions& WithExcludeVolumeTypes(const Aws::Vector<Aws::String>& value) { SetExcludeVolumeTypes(value); return *this;}

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline Exclusions& WithExcludeVolumeTypes(Aws::Vector<Aws::String>&& value) { SetExcludeVolumeTypes(std::move(value)); return *this;}

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline Exclusions& AddExcludeVolumeTypes(const Aws::String& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes.push_back(value); return *this; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline Exclusions& AddExcludeVolumeTypes(Aws::String&& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes.push_back(std::move(value)); return *this; }

    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline Exclusions& AddExcludeVolumeTypes(const char* value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes.push_back(value); return *this; }


    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline const Aws::Vector<Tag>& GetExcludeTags() const{ return m_excludeTags; }

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline bool ExcludeTagsHasBeenSet() const { return m_excludeTagsHasBeenSet; }

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline void SetExcludeTags(const Aws::Vector<Tag>& value) { m_excludeTagsHasBeenSet = true; m_excludeTags = value; }

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline void SetExcludeTags(Aws::Vector<Tag>&& value) { m_excludeTagsHasBeenSet = true; m_excludeTags = std::move(value); }

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline Exclusions& WithExcludeTags(const Aws::Vector<Tag>& value) { SetExcludeTags(value); return *this;}

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline Exclusions& WithExcludeTags(Aws::Vector<Tag>&& value) { SetExcludeTags(std::move(value)); return *this;}

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline Exclusions& AddExcludeTags(const Tag& value) { m_excludeTagsHasBeenSet = true; m_excludeTags.push_back(value); return *this; }

    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline Exclusions& AddExcludeTags(Tag&& value) { m_excludeTagsHasBeenSet = true; m_excludeTags.push_back(std::move(value)); return *this; }

  private:

    bool m_excludeBootVolumes;
    bool m_excludeBootVolumesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeVolumeTypes;
    bool m_excludeVolumeTypesHasBeenSet = false;

    Aws::Vector<Tag> m_excludeTags;
    bool m_excludeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
