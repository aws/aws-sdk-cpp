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
  class AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult
  {
  public:
    GetNetworkAnalyzerConfigurationResult();
    GetNetworkAnalyzerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetNetworkAnalyzerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TraceContent& GetTraceContent() const{ return m_traceContent; }

    
    inline void SetTraceContent(const TraceContent& value) { m_traceContent = value; }

    
    inline void SetTraceContent(TraceContent&& value) { m_traceContent = std::move(value); }

    
    inline GetNetworkAnalyzerConfigurationResult& WithTraceContent(const TraceContent& value) { SetTraceContent(value); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithTraceContent(TraceContent&& value) { SetTraceContent(std::move(value)); return *this;}


    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevices() const{ return m_wirelessDevices; }

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevices(const Aws::Vector<Aws::String>& value) { m_wirelessDevices = value; }

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessDevices(Aws::Vector<Aws::String>&& value) { m_wirelessDevices = std::move(value); }

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessDevices(const Aws::Vector<Aws::String>& value) { SetWirelessDevices(value); return *this;}

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessDevices(Aws::Vector<Aws::String>&& value) { SetWirelessDevices(std::move(value)); return *this;}

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(const Aws::String& value) { m_wirelessDevices.push_back(value); return *this; }

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(Aws::String&& value) { m_wirelessDevices.push_back(std::move(value)); return *this; }

    /**
     * <p>List of WirelessDevices in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(const char* value) { m_wirelessDevices.push_back(value); return *this; }


    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGateways() const{ return m_wirelessGateways; }

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGateways(const Aws::Vector<Aws::String>& value) { m_wirelessGateways = value; }

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline void SetWirelessGateways(Aws::Vector<Aws::String>&& value) { m_wirelessGateways = std::move(value); }

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessGateways(const Aws::Vector<Aws::String>& value) { SetWirelessGateways(value); return *this;}

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessGateways(Aws::Vector<Aws::String>&& value) { SetWirelessGateways(std::move(value)); return *this;}

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(const Aws::String& value) { m_wirelessGateways.push_back(value); return *this; }

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(Aws::String&& value) { m_wirelessGateways.push_back(std::move(value)); return *this; }

    /**
     * <p>List of WirelessGateways in the NetworkAnalyzerConfiguration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(const char* value) { m_wirelessGateways.push_back(value); return *this; }

  private:

    TraceContent m_traceContent;

    Aws::Vector<Aws::String> m_wirelessDevices;

    Aws::Vector<Aws::String> m_wirelessGateways;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
