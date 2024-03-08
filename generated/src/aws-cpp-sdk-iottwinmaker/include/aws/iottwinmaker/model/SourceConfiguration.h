/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/SourceType.h>
#include <aws/iottwinmaker/model/S3SourceConfiguration.h>
#include <aws/iottwinmaker/model/IotSiteWiseSourceConfiguration.h>
#include <aws/iottwinmaker/model/IotTwinMakerSourceConfiguration.h>
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
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>The source configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/SourceConfiguration">AWS
   * API Reference</a></p>
   */
  class SourceConfiguration
  {
  public:
    AWS_IOTTWINMAKER_API SourceConfiguration();
    AWS_IOTTWINMAKER_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The source configuration type.</p>
     */
    inline const SourceType& GetType() const{ return m_type; }

    /**
     * <p>The source configuration type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The source configuration type.</p>
     */
    inline void SetType(const SourceType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The source configuration type.</p>
     */
    inline void SetType(SourceType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The source configuration type.</p>
     */
    inline SourceConfiguration& WithType(const SourceType& value) { SetType(value); return *this;}

    /**
     * <p>The source configuration type.</p>
     */
    inline SourceConfiguration& WithType(SourceType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline const S3SourceConfiguration& GetS3Configuration() const{ return m_s3Configuration; }

    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }

    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline void SetS3Configuration(const S3SourceConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }

    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline void SetS3Configuration(S3SourceConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }

    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline SourceConfiguration& WithS3Configuration(const S3SourceConfiguration& value) { SetS3Configuration(value); return *this;}

    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline SourceConfiguration& WithS3Configuration(S3SourceConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}


    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline const IotSiteWiseSourceConfiguration& GetIotSiteWiseConfiguration() const{ return m_iotSiteWiseConfiguration; }

    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline bool IotSiteWiseConfigurationHasBeenSet() const { return m_iotSiteWiseConfigurationHasBeenSet; }

    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline void SetIotSiteWiseConfiguration(const IotSiteWiseSourceConfiguration& value) { m_iotSiteWiseConfigurationHasBeenSet = true; m_iotSiteWiseConfiguration = value; }

    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline void SetIotSiteWiseConfiguration(IotSiteWiseSourceConfiguration&& value) { m_iotSiteWiseConfigurationHasBeenSet = true; m_iotSiteWiseConfiguration = std::move(value); }

    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline SourceConfiguration& WithIotSiteWiseConfiguration(const IotSiteWiseSourceConfiguration& value) { SetIotSiteWiseConfiguration(value); return *this;}

    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline SourceConfiguration& WithIotSiteWiseConfiguration(IotSiteWiseSourceConfiguration&& value) { SetIotSiteWiseConfiguration(std::move(value)); return *this;}


    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline const IotTwinMakerSourceConfiguration& GetIotTwinMakerConfiguration() const{ return m_iotTwinMakerConfiguration; }

    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline bool IotTwinMakerConfigurationHasBeenSet() const { return m_iotTwinMakerConfigurationHasBeenSet; }

    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline void SetIotTwinMakerConfiguration(const IotTwinMakerSourceConfiguration& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = value; }

    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline void SetIotTwinMakerConfiguration(IotTwinMakerSourceConfiguration&& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = std::move(value); }

    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline SourceConfiguration& WithIotTwinMakerConfiguration(const IotTwinMakerSourceConfiguration& value) { SetIotTwinMakerConfiguration(value); return *this;}

    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline SourceConfiguration& WithIotTwinMakerConfiguration(IotTwinMakerSourceConfiguration&& value) { SetIotTwinMakerConfiguration(std::move(value)); return *this;}

  private:

    SourceType m_type;
    bool m_typeHasBeenSet = false;

    S3SourceConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    IotSiteWiseSourceConfiguration m_iotSiteWiseConfiguration;
    bool m_iotSiteWiseConfigurationHasBeenSet = false;

    IotTwinMakerSourceConfiguration m_iotTwinMakerConfiguration;
    bool m_iotTwinMakerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
