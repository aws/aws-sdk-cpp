/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/S3Config.h>
#include <aws/iotfleetwise/model/TimestreamConfig.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>The destination where the Amazon Web Services IoT FleetWise campaign sends
   * data. You can send data to be stored in Amazon S3 or Amazon
   * Timestream.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/DataDestinationConfig">AWS
   * API Reference</a></p>
   */
  class DataDestinationConfig
  {
  public:
    AWS_IOTFLEETWISE_API DataDestinationConfig();
    AWS_IOTFLEETWISE_API DataDestinationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API DataDestinationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline bool S3ConfigHasBeenSet() const { return m_s3ConfigHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline void SetS3Config(const S3Config& value) { m_s3ConfigHasBeenSet = true; m_s3Config = value; }

    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline void SetS3Config(S3Config&& value) { m_s3ConfigHasBeenSet = true; m_s3Config = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline DataDestinationConfig& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the Amazon Web Services IoT FleetWise campaign
     * sends data.</p>
     */
    inline DataDestinationConfig& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline const TimestreamConfig& GetTimestreamConfig() const{ return m_timestreamConfig; }

    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline bool TimestreamConfigHasBeenSet() const { return m_timestreamConfigHasBeenSet; }

    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline void SetTimestreamConfig(const TimestreamConfig& value) { m_timestreamConfigHasBeenSet = true; m_timestreamConfig = value; }

    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline void SetTimestreamConfig(TimestreamConfig&& value) { m_timestreamConfigHasBeenSet = true; m_timestreamConfig = std::move(value); }

    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline DataDestinationConfig& WithTimestreamConfig(const TimestreamConfig& value) { SetTimestreamConfig(value); return *this;}

    /**
     * <p>The Amazon Timestream table where the campaign sends data.</p>
     */
    inline DataDestinationConfig& WithTimestreamConfig(TimestreamConfig&& value) { SetTimestreamConfig(std::move(value)); return *this;}

  private:

    S3Config m_s3Config;
    bool m_s3ConfigHasBeenSet = false;

    TimestreamConfig m_timestreamConfig;
    bool m_timestreamConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
