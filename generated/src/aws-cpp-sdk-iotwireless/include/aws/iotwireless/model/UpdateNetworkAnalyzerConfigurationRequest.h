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
    AWS_IOTWIRELESS_API UpdateNetworkAnalyzerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkAnalyzerConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}
    ///@}

    ///@{
    
    inline const TraceContent& GetTraceContent() const{ return m_traceContent; }
    inline bool TraceContentHasBeenSet() const { return m_traceContentHasBeenSet; }
    inline void SetTraceContent(const TraceContent& value) { m_traceContentHasBeenSet = true; m_traceContent = value; }
    inline void SetTraceContent(TraceContent&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithTraceContent(const TraceContent& value) { SetTraceContent(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithTraceContent(TraceContent&& value) { SetTraceContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to add to the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToAdd() const{ return m_wirelessDevicesToAdd; }
    inline bool WirelessDevicesToAddHasBeenSet() const { return m_wirelessDevicesToAddHasBeenSet; }
    inline void SetWirelessDevicesToAdd(const Aws::Vector<Aws::String>& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd = value; }
    inline void SetWirelessDevicesToAdd(Aws::Vector<Aws::String>&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToAdd(const Aws::Vector<Aws::String>& value) { SetWirelessDevicesToAdd(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToAdd(Aws::Vector<Aws::String>&& value) { SetWirelessDevicesToAdd(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(const Aws::String& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(Aws::String&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(const char* value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to remove from the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToRemove() const{ return m_wirelessDevicesToRemove; }
    inline bool WirelessDevicesToRemoveHasBeenSet() const { return m_wirelessDevicesToRemoveHasBeenSet; }
    inline void SetWirelessDevicesToRemove(const Aws::Vector<Aws::String>& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove = value; }
    inline void SetWirelessDevicesToRemove(Aws::Vector<Aws::String>&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToRemove(const Aws::Vector<Aws::String>& value) { SetWirelessDevicesToRemove(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToRemove(Aws::Vector<Aws::String>&& value) { SetWirelessDevicesToRemove(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(const Aws::String& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(Aws::String&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(const char* value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to add to the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToAdd() const{ return m_wirelessGatewaysToAdd; }
    inline bool WirelessGatewaysToAddHasBeenSet() const { return m_wirelessGatewaysToAddHasBeenSet; }
    inline void SetWirelessGatewaysToAdd(const Aws::Vector<Aws::String>& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd = value; }
    inline void SetWirelessGatewaysToAdd(Aws::Vector<Aws::String>&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToAdd(const Aws::Vector<Aws::String>& value) { SetWirelessGatewaysToAdd(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToAdd(Aws::Vector<Aws::String>&& value) { SetWirelessGatewaysToAdd(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(const Aws::String& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(Aws::String&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(const char* value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to remove from the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToRemove() const{ return m_wirelessGatewaysToRemove; }
    inline bool WirelessGatewaysToRemoveHasBeenSet() const { return m_wirelessGatewaysToRemoveHasBeenSet; }
    inline void SetWirelessGatewaysToRemove(const Aws::Vector<Aws::String>& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove = value; }
    inline void SetWirelessGatewaysToRemove(Aws::Vector<Aws::String>&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToRemove(const Aws::Vector<Aws::String>& value) { SetWirelessGatewaysToRemove(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToRemove(Aws::Vector<Aws::String>&& value) { SetWirelessGatewaysToRemove(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(const Aws::String& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(Aws::String&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(const char* value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Multicast group resources to add to the network analyzer configuration.
     * Provide the <code>MulticastGroupId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroupsToAdd() const{ return m_multicastGroupsToAdd; }
    inline bool MulticastGroupsToAddHasBeenSet() const { return m_multicastGroupsToAddHasBeenSet; }
    inline void SetMulticastGroupsToAdd(const Aws::Vector<Aws::String>& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd = value; }
    inline void SetMulticastGroupsToAdd(Aws::Vector<Aws::String>&& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToAdd(const Aws::Vector<Aws::String>& value) { SetMulticastGroupsToAdd(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToAdd(Aws::Vector<Aws::String>&& value) { SetMulticastGroupsToAdd(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToAdd(const Aws::String& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToAdd(Aws::String&& value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToAdd(const char* value) { m_multicastGroupsToAddHasBeenSet = true; m_multicastGroupsToAdd.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Multicast group resources to remove from the network analyzer configuration.
     * Provide the <code>MulticastGroupId</code> of the resources to remove in the
     * input array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroupsToRemove() const{ return m_multicastGroupsToRemove; }
    inline bool MulticastGroupsToRemoveHasBeenSet() const { return m_multicastGroupsToRemoveHasBeenSet; }
    inline void SetMulticastGroupsToRemove(const Aws::Vector<Aws::String>& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove = value; }
    inline void SetMulticastGroupsToRemove(Aws::Vector<Aws::String>&& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove = std::move(value); }
    inline UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToRemove(const Aws::Vector<Aws::String>& value) { SetMulticastGroupsToRemove(value); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& WithMulticastGroupsToRemove(Aws::Vector<Aws::String>&& value) { SetMulticastGroupsToRemove(std::move(value)); return *this;}
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToRemove(const Aws::String& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove.push_back(value); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToRemove(Aws::String&& value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove.push_back(std::move(value)); return *this; }
    inline UpdateNetworkAnalyzerConfigurationRequest& AddMulticastGroupsToRemove(const char* value) { m_multicastGroupsToRemoveHasBeenSet = true; m_multicastGroupsToRemove.push_back(value); return *this; }
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
