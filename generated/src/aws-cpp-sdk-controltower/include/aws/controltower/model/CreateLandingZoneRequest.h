/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class CreateLandingZoneRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API CreateLandingZoneRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLandingZone"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The manifest JSON file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/lz-api-launch">Launch
     * your landing zone</a>. </p>
     */
    inline Aws::Utils::DocumentView GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::Utils::Document>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::Utils::Document>
    CreateLandingZoneRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateLandingZoneRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateLandingZoneRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    CreateLandingZoneRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
