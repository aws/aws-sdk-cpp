/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/CustomRoutingAcceleratorStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/globalaccelerator/model/IpSet.h>
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
namespace GlobalAccelerator
{
namespace Model
{

  /**
   * <p>Attributes of a custom routing accelerator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/CustomRoutingAccelerator">AWS
   * API Reference</a></p>
   */
  class CustomRoutingAccelerator
  {
  public:
    AWS_GLOBALACCELERATOR_API CustomRoutingAccelerator();
    AWS_GLOBALACCELERATOR_API CustomRoutingAccelerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API CustomRoutingAccelerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const{ return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    inline void SetAcceleratorArn(const Aws::String& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = value; }
    inline void SetAcceleratorArn(Aws::String&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::move(value); }
    inline void SetAcceleratorArn(const char* value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn.assign(value); }
    inline CustomRoutingAccelerator& WithAcceleratorArn(const Aws::String& value) { SetAcceleratorArn(value); return *this;}
    inline CustomRoutingAccelerator& WithAcceleratorArn(Aws::String&& value) { SetAcceleratorArn(std::move(value)); return *this;}
    inline CustomRoutingAccelerator& WithAcceleratorArn(const char* value) { SetAcceleratorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CustomRoutingAccelerator& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CustomRoutingAccelerator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CustomRoutingAccelerator& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a custom routing
     * accelerator, the value must be IPV4.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CustomRoutingAccelerator& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CustomRoutingAccelerator& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline CustomRoutingAccelerator& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline const Aws::Vector<IpSet>& GetIpSets() const{ return m_ipSets; }
    inline bool IpSetsHasBeenSet() const { return m_ipSetsHasBeenSet; }
    inline void SetIpSets(const Aws::Vector<IpSet>& value) { m_ipSetsHasBeenSet = true; m_ipSets = value; }
    inline void SetIpSets(Aws::Vector<IpSet>&& value) { m_ipSetsHasBeenSet = true; m_ipSets = std::move(value); }
    inline CustomRoutingAccelerator& WithIpSets(const Aws::Vector<IpSet>& value) { SetIpSets(value); return *this;}
    inline CustomRoutingAccelerator& WithIpSets(Aws::Vector<IpSet>&& value) { SetIpSets(std::move(value)); return *this;}
    inline CustomRoutingAccelerator& AddIpSets(const IpSet& value) { m_ipSetsHasBeenSet = true; m_ipSets.push_back(value); return *this; }
    inline CustomRoutingAccelerator& AddIpSets(IpSet&& value) { m_ipSetsHasBeenSet = true; m_ipSets.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to an accelerator's static IPv4 addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>If you have a dual-stack
     * accelerator, you also have a second DNS name, <code>DualStackDnsName</code>,
     * that points to both the A record and the AAAA record for all four static
     * addresses for the accelerator: two IPv4 addresses and two IPv6 addresses.</p>
     * <p>For more information about the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/dns-addressing-custom-domains.dns-addressing.html">
     * Support for DNS addressing in Global Accelerator</a> in the <i>Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }
    inline CustomRoutingAccelerator& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}
    inline CustomRoutingAccelerator& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}
    inline CustomRoutingAccelerator& WithDnsName(const char* value) { SetDnsName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline const CustomRoutingAcceleratorStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const CustomRoutingAcceleratorStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(CustomRoutingAcceleratorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline CustomRoutingAccelerator& WithStatus(const CustomRoutingAcceleratorStatus& value) { SetStatus(value); return *this;}
    inline CustomRoutingAccelerator& WithStatus(CustomRoutingAcceleratorStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }
    inline CustomRoutingAccelerator& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}
    inline CustomRoutingAccelerator& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline CustomRoutingAccelerator& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline CustomRoutingAccelerator& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<IpSet> m_ipSets;
    bool m_ipSetsHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    CustomRoutingAcceleratorStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
