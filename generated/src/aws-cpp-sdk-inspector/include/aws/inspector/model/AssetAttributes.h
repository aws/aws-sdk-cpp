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
    AWS_INSPECTOR_API AssetAttributes();
    AWS_INSPECTOR_API AssetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API AssetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline AssetAttributes& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }
    inline AssetAttributes& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}
    inline AssetAttributes& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}
    inline AssetAttributes& WithAgentId(const char* value) { SetAgentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::move(value); }
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }
    inline AssetAttributes& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}
    inline AssetAttributes& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(std::move(value)); return *this;}
    inline AssetAttributes& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }
    inline AssetAttributes& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}
    inline AssetAttributes& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}
    inline AssetAttributes& WithAmiId(const char* value) { SetAmiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }
    inline AssetAttributes& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}
    inline AssetAttributes& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}
    inline AssetAttributes& WithHostname(const char* value) { SetHostname(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const{ return m_ipv4Addresses; }
    inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }
    inline void SetIpv4Addresses(const Aws::Vector<Aws::String>& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = value; }
    inline void SetIpv4Addresses(Aws::Vector<Aws::String>&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = std::move(value); }
    inline AssetAttributes& WithIpv4Addresses(const Aws::Vector<Aws::String>& value) { SetIpv4Addresses(value); return *this;}
    inline AssetAttributes& WithIpv4Addresses(Aws::Vector<Aws::String>&& value) { SetIpv4Addresses(std::move(value)); return *this;}
    inline AssetAttributes& AddIpv4Addresses(const Aws::String& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(value); return *this; }
    inline AssetAttributes& AddIpv4Addresses(Aws::String&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(std::move(value)); return *this; }
    inline AssetAttributes& AddIpv4Addresses(const char* value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline AssetAttributes& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline AssetAttributes& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline AssetAttributes& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline AssetAttributes& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }
    inline AssetAttributes& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}
    inline AssetAttributes& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}
    inline AssetAttributes& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }
    inline AssetAttributes& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_schemaVersion;
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
