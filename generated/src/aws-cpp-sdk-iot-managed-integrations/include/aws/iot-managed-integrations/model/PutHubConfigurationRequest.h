/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsRequest.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   */
  class PutHubConfigurationRequest : public IoTManagedIntegrationsRequest
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API PutHubConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutHubConfiguration"; }

    AWS_IOTMANAGEDINTEGRATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A user-defined integer value that represents the hub token timer expiry
     * setting in seconds.</p>
     */
    inline long long GetHubTokenTimerExpirySettingInSeconds() const { return m_hubTokenTimerExpirySettingInSeconds; }
    inline bool HubTokenTimerExpirySettingInSecondsHasBeenSet() const { return m_hubTokenTimerExpirySettingInSecondsHasBeenSet; }
    inline void SetHubTokenTimerExpirySettingInSeconds(long long value) { m_hubTokenTimerExpirySettingInSecondsHasBeenSet = true; m_hubTokenTimerExpirySettingInSeconds = value; }
    inline PutHubConfigurationRequest& WithHubTokenTimerExpirySettingInSeconds(long long value) { SetHubTokenTimerExpirySettingInSeconds(value); return *this;}
    ///@}
  private:

    long long m_hubTokenTimerExpirySettingInSeconds{0};
    bool m_hubTokenTimerExpirySettingInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
