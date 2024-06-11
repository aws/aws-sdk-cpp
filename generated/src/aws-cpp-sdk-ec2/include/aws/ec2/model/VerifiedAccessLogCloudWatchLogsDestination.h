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
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination();
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VerifiedAccessLogCloudWatchLogsDestination& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether logging is enabled.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline VerifiedAccessLogCloudWatchLogsDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The delivery status for access logs.</p>
     */
    inline const VerifiedAccessLogDeliveryStatus& GetDeliveryStatus() const{ return m_deliveryStatus; }
    inline bool DeliveryStatusHasBeenSet() const { return m_deliveryStatusHasBeenSet; }
    inline void SetDeliveryStatus(const VerifiedAccessLogDeliveryStatus& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = value; }
    inline void SetDeliveryStatus(VerifiedAccessLogDeliveryStatus&& value) { m_deliveryStatusHasBeenSet = true; m_deliveryStatus = std::move(value); }
    inline VerifiedAccessLogCloudWatchLogsDestination& WithDeliveryStatus(const VerifiedAccessLogDeliveryStatus& value) { SetDeliveryStatus(value); return *this;}
    inline VerifiedAccessLogCloudWatchLogsDestination& WithDeliveryStatus(VerifiedAccessLogDeliveryStatus&& value) { SetDeliveryStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the CloudWatch Logs log group.</p>
     */
    inline const Aws::String& GetLogGroup() const{ return m_logGroup; }
    inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
    inline void SetLogGroup(const Aws::String& value) { m_logGroupHasBeenSet = true; m_logGroup = value; }
    inline void SetLogGroup(Aws::String&& value) { m_logGroupHasBeenSet = true; m_logGroup = std::move(value); }
    inline void SetLogGroup(const char* value) { m_logGroupHasBeenSet = true; m_logGroup.assign(value); }
    inline VerifiedAccessLogCloudWatchLogsDestination& WithLogGroup(const Aws::String& value) { SetLogGroup(value); return *this;}
    inline VerifiedAccessLogCloudWatchLogsDestination& WithLogGroup(Aws::String&& value) { SetLogGroup(std::move(value)); return *this;}
    inline VerifiedAccessLogCloudWatchLogsDestination& WithLogGroup(const char* value) { SetLogGroup(value); return *this;}
    ///@}
  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    VerifiedAccessLogDeliveryStatus m_deliveryStatus;
    bool m_deliveryStatusHasBeenSet = false;

    Aws::String m_logGroup;
    bool m_logGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
