/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/DestinationType.h>
#include <aws/iottwinmaker/model/S3DestinationConfiguration.h>
#include <aws/iottwinmaker/model/IotTwinMakerDestinationConfiguration.h>
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
   * <p>The [link to action] metadata transfer job destination
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DestinationConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationConfiguration
  {
  public:
    AWS_IOTTWINMAKER_API DestinationConfiguration() = default;
    AWS_IOTTWINMAKER_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination type.</p>
     */
    inline DestinationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DestinationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DestinationConfiguration& WithType(DestinationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job S3 configuration. [need to add S3 entity]</p>
     */
    inline const S3DestinationConfiguration& GetS3Configuration() const { return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    void SetS3Configuration(S3ConfigurationT&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::forward<S3ConfigurationT>(value); }
    template<typename S3ConfigurationT = S3DestinationConfiguration>
    DestinationConfiguration& WithS3Configuration(S3ConfigurationT&& value) { SetS3Configuration(std::forward<S3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job Amazon Web Services IoT TwinMaker
     * configuration.</p>
     */
    inline const IotTwinMakerDestinationConfiguration& GetIotTwinMakerConfiguration() const { return m_iotTwinMakerConfiguration; }
    inline bool IotTwinMakerConfigurationHasBeenSet() const { return m_iotTwinMakerConfigurationHasBeenSet; }
    template<typename IotTwinMakerConfigurationT = IotTwinMakerDestinationConfiguration>
    void SetIotTwinMakerConfiguration(IotTwinMakerConfigurationT&& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = std::forward<IotTwinMakerConfigurationT>(value); }
    template<typename IotTwinMakerConfigurationT = IotTwinMakerDestinationConfiguration>
    DestinationConfiguration& WithIotTwinMakerConfiguration(IotTwinMakerConfigurationT&& value) { SetIotTwinMakerConfiguration(std::forward<IotTwinMakerConfigurationT>(value)); return *this;}
    ///@}
  private:

    DestinationType m_type{DestinationType::NOT_SET};
    bool m_typeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    IotTwinMakerDestinationConfiguration m_iotTwinMakerConfiguration;
    bool m_iotTwinMakerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
