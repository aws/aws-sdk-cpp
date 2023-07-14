﻿/**
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
  class AWS_GLOBALACCELERATOR_API CustomRoutingAccelerator
  {
  public:
    CustomRoutingAccelerator();
    CustomRoutingAccelerator(Aws::Utils::Json::JsonView jsonValue);
    CustomRoutingAccelerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const{ return m_acceleratorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline void SetAcceleratorArn(const Aws::String& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline void SetAcceleratorArn(Aws::String&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline void SetAcceleratorArn(const char* value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithAcceleratorArn(const Aws::String& value) { SetAcceleratorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithAcceleratorArn(Aws::String&& value) { SetAcceleratorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the custom routing accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithAcceleratorArn(const char* value) { SetAcceleratorArn(value); return *this;}


    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline CustomRoutingAccelerator& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline CustomRoutingAccelerator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline CustomRoutingAccelerator& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline CustomRoutingAccelerator& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The value for the address type must be IPv4.</p>
     */
    inline CustomRoutingAccelerator& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}


    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline CustomRoutingAccelerator& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline const Aws::Vector<IpSet>& GetIpSets() const{ return m_ipSets; }

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline bool IpSetsHasBeenSet() const { return m_ipSetsHasBeenSet; }

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline void SetIpSets(const Aws::Vector<IpSet>& value) { m_ipSetsHasBeenSet = true; m_ipSets = value; }

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline void SetIpSets(Aws::Vector<IpSet>&& value) { m_ipSetsHasBeenSet = true; m_ipSets = std::move(value); }

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithIpSets(const Aws::Vector<IpSet>& value) { SetIpSets(value); return *this;}

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithIpSets(Aws::Vector<IpSet>&& value) { SetIpSets(std::move(value)); return *this;}

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline CustomRoutingAccelerator& AddIpSets(const IpSet& value) { m_ipSetsHasBeenSet = true; m_ipSets.push_back(value); return *this; }

    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline CustomRoutingAccelerator& AddIpSets(IpSet&& value) { m_ipSetsHasBeenSet = true; m_ipSets.push_back(std::move(value)); return *this; }


    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDnsName() const{ return m_dnsName; }

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline void SetDnsName(const Aws::String& value) { m_dnsNameHasBeenSet = true; m_dnsName = value; }

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline void SetDnsName(Aws::String&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::move(value); }

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline void SetDnsName(const char* value) { m_dnsNameHasBeenSet = true; m_dnsName.assign(value); }

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline CustomRoutingAccelerator& WithDnsName(const Aws::String& value) { SetDnsName(value); return *this;}

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline CustomRoutingAccelerator& WithDnsName(Aws::String&& value) { SetDnsName(std::move(value)); return *this;}

    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to your accelerator's static IP addresses. </p> <p>The naming convention for the
     * DNS name is the following: A lowercase letter a, followed by a 16-bit random hex
     * string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>For more information about
     * the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS Addressing in Global Accelerator</a> in the <i>AWS Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline CustomRoutingAccelerator& WithDnsName(const char* value) { SetDnsName(value); return *this;}


    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline const CustomRoutingAcceleratorStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline void SetStatus(const CustomRoutingAcceleratorStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline void SetStatus(CustomRoutingAcceleratorStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithStatus(const CustomRoutingAcceleratorStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline CustomRoutingAccelerator& WithStatus(CustomRoutingAcceleratorStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline CustomRoutingAccelerator& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline CustomRoutingAccelerator& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline CustomRoutingAccelerator& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline CustomRoutingAccelerator& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet;

    bool m_enabled;
    bool m_enabledHasBeenSet;

    Aws::Vector<IpSet> m_ipSets;
    bool m_ipSetsHasBeenSet;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet;

    CustomRoutingAcceleratorStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
