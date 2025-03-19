/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/iotanalytics/model/IotEventsDestinationConfiguration.h>
#include <aws/iotanalytics/model/S3DestinationConfiguration.h>
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
namespace IoTAnalytics
{
namespace Model
{

  /**
   * <p>The destination to which dataset contents are delivered.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentDeliveryDestination">AWS
   * API Reference</a></p>
   */
  class DatasetContentDeliveryDestination
  {
  public:
    AWS_IOTANALYTICS_API DatasetContentDeliveryDestination() = default;
    AWS_IOTANALYTICS_API DatasetContentDeliveryDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API DatasetContentDeliveryDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration information for delivery of dataset contents to IoT Events.</p>
     */
    inline const IotEventsDestinationConfiguration& GetIotEventsDestinationConfiguration() const { return m_iotEventsDestinationConfiguration; }
    inline bool IotEventsDestinationConfigurationHasBeenSet() const { return m_iotEventsDestinationConfigurationHasBeenSet; }
    template<typename IotEventsDestinationConfigurationT = IotEventsDestinationConfiguration>
    void SetIotEventsDestinationConfiguration(IotEventsDestinationConfigurationT&& value) { m_iotEventsDestinationConfigurationHasBeenSet = true; m_iotEventsDestinationConfiguration = std::forward<IotEventsDestinationConfigurationT>(value); }
    template<typename IotEventsDestinationConfigurationT = IotEventsDestinationConfiguration>
    DatasetContentDeliveryDestination& WithIotEventsDestinationConfiguration(IotEventsDestinationConfigurationT&& value) { SetIotEventsDestinationConfiguration(std::forward<IotEventsDestinationConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration information for delivery of dataset contents to Amazon S3.</p>
     */
    inline const S3DestinationConfiguration& GetS3DestinationConfiguration() const { return m_s3DestinationConfiguration; }
    inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }
    template<typename S3DestinationConfigurationT = S3DestinationConfiguration>
    void SetS3DestinationConfiguration(S3DestinationConfigurationT&& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = std::forward<S3DestinationConfigurationT>(value); }
    template<typename S3DestinationConfigurationT = S3DestinationConfiguration>
    DatasetContentDeliveryDestination& WithS3DestinationConfiguration(S3DestinationConfigurationT&& value) { SetS3DestinationConfiguration(std::forward<S3DestinationConfigurationT>(value)); return *this;}
    ///@}
  private:

    IotEventsDestinationConfiguration m_iotEventsDestinationConfiguration;
    bool m_iotEventsDestinationConfigurationHasBeenSet = false;

    S3DestinationConfiguration m_s3DestinationConfiguration;
    bool m_s3DestinationConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
