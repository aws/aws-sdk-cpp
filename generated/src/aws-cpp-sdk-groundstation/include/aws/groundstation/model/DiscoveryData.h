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
    AWS_GROUNDSTATION_API DiscoveryData();
    AWS_GROUNDSTATION_API DiscoveryData(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API DiscoveryData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCapabilityArns() const{ return m_capabilityArns; }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline bool CapabilityArnsHasBeenSet() const { return m_capabilityArnsHasBeenSet; }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline void SetCapabilityArns(const Aws::Vector<Aws::String>& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns = value; }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline void SetCapabilityArns(Aws::Vector<Aws::String>&& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns = std::move(value); }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline DiscoveryData& WithCapabilityArns(const Aws::Vector<Aws::String>& value) { SetCapabilityArns(value); return *this;}

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline DiscoveryData& WithCapabilityArns(Aws::Vector<Aws::String>&& value) { SetCapabilityArns(std::move(value)); return *this;}

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline DiscoveryData& AddCapabilityArns(const Aws::String& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns.push_back(value); return *this; }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline DiscoveryData& AddCapabilityArns(Aws::String&& value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns.push_back(std::move(value)); return *this; }

    /**
     * <p>List of capabilities to associate with agent.</p>
     */
    inline DiscoveryData& AddCapabilityArns(const char* value) { m_capabilityArnsHasBeenSet = true; m_capabilityArns.push_back(value); return *this; }


    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPrivateIpAddresses() const{ return m_privateIpAddresses; }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline bool PrivateIpAddressesHasBeenSet() const { return m_privateIpAddressesHasBeenSet; }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline void SetPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = value; }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline void SetPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses = std::move(value); }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& WithPrivateIpAddresses(const Aws::Vector<Aws::String>& value) { SetPrivateIpAddresses(value); return *this;}

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& WithPrivateIpAddresses(Aws::Vector<Aws::String>&& value) { SetPrivateIpAddresses(std::move(value)); return *this;}

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPrivateIpAddresses(const Aws::String& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPrivateIpAddresses(Aws::String&& value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>List of private IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPrivateIpAddresses(const char* value) { m_privateIpAddressesHasBeenSet = true; m_privateIpAddresses.push_back(value); return *this; }


    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicIpAddresses() const{ return m_publicIpAddresses; }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline bool PublicIpAddressesHasBeenSet() const { return m_publicIpAddressesHasBeenSet; }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline void SetPublicIpAddresses(const Aws::Vector<Aws::String>& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = value; }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline void SetPublicIpAddresses(Aws::Vector<Aws::String>&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses = std::move(value); }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& WithPublicIpAddresses(const Aws::Vector<Aws::String>& value) { SetPublicIpAddresses(value); return *this;}

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& WithPublicIpAddresses(Aws::Vector<Aws::String>&& value) { SetPublicIpAddresses(std::move(value)); return *this;}

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPublicIpAddresses(const Aws::String& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(value); return *this; }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPublicIpAddresses(Aws::String&& value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(std::move(value)); return *this; }

    /**
     * <p>List of public IP addresses to associate with agent.</p>
     */
    inline DiscoveryData& AddPublicIpAddresses(const char* value) { m_publicIpAddressesHasBeenSet = true; m_publicIpAddresses.push_back(value); return *this; }

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
