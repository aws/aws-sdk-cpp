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
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult();
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTWIRELESS_API GetNetworkAnalyzerConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const TraceContent& GetTraceContent() const{ return m_traceContent; }

    
    inline void SetTraceContent(const TraceContent& value) { m_traceContent = value; }

    
    inline void SetTraceContent(TraceContent&& value) { m_traceContent = std::move(value); }

    
    inline GetNetworkAnalyzerConfigurationResult& WithTraceContent(const TraceContent& value) { SetTraceContent(value); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithTraceContent(TraceContent&& value) { SetTraceContent(std::move(value)); return *this;}


    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessDevices() const{ return m_wirelessDevices; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline void SetWirelessDevices(const Aws::Vector<Aws::String>& value) { m_wirelessDevices = value; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline void SetWirelessDevices(Aws::Vector<Aws::String>&& value) { m_wirelessDevices = std::move(value); }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessDevices(const Aws::Vector<Aws::String>& value) { SetWirelessDevices(value); return *this;}

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessDevices(Aws::Vector<Aws::String>&& value) { SetWirelessDevices(std::move(value)); return *this;}

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(const Aws::String& value) { m_wirelessDevices.push_back(value); return *this; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(Aws::String&& value) { m_wirelessDevices.push_back(std::move(value)); return *this; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessDevices(const char* value) { m_wirelessDevices.push_back(value); return *this; }


    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetWirelessGateways() const{ return m_wirelessGateways; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline void SetWirelessGateways(const Aws::Vector<Aws::String>& value) { m_wirelessGateways = value; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline void SetWirelessGateways(Aws::Vector<Aws::String>&& value) { m_wirelessGateways = std::move(value); }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessGateways(const Aws::Vector<Aws::String>& value) { SetWirelessGateways(value); return *this;}

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithWirelessGateways(Aws::Vector<Aws::String>&& value) { SetWirelessGateways(std::move(value)); return *this;}

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(const Aws::String& value) { m_wirelessGateways.push_back(value); return *this; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(Aws::String&& value) { m_wirelessGateways.push_back(std::move(value)); return *this; }

    /**
     * <p>List of wireless gateway resources that have been added to the network
     * analyzer configuration.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& AddWirelessGateways(const char* value) { m_wirelessGateways.push_back(value); return *this; }


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_description.assign(value); }

    
    inline GetNetworkAnalyzerConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the new resource.</p>
     */
    inline GetNetworkAnalyzerConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}


    
    inline const Aws::String& GetName() const{ return m_name; }

    
    inline void SetName(const Aws::String& value) { m_name = value; }

    
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    
    inline void SetName(const char* value) { m_name.assign(value); }

    
    inline GetNetworkAnalyzerConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    
    inline GetNetworkAnalyzerConfigurationResult& WithName(const char* value) { SetName(value); return *this;}

  private:

    TraceContent m_traceContent;

    Aws::Vector<Aws::String> m_wirelessDevices;

    Aws::Vector<Aws::String> m_wirelessGateways;

    Aws::String m_description;

    Aws::String m_arn;

    Aws::String m_name;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
