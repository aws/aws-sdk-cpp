/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/inspector/model/Tag.h>
#include <aws/inspector/model/NetworkInterface.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>A collection of attributes of the host from which the finding is
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/AssetAttributes">AWS
   * API Reference</a></p>
   */
  class AssetAttributes
  {
  public:
    AWS_INSPECTOR_API AssetAttributes() = default;
    AWS_INSPECTOR_API AssetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline AssetAttributes& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline const Aws::String& GetAgentId() const { return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    template<typename AgentIdT = Aws::String>
    void SetAgentId(AgentIdT&& value) { m_agentIdHasBeenSet = true; m_agentId = std::forward<AgentIdT>(value); }
    template<typename AgentIdT = Aws::String>
    AssetAttributes& WithAgentId(AgentIdT&& value) { SetAgentId(std::forward<AgentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const { return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    template<typename AutoScalingGroupT = Aws::String>
    void SetAutoScalingGroup(AutoScalingGroupT&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::forward<AutoScalingGroupT>(value); }
    template<typename AutoScalingGroupT = Aws::String>
    AssetAttributes& WithAutoScalingGroup(AutoScalingGroupT&& value) { SetAutoScalingGroup(std::forward<AutoScalingGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline const Aws::String& GetAmiId() const { return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    template<typename AmiIdT = Aws::String>
    void SetAmiId(AmiIdT&& value) { m_amiIdHasBeenSet = true; m_amiId = std::forward<AmiIdT>(value); }
    template<typename AmiIdT = Aws::String>
    AssetAttributes& WithAmiId(AmiIdT&& value) { SetAmiId(std::forward<AmiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    AssetAttributes& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const { return m_ipv4Addresses; }
    inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    void SetIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = std::forward<Ipv4AddressesT>(value); }
    template<typename Ipv4AddressesT = Aws::Vector<Aws::String>>
    AssetAttributes& WithIpv4Addresses(Ipv4AddressesT&& value) { SetIpv4Addresses(std::forward<Ipv4AddressesT>(value)); return *this;}
    template<typename Ipv4AddressesT = Aws::String>
    AssetAttributes& AddIpv4Addresses(Ipv4AddressesT&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.emplace_back(std::forward<Ipv4AddressesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    AssetAttributes& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    AssetAttributes& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const { return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    void SetNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::forward<NetworkInterfacesT>(value); }
    template<typename NetworkInterfacesT = Aws::Vector<NetworkInterface>>
    AssetAttributes& WithNetworkInterfaces(NetworkInterfacesT&& value) { SetNetworkInterfaces(std::forward<NetworkInterfacesT>(value)); return *this;}
    template<typename NetworkInterfacesT = NetworkInterface>
    AssetAttributes& AddNetworkInterfaces(NetworkInterfacesT&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.emplace_back(std::forward<NetworkInterfacesT>(value)); return *this; }
    ///@}
  private:

    int m_schemaVersion{0};
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet = false;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet = false;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipv4Addresses;
    bool m_ipv4AddressesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
