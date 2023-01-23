/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Reserved. If you need to sustain traffic greater than the <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
   * limits</a>, contact us through the <a
   * href="https://console.aws.amazon.com/support/home?">Support
   * Center</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionedBandwidth">AWS
   * API Reference</a></p>
   */
  class ProvisionedBandwidth
  {
  public:
    AWS_EC2_API ProvisionedBandwidth();
    AWS_EC2_API ProvisionedBandwidth(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ProvisionedBandwidth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetProvisionTime() const{ return m_provisionTime; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline bool ProvisionTimeHasBeenSet() const { return m_provisionTimeHasBeenSet; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisionTime(const Aws::Utils::DateTime& value) { m_provisionTimeHasBeenSet = true; m_provisionTime = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisionTime(Aws::Utils::DateTime&& value) { m_provisionTimeHasBeenSet = true; m_provisionTime = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisionTime(const Aws::Utils::DateTime& value) { SetProvisionTime(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisionTime(Aws::Utils::DateTime&& value) { SetProvisionTime(std::move(value)); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetProvisioned() const{ return m_provisioned; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline bool ProvisionedHasBeenSet() const { return m_provisionedHasBeenSet; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(const Aws::String& value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(Aws::String&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(const char* value) { m_provisionedHasBeenSet = true; m_provisioned.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(const Aws::String& value) { SetProvisioned(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(Aws::String&& value) { SetProvisioned(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(const char* value) { SetProvisioned(value); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline bool RequestTimeHasBeenSet() const { return m_requestTimeHasBeenSet; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetRequested() const{ return m_requested; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline bool RequestedHasBeenSet() const { return m_requestedHasBeenSet; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(const Aws::String& value) { m_requestedHasBeenSet = true; m_requested = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(Aws::String&& value) { m_requestedHasBeenSet = true; m_requested = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(const char* value) { m_requestedHasBeenSet = true; m_requested.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(const Aws::String& value) { SetRequested(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(Aws::String&& value) { SetRequested(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(const char* value) { SetRequested(value); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="https://docs.aws.amazon.com/vpc/latest/userguide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::Utils::DateTime m_provisionTime;
    bool m_provisionTimeHasBeenSet = false;

    Aws::String m_provisioned;
    bool m_provisionedHasBeenSet = false;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet = false;

    Aws::String m_requested;
    bool m_requestedHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
