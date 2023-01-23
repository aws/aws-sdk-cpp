/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/elasticache/model/LogType.h>
#include <aws/elasticache/model/DestinationType.h>
#include <aws/elasticache/model/DestinationDetails.h>
#include <aws/elasticache/model/LogFormat.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>The log delivery configurations being modified </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PendingLogDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class PendingLogDeliveryConfiguration
  {
  public:
    AWS_ELASTICACHE_API PendingLogDeliveryConfiguration();
    AWS_ELASTICACHE_API PendingLogDeliveryConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API PendingLogDeliveryConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline const LogType& GetLogType() const{ return m_logType; }

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline void SetLogType(const LogType& value) { m_logTypeHasBeenSet = true; m_logType = value; }

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline void SetLogType(LogType&& value) { m_logTypeHasBeenSet = true; m_logType = std::move(value); }

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline PendingLogDeliveryConfiguration& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline PendingLogDeliveryConfiguration& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline PendingLogDeliveryConfiguration& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>Returns the destination type, either CloudWatch Logs or Kinesis Data
     * Firehose.</p>
     */
    inline PendingLogDeliveryConfiguration& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline const DestinationDetails& GetDestinationDetails() const{ return m_destinationDetails; }

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline bool DestinationDetailsHasBeenSet() const { return m_destinationDetailsHasBeenSet; }

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline void SetDestinationDetails(const DestinationDetails& value) { m_destinationDetailsHasBeenSet = true; m_destinationDetails = value; }

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline void SetDestinationDetails(DestinationDetails&& value) { m_destinationDetailsHasBeenSet = true; m_destinationDetails = std::move(value); }

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline PendingLogDeliveryConfiguration& WithDestinationDetails(const DestinationDetails& value) { SetDestinationDetails(value); return *this;}

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline PendingLogDeliveryConfiguration& WithDestinationDetails(DestinationDetails&& value) { SetDestinationDetails(std::move(value)); return *this;}


    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline const LogFormat& GetLogFormat() const{ return m_logFormat; }

    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }

    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline void SetLogFormat(const LogFormat& value) { m_logFormatHasBeenSet = true; m_logFormat = value; }

    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline void SetLogFormat(LogFormat&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::move(value); }

    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline PendingLogDeliveryConfiguration& WithLogFormat(const LogFormat& value) { SetLogFormat(value); return *this;}

    /**
     * <p>Returns the log format, either JSON or TEXT</p>
     */
    inline PendingLogDeliveryConfiguration& WithLogFormat(LogFormat&& value) { SetLogFormat(std::move(value)); return *this;}

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    DestinationDetails m_destinationDetails;
    bool m_destinationDetailsHasBeenSet = false;

    LogFormat m_logFormat;
    bool m_logFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
