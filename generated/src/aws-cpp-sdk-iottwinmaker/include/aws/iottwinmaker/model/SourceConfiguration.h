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
    AWS_IOTTWINMAKER_API SourceConfiguration() = default;
    AWS_IOTTWINMAKER_API SourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API SourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The source configuration type.</p>
     */
    inline SourceType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline SourceConfiguration& WithType(SourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration S3 configuration.</p>
     */
    inline const S3SourceConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3SourceConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3SourceConfiguration>
    SourceConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration IoT SiteWise configuration.</p>
     */
    inline const IotSiteWiseSourceConfiguration& GetIotSiteWiseConfiguration() const { return m_iotSiteWiseConfiguration; }
    inline bool IotSiteWiseConfigurationHasBeenSet() const { return m_iotSiteWiseConfigurationHasBeenSet; }
    template<typename IotSiteWiseConfigurationT = IotSiteWiseSourceConfiguration>
    void SetIotSiteWiseConfiguration(IotSiteWiseConfigurationT&& value) { m_iotSiteWiseConfigurationHasBeenSet = true; m_iotSiteWiseConfiguration = std::forward<IotSiteWiseConfigurationT>(value); }
    template<typename IotSiteWiseConfigurationT = IotSiteWiseSourceConfiguration>
    SourceConfiguration& WithIotSiteWiseConfiguration(IotSiteWiseConfigurationT&& value) { SetIotSiteWiseConfiguration(std::forward<IotSiteWiseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source configuration IoT TwinMaker configuration.</p>
     */
    inline const IotTwinMakerSourceConfiguration& GetIotTwinMakerConfiguration() const { return m_iotTwinMakerConfiguration; }
    inline bool IotTwinMakerConfigurationHasBeenSet() const { return m_iotTwinMakerConfigurationHasBeenSet; }
    template<typename IotTwinMakerConfigurationT = IotTwinMakerSourceConfiguration>
    void SetIotTwinMakerConfiguration(IotTwinMakerConfigurationT&& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = std::forward<IotTwinMakerConfigurationT>(value); }
    template<typename IotTwinMakerConfigurationT = IotTwinMakerSourceConfiguration>
    SourceConfiguration& WithIotTwinMakerConfiguration(IotTwinMakerConfigurationT&& value) { SetIotTwinMakerConfiguration(std::forward<IotTwinMakerConfigurationT>(value)); return *this;}
    ///@}
  private:

    SourceType m_type{SourceType::NOT_SET};
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
