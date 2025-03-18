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
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest() = default;
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API LogDeliveryConfigurationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Refers to <a href="https://redis.io/commands/slowlog">slow-log</a> or
     * engine-log..</p>
     */
    inline LogType GetLogType() const { return m_logType; }
    inline bool LogTypeHasBeenSet() const { return m_logTypeHasBeenSet; }
    inline void SetLogType(LogType value) { m_logTypeHasBeenSet = true; m_logType = value; }
    inline LogDeliveryConfigurationRequest& WithLogType(LogType value) { SetLogType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify either <code>cloudwatch-logs</code> or <code>kinesis-firehose</code>
     * as the destination type.</p>
     */
    inline DestinationType GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(DestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline LogDeliveryConfigurationRequest& WithDestinationType(DestinationType value) { SetDestinationType(value); return *this;}
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
    LogDeliveryConfigurationRequest& WithDestinationDetails(DestinationDetailsT&& value) { SetDestinationDetails(std::forward<DestinationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies either JSON or TEXT</p>
     */
    inline LogFormat GetLogFormat() const { return m_logFormat; }
    inline bool LogFormatHasBeenSet() const { return m_logFormatHasBeenSet; }
    inline void SetLogFormat(LogFormat value) { m_logFormatHasBeenSet = true; m_logFormat = value; }
    inline LogDeliveryConfigurationRequest& WithLogFormat(LogFormat value) { SetLogFormat(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify if log delivery is enabled. Default <code>true</code>.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline LogDeliveryConfigurationRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}
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

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
