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
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetRuntimeLogConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The id for a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    GetRuntimeLogConfigurationResult& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime log configuration for a managed thing.</p>
     */
    inline const RuntimeLogConfigurations& GetRuntimeLogConfigurations() const { return m_runtimeLogConfigurations; }
    template<typename RuntimeLogConfigurationsT = RuntimeLogConfigurations>
    void SetRuntimeLogConfigurations(RuntimeLogConfigurationsT&& value) { m_runtimeLogConfigurationsHasBeenSet = true; m_runtimeLogConfigurations = std::forward<RuntimeLogConfigurationsT>(value); }
    template<typename RuntimeLogConfigurationsT = RuntimeLogConfigurations>
    GetRuntimeLogConfigurationResult& WithRuntimeLogConfigurations(RuntimeLogConfigurationsT&& value) { SetRuntimeLogConfigurations(std::forward<RuntimeLogConfigurationsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetRuntimeLogConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    RuntimeLogConfigurations m_runtimeLogConfigurations;
    bool m_runtimeLogConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
