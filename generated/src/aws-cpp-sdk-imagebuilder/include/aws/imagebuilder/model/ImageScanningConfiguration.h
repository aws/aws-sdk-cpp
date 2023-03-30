/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/EcrConfiguration.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Contains settings for Image Builder image resource and container image
   * scans.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ImageScanningConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageScanningConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API ImageScanningConfiguration();
    AWS_IMAGEBUILDER_API ImageScanningConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ImageScanningConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A setting that indicates whether Image Builder keeps a snapshot of the
     * vulnerability scans that Amazon Inspector runs against the build instance when
     * you create a new image.</p>
     */
    inline bool GetImageScanningEnabled() const{ return m_imageScanningEnabled; }

    /**
     * <p>A setting that indicates whether Image Builder keeps a snapshot of the
     * vulnerability scans that Amazon Inspector runs against the build instance when
     * you create a new image.</p>
     */
    inline bool ImageScanningEnabledHasBeenSet() const { return m_imageScanningEnabledHasBeenSet; }

    /**
     * <p>A setting that indicates whether Image Builder keeps a snapshot of the
     * vulnerability scans that Amazon Inspector runs against the build instance when
     * you create a new image.</p>
     */
    inline void SetImageScanningEnabled(bool value) { m_imageScanningEnabledHasBeenSet = true; m_imageScanningEnabled = value; }

    /**
     * <p>A setting that indicates whether Image Builder keeps a snapshot of the
     * vulnerability scans that Amazon Inspector runs against the build instance when
     * you create a new image.</p>
     */
    inline ImageScanningConfiguration& WithImageScanningEnabled(bool value) { SetImageScanningEnabled(value); return *this;}


    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline const EcrConfiguration& GetEcrConfiguration() const{ return m_ecrConfiguration; }

    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline bool EcrConfigurationHasBeenSet() const { return m_ecrConfigurationHasBeenSet; }

    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline void SetEcrConfiguration(const EcrConfiguration& value) { m_ecrConfigurationHasBeenSet = true; m_ecrConfiguration = value; }

    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline void SetEcrConfiguration(EcrConfiguration&& value) { m_ecrConfigurationHasBeenSet = true; m_ecrConfiguration = std::move(value); }

    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline ImageScanningConfiguration& WithEcrConfiguration(const EcrConfiguration& value) { SetEcrConfiguration(value); return *this;}

    /**
     * <p>Contains Amazon ECR settings for vulnerability scans.</p>
     */
    inline ImageScanningConfiguration& WithEcrConfiguration(EcrConfiguration&& value) { SetEcrConfiguration(std::move(value)); return *this;}

  private:

    bool m_imageScanningEnabled;
    bool m_imageScanningEnabledHasBeenSet = false;

    EcrConfiguration m_ecrConfiguration;
    bool m_ecrConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
