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
    AWS_CONTROLTOWER_API CreateLandingZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLandingZone"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline Aws::Utils::DocumentView GetManifest() const{ return m_manifest; }

    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }

    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline void SetManifest(const Aws::Utils::Document& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline void SetManifest(Aws::Utils::Document&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }

    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline CreateLandingZoneRequest& WithManifest(const Aws::Utils::Document& value) { SetManifest(value); return *this;}

    /**
     * <p>The manifest.yaml file is a text file that describes your Amazon Web Services
     * resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>. </p>
     */
    inline CreateLandingZoneRequest& WithManifest(Aws::Utils::Document&& value) { SetManifest(std::move(value)); return *this;}


    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags to be applied to the landing zone. </p>
     */
    inline CreateLandingZoneRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline CreateLandingZoneRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline CreateLandingZoneRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The landing zone version, for example, 3.0.</p>
     */
    inline CreateLandingZoneRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

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
