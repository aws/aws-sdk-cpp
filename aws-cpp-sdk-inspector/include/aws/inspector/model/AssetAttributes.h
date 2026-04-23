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
  class AWS_INSPECTOR_API AssetAttributes
  {
  public:
    AssetAttributes();
    AssetAttributes(Aws::Utils::Json::JsonView jsonValue);
    AssetAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline AssetAttributes& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline const Aws::String& GetAgentId() const{ return m_agentId; }

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline bool AgentIdHasBeenSet() const { return m_agentIdHasBeenSet; }

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline void SetAgentId(const Aws::String& value) { m_agentIdHasBeenSet = true; m_agentId = value; }

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline void SetAgentId(Aws::String&& value) { m_agentIdHasBeenSet = true; m_agentId = std::move(value); }

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline void SetAgentId(const char* value) { m_agentIdHasBeenSet = true; m_agentId.assign(value); }

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline AssetAttributes& WithAgentId(const Aws::String& value) { SetAgentId(value); return *this;}

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline AssetAttributes& WithAgentId(Aws::String&& value) { SetAgentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the agent that is installed on the EC2 instance where the finding
     * is generated.</p>
     */
    inline AssetAttributes& WithAgentId(const char* value) { SetAgentId(value); return *this;}


    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::String& GetAutoScalingGroup() const{ return m_autoScalingGroup; }

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline bool AutoScalingGroupHasBeenSet() const { return m_autoScalingGroupHasBeenSet; }

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline void SetAutoScalingGroup(const Aws::String& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = value; }

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline void SetAutoScalingGroup(Aws::String&& value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup = std::move(value); }

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline void SetAutoScalingGroup(const char* value) { m_autoScalingGroupHasBeenSet = true; m_autoScalingGroup.assign(value); }

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& WithAutoScalingGroup(const Aws::String& value) { SetAutoScalingGroup(value); return *this;}

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& WithAutoScalingGroup(Aws::String&& value) { SetAutoScalingGroup(std::move(value)); return *this;}

    /**
     * <p>The Auto Scaling group of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& WithAutoScalingGroup(const char* value) { SetAutoScalingGroup(value); return *this;}


    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline const Aws::String& GetAmiId() const{ return m_amiId; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline void SetAmiId(const Aws::String& value) { m_amiIdHasBeenSet = true; m_amiId = value; }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline void SetAmiId(Aws::String&& value) { m_amiIdHasBeenSet = true; m_amiId = std::move(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline void SetAmiId(const char* value) { m_amiIdHasBeenSet = true; m_amiId.assign(value); }

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithAmiId(const Aws::String& value) { SetAmiId(value); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithAmiId(Aws::String&& value) { SetAmiId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Machine Image (AMI) that is installed on the EC2
     * instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithAmiId(const char* value) { SetAmiId(value); return *this;}


    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The hostname of the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpv4Addresses() const{ return m_ipv4Addresses; }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline bool Ipv4AddressesHasBeenSet() const { return m_ipv4AddressesHasBeenSet; }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline void SetIpv4Addresses(const Aws::Vector<Aws::String>& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = value; }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline void SetIpv4Addresses(Aws::Vector<Aws::String>&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses = std::move(value); }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& WithIpv4Addresses(const Aws::Vector<Aws::String>& value) { SetIpv4Addresses(value); return *this;}

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& WithIpv4Addresses(Aws::Vector<Aws::String>&& value) { SetIpv4Addresses(std::move(value)); return *this;}

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& AddIpv4Addresses(const Aws::String& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(value); return *this; }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& AddIpv4Addresses(Aws::String&& value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of IP v4 addresses of the EC2 instance where the finding is
     * generated.</p>
     */
    inline AssetAttributes& AddIpv4Addresses(const char* value) { m_ipv4AddressesHasBeenSet = true; m_ipv4Addresses.push_back(value); return *this; }


    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags related to the EC2 instance where the finding is generated.</p>
     */
    inline AssetAttributes& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline AssetAttributes& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline AssetAttributes& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline AssetAttributes& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>An array of the network interfaces interacting with the EC2 instance where
     * the finding is generated.</p>
     */
    inline AssetAttributes& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }

  private:

    int m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    Aws::String m_agentId;
    bool m_agentIdHasBeenSet;

    Aws::String m_autoScalingGroup;
    bool m_autoScalingGroupHasBeenSet;

    Aws::String m_amiId;
    bool m_amiIdHasBeenSet;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;

    Aws::Vector<Aws::String> m_ipv4Addresses;
    bool m_ipv4AddressesHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
