﻿/**
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
    AWS_IOTWIRELESS_API CreateNetworkAnalyzerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkAnalyzerConfiguration"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    
    inline const TraceContent& GetTraceContent() const{ return m_traceContent; }
    inline bool TraceContentHasBeenSet() const { return m_traceContentHasBeenSet; }
    inline void SetTraceContent(const TraceContent& value) { m_traceContentHasBeenSet = true; m_traceContent = value; }
    inline void SetTraceContent(TraceContent&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::move(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithTraceContent(const TraceContent& value) { SetTraceContent(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithTraceContent(TraceContent&& value) { SetTraceContent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Wireless device resources to add to the network analyzer configuration.
     * Provide the <code>WirelessDeviceId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevices() const{ return m_wirelessDevices; }
    inline bool WirelessDevicesHasBeenSet() const { return m_wirelessDevicesHasBeenSet; }
    inline void SetWirelessDevices(const Aws::Vector<Aws::String>& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices = value; }
    inline void SetWirelessDevices(Aws::Vector<Aws::String>&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices = std::move(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithWirelessDevices(const Aws::Vector<Aws::String>& value) { SetWirelessDevices(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithWirelessDevices(Aws::Vector<Aws::String>&& value) { SetWirelessDevices(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessDevices(const Aws::String& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices.push_back(value); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessDevices(Aws::String&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices.push_back(std::move(value)); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessDevices(const char* value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Wireless gateway resources to add to the network analyzer configuration.
     * Provide the <code>WirelessGatewayId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGateways() const{ return m_wirelessGateways; }
    inline bool WirelessGatewaysHasBeenSet() const { return m_wirelessGatewaysHasBeenSet; }
    inline void SetWirelessGateways(const Aws::Vector<Aws::String>& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways = value; }
    inline void SetWirelessGateways(Aws::Vector<Aws::String>&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways = std::move(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithWirelessGateways(const Aws::Vector<Aws::String>& value) { SetWirelessGateways(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithWirelessGateways(Aws::Vector<Aws::String>&& value) { SetWirelessGateways(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessGateways(const Aws::String& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways.push_back(value); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessGateways(Aws::String&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways.push_back(std::move(value)); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddWirelessGateways(const char* value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Multicast Group resources to add to the network analyzer configruation.
     * Provide the <code>MulticastGroupId</code> of the resource to add in the input
     * array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroups() const{ return m_multicastGroups; }
    inline bool MulticastGroupsHasBeenSet() const { return m_multicastGroupsHasBeenSet; }
    inline void SetMulticastGroups(const Aws::Vector<Aws::String>& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups = value; }
    inline void SetMulticastGroups(Aws::Vector<Aws::String>&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups = std::move(value); }
    inline CreateNetworkAnalyzerConfigurationRequest& WithMulticastGroups(const Aws::Vector<Aws::String>& value) { SetMulticastGroups(value); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& WithMulticastGroups(Aws::Vector<Aws::String>&& value) { SetMulticastGroups(std::move(value)); return *this;}
    inline CreateNetworkAnalyzerConfigurationRequest& AddMulticastGroups(const Aws::String& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups.push_back(value); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddMulticastGroups(Aws::String&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups.push_back(std::move(value)); return *this; }
    inline CreateNetworkAnalyzerConfigurationRequest& AddMulticastGroups(const char* value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups.push_back(value); return *this; }
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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_multicastGroups;
    bool m_multicastGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
