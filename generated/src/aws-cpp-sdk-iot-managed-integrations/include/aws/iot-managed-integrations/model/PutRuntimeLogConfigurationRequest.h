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
    AWS_IOTMANAGEDINTEGRATIONS_API PutRuntimeLogConfigurationRequest();

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
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingIdHasBeenSet = true; m_managedThingId.assign(value); }
    inline PutRuntimeLogConfigurationRequest& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline PutRuntimeLogConfigurationRequest& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline PutRuntimeLogConfigurationRequest& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime log configuration for a managed thing.</p>
     */
    inline const RuntimeLogConfigurations& GetRuntimeLogConfigurations() const{ return m_runtimeLogConfigurations; }
    inline bool RuntimeLogConfigurationsHasBeenSet() const { return m_runtimeLogConfigurationsHasBeenSet; }
    inline void SetRuntimeLogConfigurations(const RuntimeLogConfigurations& value) { m_runtimeLogConfigurationsHasBeenSet = true; m_runtimeLogConfigurations = value; }
    inline void SetRuntimeLogConfigurations(RuntimeLogConfigurations&& value) { m_runtimeLogConfigurationsHasBeenSet = true; m_runtimeLogConfigurations = std::move(value); }
    inline PutRuntimeLogConfigurationRequest& WithRuntimeLogConfigurations(const RuntimeLogConfigurations& value) { SetRuntimeLogConfigurations(value); return *this;}
    inline PutRuntimeLogConfigurationRequest& WithRuntimeLogConfigurations(RuntimeLogConfigurations&& value) { SetRuntimeLogConfigurations(std::move(value)); return *this;}
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
