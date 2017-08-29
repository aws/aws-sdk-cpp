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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TelemetryStatus.h>
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
   * <p>Describes telemetry for a VPN tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VgwTelemetry">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VgwTelemetry
  {
  public:
    VgwTelemetry();
    VgwTelemetry(const Aws::Utils::Xml::XmlNode& xmlNode);
    VgwTelemetry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of accepted routes.</p>
     */
    inline int GetAcceptedRouteCount() const{ return m_acceptedRouteCount; }

    /**
     * <p>The number of accepted routes.</p>
     */
    inline void SetAcceptedRouteCount(int value) { m_acceptedRouteCountHasBeenSet = true; m_acceptedRouteCount = value; }

    /**
     * <p>The number of accepted routes.</p>
     */
    inline VgwTelemetry& WithAcceptedRouteCount(int value) { SetAcceptedRouteCount(value); return *this;}


    /**
     * <p>The date and time of the last change in status.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const{ return m_lastStatusChange; }

    /**
     * <p>The date and time of the last change in status.</p>
     */
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The date and time of the last change in status.</p>
     */
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }

    /**
     * <p>The date and time of the last change in status.</p>
     */
    inline VgwTelemetry& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The date and time of the last change in status.</p>
     */
    inline VgwTelemetry& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(std::move(value)); return *this;}


    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const{ return m_outsideIpAddress; }

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline void SetOutsideIpAddress(const Aws::String& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = value; }

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline void SetOutsideIpAddress(Aws::String&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::move(value); }

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline void SetOutsideIpAddress(const char* value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress.assign(value); }

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline VgwTelemetry& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline VgwTelemetry& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline VgwTelemetry& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}


    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline const TelemetryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline void SetStatus(const TelemetryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline void SetStatus(TelemetryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline VgwTelemetry& WithStatus(const TelemetryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline VgwTelemetry& WithStatus(TelemetryStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline VgwTelemetry& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline VgwTelemetry& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline VgwTelemetry& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    int m_acceptedRouteCount;
    bool m_acceptedRouteCountHasBeenSet;

    Aws::Utils::DateTime m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet;

    TelemetryStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
