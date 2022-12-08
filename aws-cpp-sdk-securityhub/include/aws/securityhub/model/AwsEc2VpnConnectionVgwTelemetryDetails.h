/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the VPN tunnel.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2VpnConnectionVgwTelemetryDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2VpnConnectionVgwTelemetryDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails();
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2VpnConnectionVgwTelemetryDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of accepted routes.</p>
     */
    inline int GetAcceptedRouteCount() const{ return m_acceptedRouteCount; }

    /**
     * <p>The number of accepted routes.</p>
     */
    inline bool AcceptedRouteCountHasBeenSet() const { return m_acceptedRouteCountHasBeenSet; }

    /**
     * <p>The number of accepted routes.</p>
     */
    inline void SetAcceptedRouteCount(int value) { m_acceptedRouteCountHasBeenSet = true; m_acceptedRouteCount = value; }

    /**
     * <p>The number of accepted routes.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithAcceptedRouteCount(int value) { SetAcceptedRouteCount(value); return *this;}


    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline const Aws::String& GetCertificateArn() const{ return m_certificateArn; }

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline bool CertificateArnHasBeenSet() const { return m_certificateArnHasBeenSet; }

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline void SetCertificateArn(const Aws::String& value) { m_certificateArnHasBeenSet = true; m_certificateArn = value; }

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline void SetCertificateArn(Aws::String&& value) { m_certificateArnHasBeenSet = true; m_certificateArn = std::move(value); }

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline void SetCertificateArn(const char* value) { m_certificateArnHasBeenSet = true; m_certificateArn.assign(value); }

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(const Aws::String& value) { SetCertificateArn(value); return *this;}

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(Aws::String&& value) { SetCertificateArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the VPN tunnel endpoint certificate.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithCertificateArn(const char* value) { SetCertificateArn(value); return *this;}


    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastStatusChange() const{ return m_lastStatusChange; }

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastStatusChangeHasBeenSet() const { return m_lastStatusChangeHasBeenSet; }

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastStatusChange(const Aws::String& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = value; }

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastStatusChange(Aws::String&& value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange = std::move(value); }

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastStatusChange(const char* value) { m_lastStatusChangeHasBeenSet = true; m_lastStatusChange.assign(value); }

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(const Aws::String& value) { SetLastStatusChange(value); return *this;}

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(Aws::String&& value) { SetLastStatusChange(std::move(value)); return *this;}

    /**
     * <p>The date and time of the last change in status.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithLastStatusChange(const char* value) { SetLastStatusChange(value); return *this;}


    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline const Aws::String& GetOutsideIpAddress() const{ return m_outsideIpAddress; }

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline bool OutsideIpAddressHasBeenSet() const { return m_outsideIpAddressHasBeenSet; }

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
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(const Aws::String& value) { SetOutsideIpAddress(value); return *this;}

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(Aws::String&& value) { SetOutsideIpAddress(std::move(value)); return *this;}

    /**
     * <p>The Internet-routable IP address of the virtual private gateway's outside
     * interface.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithOutsideIpAddress(const char* value) { SetOutsideIpAddress(value); return *this;}


    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the VPN tunnel. Valid values are <code>DOWN</code> or
     * <code>UP</code>.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

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
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurs, a description of the error.</p>
     */
    inline AwsEc2VpnConnectionVgwTelemetryDetails& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    int m_acceptedRouteCount;
    bool m_acceptedRouteCountHasBeenSet = false;

    Aws::String m_certificateArn;
    bool m_certificateArnHasBeenSet = false;

    Aws::String m_lastStatusChange;
    bool m_lastStatusChangeHasBeenSet = false;

    Aws::String m_outsideIpAddress;
    bool m_outsideIpAddressHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
