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


    ///@{
    /**
     * <p>The unique identifier of the landing zone.</p>
     */
    inline const Aws::String& GetLandingZoneIdentifier() const{ return m_landingZoneIdentifier; }
    inline bool LandingZoneIdentifierHasBeenSet() const { return m_landingZoneIdentifierHasBeenSet; }
    inline void SetLandingZoneIdentifier(const Aws::String& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = value; }
    inline void SetLandingZoneIdentifier(Aws::String&& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = std::move(value); }
    inline void SetLandingZoneIdentifier(const char* value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier.assign(value); }
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(const Aws::String& value) { SetLandingZoneIdentifier(value); return *this;}
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(Aws::String&& value) { SetLandingZoneIdentifier(std::move(value)); return *this;}
    inline UpdateLandingZoneRequest& WithLandingZoneIdentifier(const char* value) { SetLandingZoneIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The manifest file (JSON) is a text file that describes your Amazon Web
     * Services resources. For an example, review <a
     * href="https://docs.aws.amazon.com/controltower/latest/userguide/lz-api-launch">Launch
     * your landing zone</a>. The example manifest file contains each of the available
     * parameters. The schema for the landing zone's JSON manifest file is not
     * published, by design.</p>
     */
    inline Aws::Utils::DocumentView GetManifest() const{ return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    inline void SetManifest(const Aws::Utils::Document& value) { m_manifestHasBeenSet = true; m_manifest = value; }
    inline void SetManifest(Aws::Utils::Document&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }
    inline UpdateLandingZoneRequest& WithManifest(const Aws::Utils::Document& value) { SetManifest(value); return *this;}
    inline UpdateLandingZoneRequest& WithManifest(Aws::Utils::Document&& value) { SetManifest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline UpdateLandingZoneRequest& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline UpdateLandingZoneRequest& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline UpdateLandingZoneRequest& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}
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
