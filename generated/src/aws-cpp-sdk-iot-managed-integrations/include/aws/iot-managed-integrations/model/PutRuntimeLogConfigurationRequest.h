/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-managed-integrations/model/RuntimeLogConfigurations.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class PutRuntimeLogConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PutRuntimeLogConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRuntimeLogConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id for a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    PutRuntimeLogConfigurationRequest& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime log configuration for a managed thing.</p>
     */
    inline const RuntimeLogConfigurations& GetRuntimeLogConfigurations() const { return m_runtimeLogConfigurations; }
    inline bool RuntimeLogConfigurationsHasBeenSet() const { return m_runtimeLogConfigurationsHasBeenSet; }
    template<typename RuntimeLogConfigurationsT = RuntimeLogConfigurations>
    void SetRuntimeLogConfigurations(RuntimeLogConfigurationsT&& value) { m_runtimeLogConfigurationsHasBeenSet = true; m_runtimeLogConfigurations = std::forward<RuntimeLogConfigurationsT>(value); }
    template<typename RuntimeLogConfigurationsT = RuntimeLogConfigurations>
    PutRuntimeLogConfigurationRequest& WithRuntimeLogConfigurations(RuntimeLogConfigurationsT&& value) { SetRuntimeLogConfigurations(std::forward<RuntimeLogConfigurationsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    RuntimeLogConfigurations m_runtimeLogConfigurations;
    bool m_runtimeLogConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
