/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/controltower/model/LandingZoneDriftStatusSummary.h>
#include <aws/core/utils/Document.h>
#include <aws/controltower/model/LandingZoneStatus.h>
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
namespace ControlTower
{
namespace Model
{

  /**
   * <p>Information about the landing zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/LandingZoneDetail">AWS
   * API Reference</a></p>
   */
  class LandingZoneDetail
  {
  public:
    AWS_CONTROLTOWER_API LandingZoneDetail() = default;
    AWS_CONTROLTOWER_API LandingZoneDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    LandingZoneDetail& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline const LandingZoneDriftStatusSummary& GetDriftStatus() const { return m_driftStatus; }
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }
    template<typename DriftStatusT = LandingZoneDriftStatusSummary>
    void SetDriftStatus(DriftStatusT&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::forward<DriftStatusT>(value); }
    template<typename DriftStatusT = LandingZoneDriftStatusSummary>
    LandingZoneDetail& WithDriftStatus(DriftStatusT&& value) { SetDriftStatus(std::forward<DriftStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline const Aws::String& GetLatestAvailableVersion() const { return m_latestAvailableVersion; }
    inline bool LatestAvailableVersionHasBeenSet() const { return m_latestAvailableVersionHasBeenSet; }
    template<typename LatestAvailableVersionT = Aws::String>
    void SetLatestAvailableVersion(LatestAvailableVersionT&& value) { m_latestAvailableVersionHasBeenSet = true; m_latestAvailableVersion = std::forward<LatestAvailableVersionT>(value); }
    template<typename LatestAvailableVersionT = Aws::String>
    LandingZoneDetail& WithLatestAvailableVersion(LatestAvailableVersionT&& value) { SetLatestAvailableVersion(std::forward<LatestAvailableVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone manifest JSON text file that specifies the landing zone
     * configurations. </p>
     */
    inline Aws::Utils::DocumentView GetManifest() const { return m_manifest; }
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }
    template<typename ManifestT = Aws::Utils::Document>
    void SetManifest(ManifestT&& value) { m_manifestHasBeenSet = true; m_manifest = std::forward<ManifestT>(value); }
    template<typename ManifestT = Aws::Utils::Document>
    LandingZoneDetail& WithManifest(ManifestT&& value) { SetManifest(std::forward<ManifestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline LandingZoneStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LandingZoneStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LandingZoneDetail& WithStatus(LandingZoneStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    LandingZoneDetail& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LandingZoneDriftStatusSummary m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::String m_latestAvailableVersion;
    bool m_latestAvailableVersionHasBeenSet = false;

    Aws::Utils::Document m_manifest;
    bool m_manifestHasBeenSet = false;

    LandingZoneStatus m_status{LandingZoneStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
