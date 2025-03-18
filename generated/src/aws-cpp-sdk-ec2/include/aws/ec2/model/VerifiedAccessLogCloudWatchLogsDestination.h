/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/VerifiedAccessLogDeliveryStatus.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Options for CloudWatch Logs as a logging destination.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VerifiedAccessLogCloudWatchLogsDestination">AWS
   * API Reference</a></p>
   */
  class VerifiedAccessLogCloudWatchLogsDestination
  {
  public:
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination() = default;
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline VerifiedAccessLogCloudWatchLogsDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery status for access logs.</p>
     */
    inline const VerifiedAccessLogDeliveryStatus& GetDeliveryStatus() const { return m_deliveryStatus; }
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
    template<typename DeliveryStatusT = VerifiedAccessLogDeliveryStatus>
    void SetDeliveryStatus(DeliveryStatusT&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::forward<DeliveryStatusT>(value); }
    template<typename DeliveryStatusT = VerifiedAccessLogDeliveryStatus>
    VerifiedAccessLogCloudWatchLogsDestination& WithDeliveryStatus(DeliveryStatusT&& value) { SetDeliveryStatus(std::forward<DeliveryStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the CloudWatch Logs log group.</p>
     */
    inline const Aws::String& GetLogGroup() const { return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    template<typename LogGroupT = Aws::String>
    void SetLogGroup(LogGroupT&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::forward<LogGroupT>(value); }
    template<typename LogGroupT = Aws::String>
    VerifiedAccessLogCloudWatchLogsDestination& WithLogGroup(LogGroupT&& value) { SetLogGroup(std::forward<LogGroupT>(value)); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    VerifiedAccessLogDeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
