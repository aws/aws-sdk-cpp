/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/TraceContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotwireless/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class CreateNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API CreateNetworkAnalyzerConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkAnalyzerConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TraceContent& GetTraceContent() const { return m_traceContent; }
    inline bool TraceContentHasBeenSet() const { return m_traceContentHasBeenSet; }
    template<typename TraceContentT = TraceContent>
    void SetTraceContent(TraceContentT&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::forward<TraceContentT>(value); }
    template<typename TraceContentT = TraceContent>
    CreateNetworkAnalyzerConfigurationRequest& WithTraceContent(TraceContentT&& value) { SetTraceContent(std::forward<TraceContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to add to the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevices() const { return m_wirelessDevices; }
    inline bool WirelessDevicesHasBeenSet() const { return m_wirelessDevicesHasBeenSet; }
    template<typename WirelessDevicesT = Aws::Vector<Aws::String>>
    void SetWirelessDevices(WirelessDevicesT&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices = std::forward<WirelessDevicesT>(value); }
    template<typename WirelessDevicesT = Aws::Vector<Aws::String>>
    CreateNetworkAnalyzerConfigurationRequest& WithWirelessDevices(WirelessDevicesT&& value) { SetWirelessDevices(std::forward<WirelessDevicesT>(value)); return *this;}
    template<typename WirelessDevicesT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& AddWirelessDevices(WirelessDevicesT&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices.emplace_back(std::forward<WirelessDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to add to the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGateways() const { return m_wirelessGateways; }
    inline bool WirelessGatewaysHasBeenSet() const { return m_wirelessGatewaysHasBeenSet; }
    template<typename WirelessGatewaysT = Aws::Vector<Aws::String>>
    void SetWirelessGateways(WirelessGatewaysT&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways = std::forward<WirelessGatewaysT>(value); }
    template<typename WirelessGatewaysT = Aws::Vector<Aws::String>>
    CreateNetworkAnalyzerConfigurationRequest& WithWirelessGateways(WirelessGatewaysT&& value) { SetWirelessGateways(std::forward<WirelessGatewaysT>(value)); return *this;}
    template<typename WirelessGatewaysT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& AddWirelessGateways(WirelessGatewaysT&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways.emplace_back(std::forward<WirelessGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateNetworkAnalyzerConfigurationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateNetworkAnalyzerConfigurationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Multicast Group resources to add to the network analyzer configruation.
     * Provide the <code>MulticastGroupId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroups() const { return m_multicastGroups; }
    inline bool MulticastGroupsHasBeenSet() const { return m_multicastGroupsHasBeenSet; }
    template<typename MulticastGroupsT = Aws::Vector<Aws::String>>
    void SetMulticastGroups(MulticastGroupsT&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups = std::forward<MulticastGroupsT>(value); }
    template<typename MulticastGroupsT = Aws::Vector<Aws::String>>
    CreateNetworkAnalyzerConfigurationRequest& WithMulticastGroups(MulticastGroupsT&& value) { SetMulticastGroups(std::forward<MulticastGroupsT>(value)); return *this;}
    template<typename MulticastGroupsT = Aws::String>
    CreateNetworkAnalyzerConfigurationRequest& AddMulticastGroups(MulticastGroupsT&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups.emplace_back(std::forward<MulticastGroupsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    TraceContent m_traceContent;
    bool m_traceContentHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessDevices;
    bool m_wirelessDevicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessGateways;
    bool m_wirelessGatewaysHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::Vector<Aws::String> m_multicastGroups;
    bool m_multicastGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
