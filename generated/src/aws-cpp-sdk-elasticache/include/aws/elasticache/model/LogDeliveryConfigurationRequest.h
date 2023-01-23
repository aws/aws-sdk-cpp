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
   * <p>Specifies the destination, format and type of the logs. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/LogDeliveryConfigurationRequest">AWS
   * API Reference</a></p>
   */
  class LogDeliveryConfigurationRequest
  {
  public:
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest();
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline LogDeliveryConfigurationRequest& WithLogType(const LogType& value) { SetLogType(value); return *this;}

    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline LogDeliveryConfigurationRequest& WithLogType(LogType&& value) { SetLogType(std::move(value)); return *this;}


    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline const DestinationType& GetDestinationType() const{ return m_destinationType; }

    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }

    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline void SetDestinationType(const DestinationType& value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }

    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline void SetDestinationType(DestinationType&& value) { m_destinationTypeHasBeenSet = true; m_destinationType = std::move(value); }

    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline LogDeliveryConfigurationRequest& WithDestinationType(const DestinationType& value) { SetDestinationType(value); return *this;}

    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline LogDeliveryConfigurationRequest& WithDestinationType(DestinationType&& value) { SetDestinationType(std::move(value)); return *this;}


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
    inline LogDeliveryConfigurationRequest& WithDestinationDetails(const DestinationDetails& value) { SetDestinationDetails(value); return *this;}

    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline LogDeliveryConfigurationRequest& WithDestinationDetails(DestinationDetails&& value) { SetDestinationDetails(std::move(value)); return *this;}


    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline const LogFormat& GetLogFormat() const{ return m_logFormat; }

    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }

    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline void SetLogFormat(const LogFormat& value) { m_logFormatHasBeenSet = true; m_logFormat = value; }

    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline void SetLogFormat(LogFormat&& value) { m_logFormatHasBeenSet = true; m_logFormat = std::move(value); }

    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline LogDeliveryConfigurationRequest& WithLogFormat(const LogFormat& value) { SetLogFormat(value); return *this;}

    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline LogDeliveryConfigurationRequest& WithLogFormat(LogFormat&& value) { SetLogFormat(std::move(value)); return *this;}


    /**
     * <p>Specify if log delivery is enabled. Default <code>true</code>.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specify if log delivery is enabled. Default <code>true</code>.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specify if log delivery is enabled. Default <code>true</code>.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specify if log delivery is enabled. Default <code>true</code>.</p>
     */
    inline LogDeliveryConfigurationRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}

  private:

    LogType m_logType;
    bool m_logTypeHasBeenSet = false;

    DestinationType m_destinationType;
    bool m_destinationTypeHasBeenSet = false;

    DestinationDetails m_destinationDetails;
    bool m_destinationDetailsHasBeenSet = false;

    LogFormat m_logFormat;
    bool m_logFormatHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
