/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/globalaccelerator/GlobalAccelerator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/globalaccelerator/model/IpAddressType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/globalaccelerator/model/AcceleratorStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/globalaccelerator/model/IpSet.h>
#include <aws/globalaccelerator/model/AcceleratorEvent.h>
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
   * <p>An accelerator is a complex type that includes one or more listeners that
   * process inbound connections and then direct traffic to one or more endpoint
   * groups, each of which includes endpoints, such as load balancers.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/globalaccelerator-2018-08-08/Accelerator">AWS
   * API Reference</a></p>
   */
  class Accelerator
  {
  public:
    AWS_GLOBALACCELERATOR_API Accelerator() = default;
    AWS_GLOBALACCELERATOR_API Accelerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Accelerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLOBALACCELERATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the accelerator.</p>
     */
    inline const Aws::String& GetAcceleratorArn() const { return m_acceleratorArn; }
    inline bool AcceleratorArnHasBeenSet() const { return m_acceleratorArnHasBeenSet; }
    template<typename AcceleratorArnT = Aws::String>
    void SetAcceleratorArn(AcceleratorArnT&& value) { m_acceleratorArnHasBeenSet = true; m_acceleratorArn = std::forward<AcceleratorArnT>(value); }
    template<typename AcceleratorArnT = Aws::String>
    Accelerator& WithAcceleratorArn(AcceleratorArnT&& value) { SetAcceleratorArn(std::forward<AcceleratorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the accelerator. The name must contain only alphanumeric
     * characters or hyphens (-), and must not begin or end with a hyphen.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Accelerator& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type that an accelerator supports. For a standard accelerator,
     * the value can be IPV4 or DUAL_STACK.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline Accelerator& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the accelerator is enabled. The value is true or false. The
     * default value is true. </p> <p>If the value is set to true, the accelerator
     * cannot be deleted. If set to false, accelerator can be deleted.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline Accelerator& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The static IP addresses that Global Accelerator associates with the
     * accelerator.</p>
     */
    inline const Aws::Vector<IpSet>& GetIpSets() const { return m_ipSets; }
    inline bool IpSetsHasBeenSet() const { return m_ipSetsHasBeenSet; }
    template<typename IpSetsT = Aws::Vector<IpSet>>
    void SetIpSets(IpSetsT&& value) { m_ipSetsHasBeenSet = true; m_ipSets = std::forward<IpSetsT>(value); }
    template<typename IpSetsT = Aws::Vector<IpSet>>
    Accelerator& WithIpSets(IpSetsT&& value) { SetIpSets(std::forward<IpSetsT>(value)); return *this;}
    template<typename IpSetsT = IpSet>
    Accelerator& AddIpSets(IpSetsT&& value) { m_ipSetsHasBeenSet = true; m_ipSets.emplace_back(std::forward<IpSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to an accelerator's static IPv4 addresses.</p> <p>The naming convention for the
     * DNS name for an accelerator is the following: A lowercase letter a, followed by
     * a 16-bit random hex string, followed by .awsglobalaccelerator.com. For example:
     * a1234567890abcdef.awsglobalaccelerator.com.</p> <p>If you have a dual-stack
     * accelerator, you also have a second DNS name, <code>DualStackDnsName</code>,
     * that points to both the A record and the AAAA record for all four static
     * addresses for the accelerator: two IPv4 addresses and two IPv6 addresses.</p>
     * <p>For more information about the default DNS name, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/dns-addressing-custom-domains.dns-addressing.html">
     * Support for DNS addressing in Global Accelerator</a> in the <i>Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDnsName() const { return m_dnsName; }
    inline bool DnsNameHasBeenSet() const { return m_dnsNameHasBeenSet; }
    template<typename DnsNameT = Aws::String>
    void SetDnsName(DnsNameT&& value) { m_dnsNameHasBeenSet = true; m_dnsName = std::forward<DnsNameT>(value); }
    template<typename DnsNameT = Aws::String>
    Accelerator& WithDnsName(DnsNameT&& value) { SetDnsName(std::forward<DnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the deployment status of the accelerator.</p>
     */
    inline AcceleratorStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AcceleratorStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Accelerator& WithStatus(AcceleratorStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the accelerator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    Accelerator& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the accelerator was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    Accelerator& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Domain Name System (DNS) name that Global Accelerator creates that points
     * to a dual-stack accelerator's four static IP addresses: two IPv4 addresses and
     * two IPv6 addresses.</p> <p>The naming convention for the dual-stack DNS name is
     * the following: A lowercase letter a, followed by a 16-bit random hex string,
     * followed by .dualstack.awsglobalaccelerator.com. For example:
     * a1234567890abcdef.dualstack.awsglobalaccelerator.com.</p> <p>Note: Global
     * Accelerator also assigns a default DNS name, <code>DnsName</code>, to your
     * accelerator that points just to the static IPv4 addresses. </p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/global-accelerator/latest/dg/about-accelerators.html#about-accelerators.dns-addressing">
     * Support for DNS addressing in Global Accelerator</a> in the <i>Global
     * Accelerator Developer Guide</i>.</p>
     */
    inline const Aws::String& GetDualStackDnsName() const { return m_dualStackDnsName; }
    inline bool DualStackDnsNameHasBeenSet() const { return m_dualStackDnsNameHasBeenSet; }
    template<typename DualStackDnsNameT = Aws::String>
    void SetDualStackDnsName(DualStackDnsNameT&& value) { m_dualStackDnsNameHasBeenSet = true; m_dualStackDnsName = std::forward<DualStackDnsNameT>(value); }
    template<typename DualStackDnsNameT = Aws::String>
    Accelerator& WithDualStackDnsName(DualStackDnsNameT&& value) { SetDualStackDnsName(std::forward<DualStackDnsNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A history of changes that you make to an accelerator in Global
     * Accelerator.</p>
     */
    inline const Aws::Vector<AcceleratorEvent>& GetEvents() const { return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    template<typename EventsT = Aws::Vector<AcceleratorEvent>>
    void SetEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events = std::forward<EventsT>(value); }
    template<typename EventsT = Aws::Vector<AcceleratorEvent>>
    Accelerator& WithEvents(EventsT&& value) { SetEvents(std::forward<EventsT>(value)); return *this;}
    template<typename EventsT = AcceleratorEvent>
    Accelerator& AddEvents(EventsT&& value) { m_eventsHasBeenSet = true; m_events.emplace_back(std::forward<EventsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_acceleratorArn;
    bool m_acceleratorArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::Vector<IpSet> m_ipSets;
    bool m_ipSetsHasBeenSet = false;

    Aws::String m_dnsName;
    bool m_dnsNameHasBeenSet = false;

    AcceleratorStatus m_status{AcceleratorStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_dualStackDnsName;
    bool m_dualStackDnsNameHasBeenSet = false;

    Aws::Vector<AcceleratorEvent> m_events;
    bool m_eventsHasBeenSet = false;
  };

} // namespace Model
} // namespace GlobalAccelerator
} // namespace Aws
