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
    AWS_CONTROLTOWER_API LandingZoneDetail();
    AWS_CONTROLTOWER_API LandingZoneDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API LandingZoneDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONTROLTOWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneDetail& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneDetail& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the landing zone.</p>
     */
    inline LandingZoneDetail& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline const LandingZoneDriftStatusSummary& GetDriftStatus() const{ return m_driftStatus; }

    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline bool DriftStatusHasBeenSet() const { return m_driftStatusHasBeenSet; }

    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline void SetDriftStatus(const LandingZoneDriftStatusSummary& value) { m_driftStatusHasBeenSet = true; m_driftStatus = value; }

    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline void SetDriftStatus(LandingZoneDriftStatusSummary&& value) { m_driftStatusHasBeenSet = true; m_driftStatus = std::move(value); }

    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline LandingZoneDetail& WithDriftStatus(const LandingZoneDriftStatusSummary& value) { SetDriftStatus(value); return *this;}

    /**
     * <p>The drift status of the landing zone.</p>
     */
    inline LandingZoneDetail& WithDriftStatus(LandingZoneDriftStatusSummary&& value) { SetDriftStatus(std::move(value)); return *this;}


    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline const Aws::String& GetLatestAvailableVersion() const{ return m_latestAvailableVersion; }

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline bool LatestAvailableVersionHasBeenSet() const { return m_latestAvailableVersionHasBeenSet; }

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline void SetLatestAvailableVersion(const Aws::String& value) { m_latestAvailableVersionHasBeenSet = true; m_latestAvailableVersion = value; }

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline void SetLatestAvailableVersion(Aws::String&& value) { m_latestAvailableVersionHasBeenSet = true; m_latestAvailableVersion = std::move(value); }

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline void SetLatestAvailableVersion(const char* value) { m_latestAvailableVersionHasBeenSet = true; m_latestAvailableVersion.assign(value); }

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline LandingZoneDetail& WithLatestAvailableVersion(const Aws::String& value) { SetLatestAvailableVersion(value); return *this;}

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline LandingZoneDetail& WithLatestAvailableVersion(Aws::String&& value) { SetLatestAvailableVersion(std::move(value)); return *this;}

    /**
     * <p>The latest available version of the landing zone.</p>
     */
    inline LandingZoneDetail& WithLatestAvailableVersion(const char* value) { SetLatestAvailableVersion(value); return *this;}


    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline Aws::Utils::DocumentView GetManifest() const{ return m_manifest; }

    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline bool ManifestHasBeenSet() const { return m_manifestHasBeenSet; }

    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline void SetManifest(const Aws::Utils::Document& value) { m_manifestHasBeenSet = true; m_manifest = value; }

    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline void SetManifest(Aws::Utils::Document&& value) { m_manifestHasBeenSet = true; m_manifest = std::move(value); }

    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline LandingZoneDetail& WithManifest(const Aws::Utils::Document& value) { SetManifest(value); return *this;}

    /**
     * <p>The landing zone <code>manifest.yaml</code> text file that specifies the
     * landing zone configurations. </p>
     */
    inline LandingZoneDetail& WithManifest(Aws::Utils::Document&& value) { SetManifest(std::move(value)); return *this;}


    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline const LandingZoneStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline void SetStatus(const LandingZoneStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline void SetStatus(LandingZoneStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline LandingZoneDetail& WithStatus(const LandingZoneStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The landing zone deployment status. One of <code>ACTIVE</code>,
     * <code>PROCESSING</code>, <code>FAILED</code>.</p>
     */
    inline LandingZoneDetail& WithStatus(LandingZoneStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline LandingZoneDetail& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline LandingZoneDetail& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The landing zone's current deployed version.</p>
     */
    inline LandingZoneDetail& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    LandingZoneDriftStatusSummary m_driftStatus;
    bool m_driftStatusHasBeenSet = false;

    Aws::String m_latestAvailableVersion;
    bool m_latestAvailableVersionHasBeenSet = false;

    Aws::Utils::Document m_manifest;
    bool m_manifestHasBeenSet = false;

    LandingZoneStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace ControlTower
} // namespace Aws
