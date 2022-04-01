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
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class AWS_IOTWIRELESS_API UpdateNetworkAnalyzerConfigurationRequest : public IoTWirelessRequest
  {
  public:
    UpdateNetworkAnalyzerConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateNetworkAnalyzerConfiguration"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetConfigurationName() const{ return m_configurationName; }

    
    inline bool ConfigurationNameHasBeenSet() const { return m_configurationNameHasBeenSet; }

    
    inline void SetConfigurationName(const Aws::String& value) { m_configurationNameHasBeenSet = true; m_configurationName = value; }

    
    inline void SetConfigurationName(Aws::String&& value) { m_configurationNameHasBeenSet = true; m_configurationName = std::move(value); }

    
    inline void SetConfigurationName(const char* value) { m_configurationNameHasBeenSet = true; m_configurationName.assign(value); }

    
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(const Aws::String& value) { SetConfigurationName(value); return *this;}

    
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(Aws::String&& value) { SetConfigurationName(std::move(value)); return *this;}

    
    inline UpdateNetworkAnalyzerConfigurationRequest& WithConfigurationName(const char* value) { SetConfigurationName(value); return *this;}


    
    inline const TraceContent& GetTraceContent() const{ return m_traceContent; }

    
    inline bool TraceContentHasBeenSet() const { return m_traceContentHasBeenSet; }

    
    inline void SetTraceContent(const TraceContent& value) { m_traceContentHasBeenSet = true; m_traceContent = value; }

    
    inline void SetTraceContent(TraceContent&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::move(value); }

    
    inline UpdateNetworkAnalyzerConfigurationRequest& WithTraceContent(const TraceContent& value) { SetTraceContent(value); return *this;}

    
    inline UpdateNetworkAnalyzerConfigurationRequest& WithTraceContent(TraceContent&& value) { SetTraceContent(std::move(value)); return *this;}


    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToAdd() const{ return m_wirelessDevicesToAdd; }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline bool WirelessDevicesToAddHasBeenSet() const { return m_wirelessDevicesToAddHasBeenSet; }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevicesToAdd(const Aws::Vector<Aws::String>& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd = value; }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevicesToAdd(Aws::Vector<Aws::String>&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd = std::move(value); }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToAdd(const Aws::Vector<Aws::String>& value) { SetWirelessDevicesToAdd(value); return *this;}

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToAdd(Aws::Vector<Aws::String>&& value) { SetWirelessDevicesToAdd(std::move(value)); return *this;}

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(const Aws::String& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(value); return *this; }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(Aws::String&& value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>WirelessDevices to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToAdd(const char* value) { m_wirelessDevicesToAddHasBeenSet = true; m_wirelessDevicesToAdd.push_back(value); return *this; }


    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevicesToRemove() const{ return m_wirelessDevicesToRemove; }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline bool WirelessDevicesToRemoveHasBeenSet() const { return m_wirelessDevicesToRemoveHasBeenSet; }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevicesToRemove(const Aws::Vector<Aws::String>& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove = value; }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevicesToRemove(Aws::Vector<Aws::String>&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove = std::move(value); }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToRemove(const Aws::Vector<Aws::String>& value) { SetWirelessDevicesToRemove(value); return *this;}

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessDevicesToRemove(Aws::Vector<Aws::String>&& value) { SetWirelessDevicesToRemove(std::move(value)); return *this;}

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(const Aws::String& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(value); return *this; }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(Aws::String&& value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>WirelessDevices to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessDevicesToRemove(const char* value) { m_wirelessDevicesToRemoveHasBeenSet = true; m_wirelessDevicesToRemove.push_back(value); return *this; }


    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToAdd() const{ return m_wirelessGatewaysToAdd; }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline bool WirelessGatewaysToAddHasBeenSet() const { return m_wirelessGatewaysToAddHasBeenSet; }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGatewaysToAdd(const Aws::Vector<Aws::String>& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd = value; }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGatewaysToAdd(Aws::Vector<Aws::String>&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd = std::move(value); }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToAdd(const Aws::Vector<Aws::String>& value) { SetWirelessGatewaysToAdd(value); return *this;}

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToAdd(Aws::Vector<Aws::String>&& value) { SetWirelessGatewaysToAdd(std::move(value)); return *this;}

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(const Aws::String& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(value); return *this; }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(Aws::String&& value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(std::move(value)); return *this; }

    /**
     * <p>WirelessGateways to add into NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToAdd(const char* value) { m_wirelessGatewaysToAddHasBeenSet = true; m_wirelessGatewaysToAdd.push_back(value); return *this; }


    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGatewaysToRemove() const{ return m_wirelessGatewaysToRemove; }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline bool WirelessGatewaysToRemoveHasBeenSet() const { return m_wirelessGatewaysToRemoveHasBeenSet; }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGatewaysToRemove(const Aws::Vector<Aws::String>& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove = value; }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGatewaysToRemove(Aws::Vector<Aws::String>&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove = std::move(value); }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToRemove(const Aws::Vector<Aws::String>& value) { SetWirelessGatewaysToRemove(value); return *this;}

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& WithWirelessGatewaysToRemove(Aws::Vector<Aws::String>&& value) { SetWirelessGatewaysToRemove(std::move(value)); return *this;}

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(const Aws::String& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(value); return *this; }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(Aws::String&& value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>WirelessGateways to remove from NetworkAnalyzerConfiguration.</p>
     */
    inline UpdateNetworkAnalyzerConfigurationRequest& AddWirelessGatewaysToRemove(const char* value) { m_wirelessGatewaysToRemoveHasBeenSet = true; m_wirelessGatewaysToRemove.push_back(value); return *this; }

  private:

    Aws::String m_configurationName;
    bool m_configurationNameHasBeenSet;

    TraceContent m_traceContent;
    bool m_traceContentHasBeenSet;

    Aws::Vector<Aws::String> m_wirelessDevicesToAdd;
    bool m_wirelessDevicesToAddHasBeenSet;

    Aws::Vector<Aws::String> m_wirelessDevicesToRemove;
    bool m_wirelessDevicesToRemoveHasBeenSet;

    Aws::Vector<Aws::String> m_wirelessGatewaysToAdd;
    bool m_wirelessGatewaysToAddHasBeenSet;

    Aws::Vector<Aws::String> m_wirelessGatewaysToRemove;
    bool m_wirelessGatewaysToRemoveHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
