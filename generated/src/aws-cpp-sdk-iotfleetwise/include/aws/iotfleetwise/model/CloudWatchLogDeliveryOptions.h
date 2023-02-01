/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/LogType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The log delivery option to send data to Amazon CloudWatch Logs.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/CloudWatchLogDeliveryOptions">AWS
   * API Reference</a></p>
   */
  class CloudWatchLogDeliveryOptions
  {
  public:
    AWS_IOTFLEETWISE_API CloudWatchLogDeliveryOptions();
    AWS_IOTFLEETWISE_API CloudWatchLogDeliveryOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API CloudWatchLogDeliveryOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline CloudWatchLogDeliveryOptions& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>The type of log to send data to Amazon CloudWatch Logs.</p>
     */
    inline CloudWatchLogDeliveryOptions& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline CloudWatchLogDeliveryOptions& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline CloudWatchLogDeliveryOptions& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The Amazon CloudWatch Logs group the operation sends data to.</p>
     */
    inline CloudWatchLogDeliveryOptions& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
