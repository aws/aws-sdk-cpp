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
    AWS_DLM_API Exclusions() = default;
    AWS_DLM_API Exclusions(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Exclusions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DLM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Indicates whether to
     * exclude volumes that are attached to instances as the boot volume. If you
     * exclude boot volumes, only volumes attached as data (non-boot) volumes will be
     * backed up by the policy. To exclude boot volumes, specify <code>true</code>.</p>
     */
    inline bool GetExcludeBootVolumes() const { return m_excludeBootVolumes; }
    inline bool ExcludeBootVolumesHasBeenSet() const { return m_excludeBootVolumesHasBeenSet; }
    inline void SetExcludeBootVolumes(bool value) { m_excludeBootVolumesHasBeenSet = true; m_excludeBootVolumes = value; }
    inline Exclusions& WithExcludeBootVolumes(bool value) { SetExcludeBootVolumes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies for EBS snapshots only]</b> Specifies the volume types
     * to exclude. Volumes of the specified types will not be targeted by the
     * policy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExcludeVolumeTypes() const { return m_excludeVolumeTypes; }
    inline bool ExcludeVolumeTypesHasBeenSet() const { return m_excludeVolumeTypesHasBeenSet; }
    template<typename ExcludeVolumeTypesT = Aws::Vector<Aws::String>>
    void SetExcludeVolumeTypes(ExcludeVolumeTypesT&& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes = std::forward<ExcludeVolumeTypesT>(value); }
    template<typename ExcludeVolumeTypesT = Aws::Vector<Aws::String>>
    Exclusions& WithExcludeVolumeTypes(ExcludeVolumeTypesT&& value) { SetExcludeVolumeTypes(std::forward<ExcludeVolumeTypesT>(value)); return *this;}
    template<typename ExcludeVolumeTypesT = Aws::String>
    Exclusions& AddExcludeVolumeTypes(ExcludeVolumeTypesT&& value) { m_excludeVolumeTypesHasBeenSet = true; m_excludeVolumeTypes.emplace_back(std::forward<ExcludeVolumeTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> <b>[Default policies for EBS-backed AMIs only]</b> Specifies whether to
     * exclude volumes that have specific tags. </p>
     */
    inline const Aws::Vector<Tag>& GetExcludeTags() const { return m_excludeTags; }
    inline bool ExcludeTagsHasBeenSet() const { return m_excludeTagsHasBeenSet; }
    template<typename ExcludeTagsT = Aws::Vector<Tag>>
    void SetExcludeTags(ExcludeTagsT&& value) { m_excludeTagsHasBeenSet = true; m_excludeTags = std::forward<ExcludeTagsT>(value); }
    template<typename ExcludeTagsT = Aws::Vector<Tag>>
    Exclusions& WithExcludeTags(ExcludeTagsT&& value) { SetExcludeTags(std::forward<ExcludeTagsT>(value)); return *this;}
    template<typename ExcludeTagsT = Tag>
    Exclusions& AddExcludeTags(ExcludeTagsT&& value) { m_excludeTagsHasBeenSet = true; m_excludeTags.emplace_back(std::forward<ExcludeTagsT>(value)); return *this; }
    ///@}
  private:

    bool m_excludeBootVolumes{false};
    bool m_excludeBootVolumesHasBeenSet = false;

    Aws::Vector<Aws::String> m_excludeVolumeTypes;
    bool m_excludeVolumeTypesHasBeenSet = false;

    Aws::Vector<Tag> m_excludeTags;
    bool m_excludeTagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
