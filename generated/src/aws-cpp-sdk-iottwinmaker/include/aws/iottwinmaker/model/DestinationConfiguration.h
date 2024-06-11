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
    AWS_IOTTWINMAKER_API DestinationConfiguration();
    AWS_IOTTWINMAKER_API DestinationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DestinationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The destination type.</p>
     */
    inline const DestinationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const DestinationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(DestinationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline DestinationConfiguration& WithType(const DestinationType& value) { SetType(value); return *this;}
    inline DestinationConfiguration& WithType(DestinationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job S3 configuration. [need to add S3 entity]</p>
     */
    inline const S3DestinationConfiguration& GetS3Configuration() const{ return m_s3Configuration; }
    inline bool S3ConfigurationHasBeenSet() const { return m_s3ConfigurationHasBeenSet; }
    inline void SetS3Configuration(const S3DestinationConfiguration& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = value; }
    inline void SetS3Configuration(S3DestinationConfiguration&& value) { m_s3ConfigurationHasBeenSet = true; m_s3Configuration = std::move(value); }
    inline DestinationConfiguration& WithS3Configuration(const S3DestinationConfiguration& value) { SetS3Configuration(value); return *this;}
    inline DestinationConfiguration& WithS3Configuration(S3DestinationConfiguration&& value) { SetS3Configuration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata transfer job Amazon Web Services IoT TwinMaker
     * configuration.</p>
     */
    inline const IotTwinMakerDestinationConfiguration& GetIotTwinMakerConfiguration() const{ return m_iotTwinMakerConfiguration; }
    inline bool IotTwinMakerConfigurationHasBeenSet() const { return m_iotTwinMakerConfigurationHasBeenSet; }
    inline void SetIotTwinMakerConfiguration(const IotTwinMakerDestinationConfiguration& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = value; }
    inline void SetIotTwinMakerConfiguration(IotTwinMakerDestinationConfiguration&& value) { m_iotTwinMakerConfigurationHasBeenSet = true; m_iotTwinMakerConfiguration = std::move(value); }
    inline DestinationConfiguration& WithIotTwinMakerConfiguration(const IotTwinMakerDestinationConfiguration& value) { SetIotTwinMakerConfiguration(value); return *this;}
    inline DestinationConfiguration& WithIotTwinMakerConfiguration(IotTwinMakerDestinationConfiguration&& value) { SetIotTwinMakerConfiguration(std::move(value)); return *this;}
    ///@}
  private:

    DestinationType m_type;
    bool m_typeHasBeenSet = false;

    S3DestinationConfiguration m_s3Configuration;
    bool m_s3ConfigurationHasBeenSet = false;

    IotTwinMakerDestinationConfiguration m_iotTwinMakerConfiguration;
    bool m_iotTwinMakerConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
