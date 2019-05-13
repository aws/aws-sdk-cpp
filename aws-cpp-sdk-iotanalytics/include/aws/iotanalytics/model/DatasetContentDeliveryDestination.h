/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>The destination to which data set contents are delivered.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotanalytics-2017-11-27/DatasetContentDeliveryDestination">AWS
   * API Reference</a></p>
   */
  class AWS_IOTANALYTICS_API DatasetContentDeliveryDestination
  {
  public:
    DatasetContentDeliveryDestination();
    DatasetContentDeliveryDestination(Aws::Utils::Json::JsonView jsonValue);
    DatasetContentDeliveryDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline const IotEventsDestinationConfiguration& GetIotEventsDestinationConfiguration() const{ return m_iotEventsDestinationConfiguration; }

    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline bool IotEventsDestinationConfigurationHasBeenSet() const { return m_iotEventsDestinationConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline void SetIotEventsDestinationConfiguration(const IotEventsDestinationConfiguration& value) { m_iotEventsDestinationConfigurationHasBeenSet = true; m_iotEventsDestinationConfiguration = value; }

    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline void SetIotEventsDestinationConfiguration(IotEventsDestinationConfiguration&& value) { m_iotEventsDestinationConfigurationHasBeenSet = true; m_iotEventsDestinationConfiguration = std::move(value); }

    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline DatasetContentDeliveryDestination& WithIotEventsDestinationConfiguration(const IotEventsDestinationConfiguration& value) { SetIotEventsDestinationConfiguration(value); return *this;}

    /**
     * <p>Configuration information for delivery of data set contents to AWS IoT
     * Events.</p>
     */
    inline DatasetContentDeliveryDestination& WithIotEventsDestinationConfiguration(IotEventsDestinationConfiguration&& value) { SetIotEventsDestinationConfiguration(std::move(value)); return *this;}


    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline const S3DestinationConfiguration& GetS3DestinationConfiguration() const{ return m_s3DestinationConfiguration; }

    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline bool S3DestinationConfigurationHasBeenSet() const { return m_s3DestinationConfigurationHasBeenSet; }

    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline void SetS3DestinationConfiguration(const S3DestinationConfiguration& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = value; }

    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline void SetS3DestinationConfiguration(S3DestinationConfiguration&& value) { m_s3DestinationConfigurationHasBeenSet = true; m_s3DestinationConfiguration = std::move(value); }

    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline DatasetContentDeliveryDestination& WithS3DestinationConfiguration(const S3DestinationConfiguration& value) { SetS3DestinationConfiguration(value); return *this;}

    /**
     * <p>Configuration information for delivery of data set contents to Amazon S3.</p>
     */
    inline DatasetContentDeliveryDestination& WithS3DestinationConfiguration(S3DestinationConfiguration&& value) { SetS3DestinationConfiguration(std::move(value)); return *this;}

  private:

    IotEventsDestinationConfiguration m_iotEventsDestinationConfiguration;
    bool m_iotEventsDestinationConfigurationHasBeenSet;

    S3DestinationConfiguration m_s3DestinationConfiguration;
    bool m_s3DestinationConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
