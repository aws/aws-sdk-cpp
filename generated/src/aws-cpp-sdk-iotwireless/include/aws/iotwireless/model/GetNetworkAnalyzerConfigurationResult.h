/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/model/TraceContent.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoTWireless
{
namespace Model
{
  class GetNetworkAnalyzerConfigurationResult
  {
  public:
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult() = default;
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const TraceContent& GetTraceContent() const { return m_traceContent; }
    template<typename TraceContentT = TraceContent>
    void SetTraceContent(TraceContentT&& value) { m_traceContentHasBeenSet = true; m_traceContent = std::forward<TraceContentT>(value); }
    template<typename TraceContentT = TraceContent>
    GetNetworkAnalyzerConfigurationResult& WithTraceContent(TraceContentT&& value) { SetTraceContent(std::forward<TraceContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of wireless device resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevices() const { return m_wirelessDevices; }
    template<typename WirelessDevicesT = Aws::Vector<Aws::String>>
    void SetWirelessDevices(WirelessDevicesT&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices = std::forward<WirelessDevicesT>(value); }
    template<typename WirelessDevicesT = Aws::Vector<Aws::String>>
    GetNetworkAnalyzerConfigurationResult& WithWirelessDevices(WirelessDevicesT&& value) { SetWirelessDevices(std::forward<WirelessDevicesT>(value)); return *this;}
    template<typename WirelessDevicesT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(WirelessDevicesT&& value) { m_wirelessDevicesHasBeenSet = true; m_wirelessDevices.emplace_back(std::forward<WirelessDevicesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGateways() const { return m_wirelessGateways; }
    template<typename WirelessGatewaysT = Aws::Vector<Aws::String>>
    void SetWirelessGateways(WirelessGatewaysT&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways = std::forward<WirelessGatewaysT>(value); }
    template<typename WirelessGatewaysT = Aws::Vector<Aws::String>>
    GetNetworkAnalyzerConfigurationResult& WithWirelessGateways(WirelessGatewaysT&& value) { SetWirelessGateways(std::forward<WirelessGatewaysT>(value)); return *this;}
    template<typename WirelessGatewaysT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(WirelessGatewaysT&& value) { m_wirelessGatewaysHasBeenSet = true; m_wirelessGateways.emplace_back(std::forward<WirelessGatewaysT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of multicast group resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMulticastGroups() const { return m_multicastGroups; }
    template<typename MulticastGroupsT = Aws::Vector<Aws::String>>
    void SetMulticastGroups(MulticastGroupsT&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups = std::forward<MulticastGroupsT>(value); }
    template<typename MulticastGroupsT = Aws::Vector<Aws::String>>
    GetNetworkAnalyzerConfigurationResult& WithMulticastGroups(MulticastGroupsT&& value) { SetMulticastGroups(std::forward<MulticastGroupsT>(value)); return *this;}
    template<typename MulticastGroupsT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& AddMulticastGroups(MulticastGroupsT&& value) { m_multicastGroupsHasBeenSet = true; m_multicastGroups.emplace_back(std::forward<MulticastGroupsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNetworkAnalyzerConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TraceContent m_traceContent;
    bool m_traceContentHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessDevices;
    bool m_wirelessDevicesHasBeenSet = false;

    Aws::Vector<Aws::String> m_wirelessGateways;
    bool m_wirelessGatewaysHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_multicastGroups;
    bool m_multicastGroupsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
