/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace GroundStation
{
namespace Model
{

  /**
   * <p>Data for agent discovery.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/DiscoveryData">AWS
   * API Reference</a></p>
   */
  class DiscoveryData
  {
  public:
    AWS_GROUNDSTATION_API DiscoveryData() = default;
    AWS_GROUNDSTATION_API DiscoveryData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DiscoveryData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilityArns() const { return m_capabilityArns; }
    inline bool CapabilityArnsHasBeenSet() const { return m_capabilityArnsHasBeenSet; }
    template<typename CapabilityArnsT = Aws::Vector<Aws::String>>
    void SetCapabilityArns(CapabilityArnsT&& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns = std::forward<CapabilityArnsT>(value); }
    template<typename CapabilityArnsT = Aws::Vector<Aws::String>>
    DiscoveryData& WithCapabilityArns(CapabilityArnsT&& value) { SetCapabilityArns(std::forward<CapabilityArnsT>(value)); return *this;}
    template<typename CapabilityArnsT = Aws::String>
    DiscoveryData& AddCapabilityArns(CapabilityArnsT&& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns.emplace_back(std::forward<CapabilityArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const { return m_privateIpAddresses; }
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }
    template<typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
    void SetPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::forward<PrivateIpAddressesT>(value); }
    template<typename PrivateIpAddressesT = Aws::Vector<Aws::String>>
    DiscoveryData& WithPrivateIpAddresses(PrivateIpAddressesT&& value) { SetPrivateIpAddresses(std::forward<PrivateIpAddressesT>(value)); return *this;}
    template<typename PrivateIpAddressesT = Aws::String>
    DiscoveryData& AddPrivateIpAddresses(PrivateIpAddressesT&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.emplace_back(std::forward<PrivateIpAddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIpAddresses() const { return m_publicIpAddresses; }
    inline bool PublicIpAddressesHasBeenSet() const { return m_publicIpAddressesHasBeenSet; }
    template<typename PublicIpAddressesT = Aws::Vector<Aws::String>>
    void SetPublicIpAddresses(PublicIpAddressesT&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = std::forward<PublicIpAddressesT>(value); }
    template<typename PublicIpAddressesT = Aws::Vector<Aws::String>>
    DiscoveryData& WithPublicIpAddresses(PublicIpAddressesT&& value) { SetPublicIpAddresses(std::forward<PublicIpAddressesT>(value)); return *this;}
    template<typename PublicIpAddressesT = Aws::String>
    DiscoveryData& AddPublicIpAddresses(PublicIpAddressesT&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.emplace_back(std::forward<PublicIpAddressesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_capabilityArns;
    bool m_capabilityArnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_privateIpAddresses;
    bool m_privateIpAddressesHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicIpAddresses;
    bool m_publicIpAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace GroundStation
} // namespace Aws
