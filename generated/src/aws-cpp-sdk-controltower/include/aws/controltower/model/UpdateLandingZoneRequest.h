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
    AWS_CONTROLTOWER_API UpdateLandingZoneRequest() = default;

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
    inline const Aws::String& GetLandingZoneIdentifier() const { return m_landingZoneIdentifier; }
    inline bool LandingZoneIdentifierHasBeenSet() const { return m_landingZoneIdentifierHasBeenSet; }
    template<typename LandingZoneIdentifierT = Aws::String>
    void SetLandingZoneIdentifier(LandingZoneIdentifierT&& value) { m_landingZoneIdentifierHasBeenSet = true; m_landingZoneIdentifier = std::forward<LandingZoneIdentifierT>(value); }
    template<typename LandingZoneIdentifierT = Aws::String>
    UpdateLandingZoneRequest& WithLandingZoneIdentifier(LandingZoneIdentifierT&& value) { SetLandingZoneIdentifier(std::forward<LandingZoneIdentifierT>(value)); return *this;}
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
    inline Aws::Utils::DocumentView GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::Utils::Document>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::Utils::Document>
    UpdateLandingZoneRequest& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone version, for example, 3.2.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    UpdateLandingZoneRequest& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
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
