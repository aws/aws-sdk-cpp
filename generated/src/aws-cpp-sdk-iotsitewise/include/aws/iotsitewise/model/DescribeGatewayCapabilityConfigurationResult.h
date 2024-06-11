﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/CapabilitySyncStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class DescribeGatewayCapabilityConfigurationResult
  {
  public:
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult();
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DescribeGatewayCapabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the gateway that defines the capability configuration.</p>
     */
    inline const Aws::String& GetGatewayId() const{ return m_gatewayId; }
    inline void SetGatewayId(const Aws::String& value) { m_gatewayId = value; }
    inline void SetGatewayId(Aws::String&& value) { m_gatewayId = std::move(value); }
    inline void SetGatewayId(const char* value) { m_gatewayId.assign(value); }
    inline DescribeGatewayCapabilityConfigurationResult& WithGatewayId(const Aws::String& value) { SetGatewayId(value); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithGatewayId(Aws::String&& value) { SetGatewayId(std::move(value)); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithGatewayId(const char* value) { SetGatewayId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const{ return m_capabilityNamespace; }
    inline void SetCapabilityNamespace(const Aws::String& value) { m_capabilityNamespace = value; }
    inline void SetCapabilityNamespace(Aws::String&& value) { m_capabilityNamespace = std::move(value); }
    inline void SetCapabilityNamespace(const char* value) { m_capabilityNamespace.assign(value); }
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityNamespace(const Aws::String& value) { SetCapabilityNamespace(value); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityNamespace(Aws::String&& value) { SetCapabilityNamespace(std::move(value)); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityNamespace(const char* value) { SetCapabilityNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON document that defines the gateway capability's configuration. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/configure-sources.html#configure-source-cli">Configuring
     * data sources (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetCapabilityConfiguration() const{ return m_capabilityConfiguration; }
    inline void SetCapabilityConfiguration(const Aws::String& value) { m_capabilityConfiguration = value; }
    inline void SetCapabilityConfiguration(Aws::String&& value) { m_capabilityConfiguration = std::move(value); }
    inline void SetCapabilityConfiguration(const char* value) { m_capabilityConfiguration.assign(value); }
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityConfiguration(const Aws::String& value) { SetCapabilityConfiguration(value); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityConfiguration(Aws::String&& value) { SetCapabilityConfiguration(std::move(value)); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilityConfiguration(const char* value) { SetCapabilityConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul>
     */
    inline const CapabilitySyncStatus& GetCapabilitySyncStatus() const{ return m_capabilitySyncStatus; }
    inline void SetCapabilitySyncStatus(const CapabilitySyncStatus& value) { m_capabilitySyncStatus = value; }
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus&& value) { m_capabilitySyncStatus = std::move(value); }
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(const CapabilitySyncStatus& value) { SetCapabilitySyncStatus(value); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(CapabilitySyncStatus&& value) { SetCapabilitySyncStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGatewayCapabilityConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGatewayCapabilityConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_gatewayId;

    Aws::String m_capabilityNamespace;

    Aws::String m_capabilityConfiguration;

    CapabilitySyncStatus m_capabilitySyncStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
