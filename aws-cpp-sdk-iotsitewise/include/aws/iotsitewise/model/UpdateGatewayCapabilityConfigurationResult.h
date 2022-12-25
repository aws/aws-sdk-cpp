/**
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
  class UpdateGatewayCapabilityConfigurationResult
  {
  public:
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult();
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const{ return m_capabilityNamespace; }

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline void SetCapabilityNamespace(const Aws::String& value) { m_capabilityNamespace = value; }

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline void SetCapabilityNamespace(Aws::String&& value) { m_capabilityNamespace = std::move(value); }

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline void SetCapabilityNamespace(const char* value) { m_capabilityNamespace.assign(value); }

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilityNamespace(const Aws::String& value) { SetCapabilityNamespace(value); return *this;}

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilityNamespace(Aws::String&& value) { SetCapabilityNamespace(std::move(value)); return *this;}

    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilityNamespace(const char* value) { SetCapabilityNamespace(value); return *this;}


    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul> <p>After you update a
     * capability configuration, its sync status is <code>OUT_OF_SYNC</code> until the
     * gateway receives and applies or rejects the updated configuration.</p>
     */
    inline const CapabilitySyncStatus& GetCapabilitySyncStatus() const{ return m_capabilitySyncStatus; }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul> <p>After you update a
     * capability configuration, its sync status is <code>OUT_OF_SYNC</code> until the
     * gateway receives and applies or rejects the updated configuration.</p>
     */
    inline void SetCapabilitySyncStatus(const CapabilitySyncStatus& value) { m_capabilitySyncStatus = value; }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul> <p>After you update a
     * capability configuration, its sync status is <code>OUT_OF_SYNC</code> until the
     * gateway receives and applies or rejects the updated configuration.</p>
     */
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus&& value) { m_capabilitySyncStatus = std::move(value); }

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul> <p>After you update a
     * capability configuration, its sync status is <code>OUT_OF_SYNC</code> until the
     * gateway receives and applies or rejects the updated configuration.</p>
     */
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(const CapabilitySyncStatus& value) { SetCapabilitySyncStatus(value); return *this;}

    /**
     * <p>The synchronization status of the capability configuration. The sync status
     * can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> – The
     * gateway is running the capability configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> – The gateway hasn't received the capability
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> – The gateway
     * rejected the capability configuration.</p> </li> </ul> <p>After you update a
     * capability configuration, its sync status is <code>OUT_OF_SYNC</code> until the
     * gateway receives and applies or rejects the updated configuration.</p>
     */
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(CapabilitySyncStatus&& value) { SetCapabilitySyncStatus(std::move(value)); return *this;}

  private:

    Aws::String m_capabilityNamespace;

    CapabilitySyncStatus m_capabilitySyncStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
