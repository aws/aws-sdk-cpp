/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class ResetRuntimeLogConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ResetRuntimeLogConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ResetRuntimeLogConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The id of a managed thing.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline bool ManagedThingIdHasBeenSet() const { return m_managedThingIdHasBeenSet; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingIdHasBeenSet = true; m_managedThingId.assign(value); }
    inline ResetRuntimeLogConfigurationRequest& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline ResetRuntimeLogConfigurationRequest& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline ResetRuntimeLogConfigurationRequest& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
