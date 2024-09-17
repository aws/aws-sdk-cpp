/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class VgwTelemetry
  {
  public:
    AWS_EC2_API VgwTelemetry();
    AWS_EC2_API VgwTelemetry(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VgwTelemetry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of accepted routes.</p>
     */
    inline int GetAcceptedRouteCount() const{ return m_acceptedRouteCount; }
    inline bool AcceptedRouteCountHasBeenSet() const { return m_acceptedRouteCountHasBeenSet; }
    inline void SetAcceptedRouteCount(int value) { m_acceptedRouteCountHasBeenSet = true; m_acceptedRouteCount = value; }
    inline VgwTelemetry& WithAcceptedRouteCount(int value) { SetAcceptedRouteCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last change in status. This field is updated when
     * changes in IKE (Phase 1), IPSec (Phase 2), or BGP status are detected.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStatusChange() const{ return m_lastStatusChange; }
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }
    inline void SetLastStatusChange(const Aws::Utils::DateTime& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }
    inline void SetLastStatusChange(Aws::Utils::DateTime&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }
    inline VgwTelemetry& WithLastStatusChange(const Aws::Utils::DateTime& value) { SetLastStatusChange(value); return *this;}
    inline VgwTelemetry& WithLastStatusChange(Aws::Utils::DateTime&& value) { SetLastStatusChange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const{ return m_outsideIpAddress; }
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }
    inline void SetOutsideIpAddress(const Aws::String& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = value; }
    inline void SetOutsideIpAddress(Aws::String&& value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress = std::move(value); }
    inline void SetOutsideIpAddress(const char* value) { m_outsideIpAddressHasBeenSet = true; m_outsideIpAddress.assign(value); }
    inline VgwTelemetry& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}
    inline VgwTelemetry& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}
    inline VgwTelemetry& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPN tunnel.</p>
     */
    inline const TelemetryStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TelemetryStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TelemetryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline VgwTelemetry& WithStatus(const TelemetryStatus& value) { SetStatus(value); return *this;}
    inline VgwTelemetry& WithStatus(TelemetryStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline VgwTelemetry& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline VgwTelemetry& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline VgwTelemetry& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the VPN tunnel endpoint certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }
    inline VgwTelemetry& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}
    inline VgwTelemetry& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}
    inline VgwTelemetry& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}
    ///@}
  private:

    int m_acceptedRouteCount;
    bool m_acceptedRouteCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet = false;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

    TelemetryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
