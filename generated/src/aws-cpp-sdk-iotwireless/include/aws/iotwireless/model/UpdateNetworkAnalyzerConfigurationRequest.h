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
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateNetworkAnalyzerConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkAnalyzerConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConfigurationName() const { return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    template<typename ConfigurationNameT = Aws::String>
    void SetConfigurationName(ConfigurationNameT&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::forward<ConfigurationNameT>(value); }
    template<typename ConfigurationNameT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(ConfigurationNameT&& value) { SetConfigurationName(std::forward<ConfigurationNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TraceContent& GetTraceContent() const { return m_traceContent; }
    inline bool TraceContentHasBeenSet() const { return m_traceContentHasBeenSet; }
    template<typename TraceContentT = TraceContent>
    void SetTraceContent(TraceContentT&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::forward<TraceContentT>(value); }
    template<typename TraceContentT = TraceContent>
    UpdateNetworkAnalyzerConfigurationRequest& WithTraceContent(TraceContentT&& value) { SetTraceContent(std::forward<TraceContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to add to the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToAdd() const { return m_wirelessDevicesToAdd; }
    inline bool WirelessDevicesToAddHasBeenSet() const { return m_wirelessDevicesToAddHasBeenSet; }
    template<typename WirelessDevicesToAddT = Aws::Vector<Aws::String>>
    void SetWirelessDevicesToAdd(WirelessDevicesToAddT&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd = std::forward<WirelessDevicesToAddT>(value); }
    template<typename WirelessDevicesToAddT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToAdd(WirelessDevicesToAddT&& value) { SetWirelessDevicesToAdd(std::forward<WirelessDevicesToAddT>(value)); return *this;}
    template<typename WirelessDevicesToAddT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(WirelessDevicesToAddT&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.emplace_back(std::forward<WirelessDevicesToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to remove from the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToRemove() const { return m_wirelessDevicesToRemove; }
    inline bool WirelessDevicesToRemoveHasBeenSet() const { return m_wirelessDevicesToRemoveHasBeenSet; }
    template<typename WirelessDevicesToRemoveT = Aws::Vector<Aws::String>>
    void SetWirelessDevicesToRemove(WirelessDevicesToRemoveT&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove = std::forward<WirelessDevicesToRemoveT>(value); }
    template<typename WirelessDevicesToRemoveT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToRemove(WirelessDevicesToRemoveT&& value) { SetWirelessDevicesToRemove(std::forward<WirelessDevicesToRemoveT>(value)); return *this;}
    template<typename WirelessDevicesToRemoveT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(WirelessDevicesToRemoveT&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.emplace_back(std::forward<WirelessDevicesToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to add to the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToAdd() const { return m_wirelessGatewaysToAdd; }
    inline bool WirelessGatewaysToAddHasBeenSet() const { return m_wirelessGatewaysToAddHasBeenSet; }
    template<typename WirelessGatewaysToAddT = Aws::Vector<Aws::String>>
    void SetWirelessGatewaysToAdd(WirelessGatewaysToAddT&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd = std::forward<WirelessGatewaysToAddT>(value); }
    template<typename WirelessGatewaysToAddT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToAdd(WirelessGatewaysToAddT&& value) { SetWirelessGatewaysToAdd(std::forward<WirelessGatewaysToAddT>(value)); return *this;}
    template<typename WirelessGatewaysToAddT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(WirelessGatewaysToAddT&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.emplace_back(std::forward<WirelessGatewaysToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to remove from the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToRemove() const { return m_wirelessGatewaysToRemove; }
    inline bool WirelessGatewaysToRemoveHasBeenSet() const { return m_wirelessGatewaysToRemoveHasBeenSet; }
    template<typename WirelessGatewaysToRemoveT = Aws::Vector<Aws::String>>
    void SetWirelessGatewaysToRemove(WirelessGatewaysToRemoveT&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove = std::forward<WirelessGatewaysToRemoveT>(value); }
    template<typename WirelessGatewaysToRemoveT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToRemove(WirelessGatewaysToRemoveT&& value) { SetWirelessGatewaysToRemove(std::forward<WirelessGatewaysToRemoveT>(value)); return *this;}
    template<typename WirelessGatewaysToRemoveT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(WirelessGatewaysToRemoveT&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.emplace_back(std::forward<WirelessGatewaysToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Multicast group resources to add to the network analyzer configuration.
     * Provide the <code>MulticastGroupId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroupsToAdd() const { return m_multicastGroupsToAdd; }
    inline bool MulticastGroupsToAddHasBeenSet() const { return m_multicastGroupsToAddHasBeenSet; }
    template<typename MulticastGroupsToAddT = Aws::Vector<Aws::String>>
    void SetMulticastGroupsToAdd(MulticastGroupsToAddT&& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd = std::forward<MulticastGroupsToAddT>(value); }
    template<typename MulticastGroupsToAddT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToAdd(MulticastGroupsToAddT&& value) { SetMulticastGroupsToAdd(std::forward<MulticastGroupsToAddT>(value)); return *this;}
    template<typename MulticastGroupsToAddT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToAdd(MulticastGroupsToAddT&& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd.emplace_back(std::forward<MulticastGroupsToAddT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Multicast group resources to remove from the network analyzer configuration.
     * Provide the <code>MulticastGroupId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroupsToRemove() const { return m_multicastGroupsToRemove; }
    inline bool MulticastGroupsToRemoveHasBeenSet() const { return m_multicastGroupsToRemoveHasBeenSet; }
    template<typename MulticastGroupsToRemoveT = Aws::Vector<Aws::String>>
    void SetMulticastGroupsToRemove(MulticastGroupsToRemoveT&& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove = std::forward<MulticastGroupsToRemoveT>(value); }
    template<typename MulticastGroupsToRemoveT = Aws::Vector<Aws::String>>
    UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToRemove(MulticastGroupsToRemoveT&& value) { SetMulticastGroupsToRemove(std::forward<MulticastGroupsToRemoveT>(value)); return *this;}
    template<typename MulticastGroupsToRemoveT = Aws::String>
    UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToRemove(MulticastGroupsToRemoveT&& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove.emplace_back(std::forward<MulticastGroupsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet = false;

    TraceContent m_traceContent;
    bool m_traceContentHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessDevicesToAdd;
    bool m_wirelessDevicesToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessDevicesToRemove;
    bool m_wirelessDevicesToRemoveHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessGatewaysToAdd;
    bool m_wirelessGatewaysToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessGatewaysToRemove;
    bool m_wirelessGatewaysToRemoveHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_multicastGroupsToAdd;
    bool m_multicastGroupsToAddHasBeenSet = false;

    Aws::Vector<Aws::String> m_multicastGroupsToRemove;
    bool m_multicastGroupsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
