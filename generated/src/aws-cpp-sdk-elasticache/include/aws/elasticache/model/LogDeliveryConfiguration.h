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
#include <aws/elasticache/model/LogDeliveryConfigurationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Returns the destination, format and type of the logs. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/LogDeliveryConfiguration">AWS
   * API Reference</a></p>
   */
  class LogDeliveryConfiguration
  {
  public:
    AWS_ELASTICACHE_API LogDeliveryConfiguration() = default;
    AWS_ELASTICACHE_API LogDeliveryConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API LogDeliveryConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log.</p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline LogDeliveryConfiguration& WithLogType(LogType value) { SetLogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the destination type, either <code>cloudwatch-logs</code> or
     * <code>kinesis-firehose</code>.</p>
     */
    inline DestinationType GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(DestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline LogDeliveryConfiguration& WithDestinationType(DestinationType value) { SetDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration details of either a CloudWatch Logs destination or Kinesis Data
     * Firehose destination.</p>
     */
    inline const DestinationDetails& GetDestinationDetails() const { return m_destinationDetails; }
    inline bool DestinationDetailsHasBeenSet() const { return m_destinationDetailsHasBeenSet; }
    template<typename DestinationDetailsT = DestinationDetails>
    void SetDestinationDetails(DestinationDetailsT&& value) { m_destinationDetailsHasBeenSet = true; m_destinationDetails = std::forward<DestinationDetailsT>(value); }
    template<typename DestinationDetailsT = DestinationDetails>
    LogDeliveryConfiguration& WithDestinationDetails(DestinationDetailsT&& value) { SetDestinationDetails(std::forward<DestinationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the log format, either JSON or TEXT.</p>
     */
    inline LogFormat GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    inline void SetLogFormat(LogFormat value) { m_logFormatHasBeenSet = true; m_logFormat = value; }
    inline LogDeliveryConfiguration& WithLogFormat(LogFormat value) { SetLogFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the log delivery configuration status. Values are one of
     * <code>enabling</code> | <code>disabling</code> | <code>modifying</code> |
     * <code>active</code> | <code>error</code> </p>
     */
    inline LogDeliveryConfigurationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LogDeliveryConfigurationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LogDeliveryConfiguration& WithStatus(LogDeliveryConfigurationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns an error message for the log delivery configuration.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    LogDeliveryConfiguration& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    LogType m_logType{LogType::NOT_SET};
    bool m_logTypeHasBeenSet = false;

    DestinationType m_destinationType{DestinationType::NOT_SET};
    bool m_destinationTypeHasBeenSet = false;

    DestinationDetails m_destinationDetails;
    bool m_destinationDetailsHasBeenSet = false;

    LogFormat m_logFormat{LogFormat::NOT_SET};
    bool m_logFormatHasBeenSet = false;

    LogDeliveryConfigurationStatus m_status{LogDeliveryConfigurationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
