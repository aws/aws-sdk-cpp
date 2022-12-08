/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/EoCloudCoverInput.h>
#include <aws/sagemaker-geospatial/model/LandsatCloudCoverLandInput.h>
#include <aws/sagemaker-geospatial/model/PlatformInput.h>
#include <aws/sagemaker-geospatial/model/ViewOffNadirInput.h>
#include <aws/sagemaker-geospatial/model/ViewSunAzimuthInput.h>
#include <aws/sagemaker-geospatial/model/ViewSunElevationInput.h>
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
namespace SageMakerGeospatial
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-geospatial-2020-05-27/Property">AWS
   * API Reference</a></p>
   */
  class Property
  {
  public:
    AWS_SAGEMAKERGEOSPATIAL_API Property();
    AWS_SAGEMAKERGEOSPATIAL_API Property(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Property& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKERGEOSPATIAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p/>
     */
    inline const EoCloudCoverInput& GetEoCloudCover() const{ return m_eoCloudCover; }

    /**
     * <p/>
     */
    inline bool EoCloudCoverHasBeenSet() const { return m_eoCloudCoverHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetEoCloudCover(const EoCloudCoverInput& value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = value; }

    /**
     * <p/>
     */
    inline void SetEoCloudCover(EoCloudCoverInput&& value) { m_eoCloudCoverHasBeenSet = true; m_eoCloudCover = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithEoCloudCover(const EoCloudCoverInput& value) { SetEoCloudCover(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithEoCloudCover(EoCloudCoverInput&& value) { SetEoCloudCover(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const LandsatCloudCoverLandInput& GetLandsatCloudCoverLand() const{ return m_landsatCloudCoverLand; }

    /**
     * <p/>
     */
    inline bool LandsatCloudCoverLandHasBeenSet() const { return m_landsatCloudCoverLandHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetLandsatCloudCoverLand(const LandsatCloudCoverLandInput& value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = value; }

    /**
     * <p/>
     */
    inline void SetLandsatCloudCoverLand(LandsatCloudCoverLandInput&& value) { m_landsatCloudCoverLandHasBeenSet = true; m_landsatCloudCoverLand = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithLandsatCloudCoverLand(const LandsatCloudCoverLandInput& value) { SetLandsatCloudCoverLand(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithLandsatCloudCoverLand(LandsatCloudCoverLandInput&& value) { SetLandsatCloudCoverLand(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const PlatformInput& GetPlatform() const{ return m_platform; }

    /**
     * <p/>
     */
    inline bool PlatformHasBeenSet() const { return m_platformHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPlatform(const PlatformInput& value) { m_platformHasBeenSet = true; m_platform = value; }

    /**
     * <p/>
     */
    inline void SetPlatform(PlatformInput&& value) { m_platformHasBeenSet = true; m_platform = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithPlatform(const PlatformInput& value) { SetPlatform(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithPlatform(PlatformInput&& value) { SetPlatform(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ViewOffNadirInput& GetViewOffNadir() const{ return m_viewOffNadir; }

    /**
     * <p/>
     */
    inline bool ViewOffNadirHasBeenSet() const { return m_viewOffNadirHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewOffNadir(const ViewOffNadirInput& value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = value; }

    /**
     * <p/>
     */
    inline void SetViewOffNadir(ViewOffNadirInput&& value) { m_viewOffNadirHasBeenSet = true; m_viewOffNadir = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithViewOffNadir(const ViewOffNadirInput& value) { SetViewOffNadir(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithViewOffNadir(ViewOffNadirInput&& value) { SetViewOffNadir(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ViewSunAzimuthInput& GetViewSunAzimuth() const{ return m_viewSunAzimuth; }

    /**
     * <p/>
     */
    inline bool ViewSunAzimuthHasBeenSet() const { return m_viewSunAzimuthHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewSunAzimuth(const ViewSunAzimuthInput& value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = value; }

    /**
     * <p/>
     */
    inline void SetViewSunAzimuth(ViewSunAzimuthInput&& value) { m_viewSunAzimuthHasBeenSet = true; m_viewSunAzimuth = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithViewSunAzimuth(const ViewSunAzimuthInput& value) { SetViewSunAzimuth(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithViewSunAzimuth(ViewSunAzimuthInput&& value) { SetViewSunAzimuth(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const ViewSunElevationInput& GetViewSunElevation() const{ return m_viewSunElevation; }

    /**
     * <p/>
     */
    inline bool ViewSunElevationHasBeenSet() const { return m_viewSunElevationHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetViewSunElevation(const ViewSunElevationInput& value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = value; }

    /**
     * <p/>
     */
    inline void SetViewSunElevation(ViewSunElevationInput&& value) { m_viewSunElevationHasBeenSet = true; m_viewSunElevation = std::move(value); }

    /**
     * <p/>
     */
    inline Property& WithViewSunElevation(const ViewSunElevationInput& value) { SetViewSunElevation(value); return *this;}

    /**
     * <p/>
     */
    inline Property& WithViewSunElevation(ViewSunElevationInput&& value) { SetViewSunElevation(std::move(value)); return *this;}

  private:

    EoCloudCoverInput m_eoCloudCover;
    bool m_eoCloudCoverHasBeenSet = false;

    LandsatCloudCoverLandInput m_landsatCloudCoverLand;
    bool m_landsatCloudCoverLandHasBeenSet = false;

    PlatformInput m_platform;
    bool m_platformHasBeenSet = false;

    ViewOffNadirInput m_viewOffNadir;
    bool m_viewOffNadirHasBeenSet = false;

    ViewSunAzimuthInput m_viewSunAzimuth;
    bool m_viewSunAzimuthHasBeenSet = false;

    ViewSunElevationInput m_viewSunElevation;
    bool m_viewSunElevationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMakerGeospatial
} // namespace Aws
