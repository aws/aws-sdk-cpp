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
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult() = default;
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateGatewayCapabilityConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The namespace of the gateway capability.</p>
     */
    inline const Aws::String& GetCapabilityNamespace() const { return m_capabilityNamespace; }
    template<typename CapabilityNamespaceT = Aws::String>
    void SetCapabilityNamespace(CapabilityNamespaceT&& value) { m_capabilityNamespaceHasBeenSet = true; m_capabilityNamespace = std::forward<CapabilityNamespaceT>(value); }
    template<typename CapabilityNamespaceT = Aws::String>
    UpdateGatewayCapabilityConfigurationResult& WithCapabilityNamespace(CapabilityNamespaceT&& value) { SetCapabilityNamespace(std::forward<CapabilityNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The synchronization status of the gateway capability configuration. The sync
     * status can be one of the following:</p> <ul> <li> <p> <code>IN_SYNC</code> - The
     * gateway is running with the latest configuration.</p> </li> <li> <p>
     * <code>OUT_OF_SYNC</code> - The gateway hasn't received the latest
     * configuration.</p> </li> <li> <p> <code>SYNC_FAILED</code> - The gateway
     * rejected the latest configuration.</p> </li> <li> <p> <code>UNKNOWN</code> - The
     * gateway hasn't reported its sync status.</p> </li> <li> <p>
     * <code>NOT_APPLICABLE</code> - The gateway doesn't support this capability. This
     * is most common when integrating partner data sources, because the data
     * integration is handled externally by the partner.</p> </li> </ul> <p>After you
     * update a capability configuration, its sync status is <code>OUT_OF_SYNC</code>
     * until the gateway receives and applies or rejects the updated configuration.</p>
     */
    inline CapabilitySyncStatus GetCapabilitySyncStatus() const { return m_capabilitySyncStatus; }
    inline void SetCapabilitySyncStatus(CapabilitySyncStatus value) { m_capabilitySyncStatusHasBeenSet = true; m_capabilitySyncStatus = value; }
    inline UpdateGatewayCapabilityConfigurationResult& WithCapabilitySyncStatus(CapabilitySyncStatus value) { SetCapabilitySyncStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateGatewayCapabilityConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_capabilityNamespace;
    bool m_capabilityNamespaceHasBeenSet = false;

    CapabilitySyncStatus m_capabilitySyncStatus{CapabilitySyncStatus::NOT_SET};
    bool m_capabilitySyncStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
