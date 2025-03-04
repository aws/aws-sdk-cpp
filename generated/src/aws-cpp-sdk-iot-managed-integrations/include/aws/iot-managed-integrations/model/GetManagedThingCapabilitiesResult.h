/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/CapabilityReport.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetManagedThingCapabilitiesResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCapabilitiesResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCapabilitiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingCapabilitiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id of the device.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingId.assign(value); }
    inline GetManagedThingCapabilitiesResult& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline GetManagedThingCapabilitiesResult& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline GetManagedThingCapabilitiesResult& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The capabilities of the device such as light bulb.</p>
     */
    inline const Aws::String& GetCapabilities() const{ return m_capabilities; }
    inline void SetCapabilities(const Aws::String& value) { m_capabilities = value; }
    inline void SetCapabilities(Aws::String&& value) { m_capabilities = std::move(value); }
    inline void SetCapabilities(const char* value) { m_capabilities.assign(value); }
    inline GetManagedThingCapabilitiesResult& WithCapabilities(const Aws::String& value) { SetCapabilities(value); return *this;}
    inline GetManagedThingCapabilitiesResult& WithCapabilities(Aws::String&& value) { SetCapabilities(std::move(value)); return *this;}
    inline GetManagedThingCapabilitiesResult& WithCapabilities(const char* value) { SetCapabilities(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A report of the capabilities for the managed thing.</p>
     */
    inline const CapabilityReport& GetCapabilityReport() const{ return m_capabilityReport; }
    inline void SetCapabilityReport(const CapabilityReport& value) { m_capabilityReport = value; }
    inline void SetCapabilityReport(CapabilityReport&& value) { m_capabilityReport = std::move(value); }
    inline GetManagedThingCapabilitiesResult& WithCapabilityReport(const CapabilityReport& value) { SetCapabilityReport(value); return *this;}
    inline GetManagedThingCapabilitiesResult& WithCapabilityReport(CapabilityReport&& value) { SetCapabilityReport(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedThingCapabilitiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedThingCapabilitiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedThingCapabilitiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;

    Aws::String m_capabilities;

    CapabilityReport m_capabilityReport;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
