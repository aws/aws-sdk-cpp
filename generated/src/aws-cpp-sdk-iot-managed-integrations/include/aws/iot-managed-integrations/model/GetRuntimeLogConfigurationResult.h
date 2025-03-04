/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/RuntimeLogConfigurations.h>
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
  class GetRuntimeLogConfigurationResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id for a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingId.assign(value); }
    inline GetRuntimeLogConfigurationResult& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline GetRuntimeLogConfigurationResult& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline GetRuntimeLogConfigurationResult& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime log configuration for a managed thing.</p>
     */
    inline const RuntimeLogConfigurations& GetRuntimeLogConfigurations() const{ return m_runtimeLogConfigurations; }
    inline void SetRuntimeLogConfigurations(const RuntimeLogConfigurations& value) { m_runtimeLogConfigurations = value; }
    inline void SetRuntimeLogConfigurations(RuntimeLogConfigurations&& value) { m_runtimeLogConfigurations = std::move(value); }
    inline GetRuntimeLogConfigurationResult& WithRuntimeLogConfigurations(const RuntimeLogConfigurations& value) { SetRuntimeLogConfigurations(value); return *this;}
    inline GetRuntimeLogConfigurationResult& WithRuntimeLogConfigurations(RuntimeLogConfigurations&& value) { SetRuntimeLogConfigurations(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetRuntimeLogConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetRuntimeLogConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetRuntimeLogConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;

    RuntimeLogConfigurations m_runtimeLogConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
