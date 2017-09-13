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
   * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
   * limits</a>, contact us through the <a
   * href="https://console.aws.amazon.com/support/home?">Support
   * Center</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ProvisionedBandwidth">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ProvisionedBandwidth
  {
  public:
    ProvisionedBandwidth();
    ProvisionedBandwidth(const Aws::Utils::Xml::XmlNode& xmlNode);
    ProvisionedBandwidth& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetProvisionTime() const{ return m_provisionTime; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisionTime(const Aws::Utils::DateTime& value) { m_provisionTimeHasBeenSet = true; m_provisionTime = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisionTime(Aws::Utils::DateTime&& value) { m_provisionTimeHasBeenSet = true; m_provisionTime = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisionTime(const Aws::Utils::DateTime& value) { SetProvisionTime(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisionTime(Aws::Utils::DateTime&& value) { SetProvisionTime(std::move(value)); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetProvisioned() const{ return m_provisioned; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(const Aws::String& value) { m_provisionedHasBeenSet = true; m_provisioned = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(Aws::String&& value) { m_provisionedHasBeenSet = true; m_provisioned = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetProvisioned(const char* value) { m_provisionedHasBeenSet = true; m_provisioned.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(const Aws::String& value) { SetProvisioned(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(Aws::String&& value) { SetProvisioned(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithProvisioned(const char* value) { SetProvisioned(value); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::Utils::DateTime& GetRequestTime() const{ return m_requestTime; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequestTime(const Aws::Utils::DateTime& value) { m_requestTimeHasBeenSet = true; m_requestTime = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequestTime(Aws::Utils::DateTime&& value) { m_requestTimeHasBeenSet = true; m_requestTime = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequestTime(const Aws::Utils::DateTime& value) { SetRequestTime(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequestTime(Aws::Utils::DateTime&& value) { SetRequestTime(std::move(value)); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetRequested() const{ return m_requested; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(const Aws::String& value) { m_requestedHasBeenSet = true; m_requested = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(Aws::String&& value) { m_requestedHasBeenSet = true; m_requested = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetRequested(const char* value) { m_requestedHasBeenSet = true; m_requested.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(const Aws::String& value) { SetRequested(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(Aws::String&& value) { SetRequested(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithRequested(const char* value) { SetRequested(value); return *this;}


    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Reserved. If you need to sustain traffic greater than the <a
     * href="http://docs.aws.amazon.com/AmazonVPC/latest/UserGuide/vpc-nat-gateway.html">documented
     * limits</a>, contact us through the <a
     * href="https://console.aws.amazon.com/support/home?">Support Center</a>.</p>
     */
    inline ProvisionedBandwidth& WithStatus(const char* value) { SetStatus(value); return *this;}

  private:

    Aws::Utils::DateTime m_provisionTime;
    bool m_provisionTimeHasBeenSet;

    Aws::String m_provisioned;
    bool m_provisionedHasBeenSet;

    Aws::Utils::DateTime m_requestTime;
    bool m_requestTimeHasBeenSet;

    Aws::String m_requested;
    bool m_requestedHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
