/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/controltower/ControlTowerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <utility>

namespace Aws
{
namespace ControlTower
{
namespace Model
{

  /**
   */
  class UpdateLandingZoneRequest : public ControlTowerRequest
  {
  public:
    AWS_CONTROLTOWER_API UpdateLandingZoneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLandingZone"; }

    AWS_CONTROLTOWER_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline const Aws::String& GetLandingZoneIdentifier() const{ return m_landingZoneIdentifier; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline bool LandingZoneIdentifierHasBeenSet() const { return m_landingZoneIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(const Aws::String& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = value; }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(Aws::String&& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline void SetLandingZoneIdentifier(const char* value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(const Aws::String& value) { SetLandingZoneIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(Aws::String&& value) { SetLandingZoneIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(const char* value) { SetLandingZoneIdentifier(value); return *this;}


    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline Aws::Utils::DocumentView GetManifest() const{ return m_manifest; }

    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }

    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline void SetManifest(const Aws::Utils::Document& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline void SetManifest(Aws::Utils::Document&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }

    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline UpdateLandingZoneRequest& WithManifest(const Aws::Utils::Document& value) { SetManifest(value); return *this;}

    /**
     * <p>The <code>manifest.yaml</code> file is a text file that describes your Amazon
     * Web Services resources. For examples, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/the-manifest-file">The
     * manifest file</a>.</p>
     */
    inline UpdateLandingZoneRequest& WithManifest(Aws::Utils::Document&& value) { SetManifest(std::move(value)); return *this;}


    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline UpdateLandingZoneRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline UpdateLandingZoneRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline UpdateLandingZoneRequest& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_landingZoneIdentifier;
    bool m_landingZoneIdentifierHasBeenSet = false;

    Aws::Utils::Document m_manifest;
    bool m_manifestHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
