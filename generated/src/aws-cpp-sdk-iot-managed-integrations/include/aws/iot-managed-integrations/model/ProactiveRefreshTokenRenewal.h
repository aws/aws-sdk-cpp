/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Configuration settings for proactively refreshing OAuth tokens before they
   * expire.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ProactiveRefreshTokenRenewal">AWS
   * API Reference</a></p>
   */
  class ProactiveRefreshTokenRenewal
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API ProactiveRefreshTokenRenewal() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API ProactiveRefreshTokenRenewal(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API ProactiveRefreshTokenRenewal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether proactive refresh token renewal is enabled.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline ProactiveRefreshTokenRenewal& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The days before token expiration when the system should attempt to renew the
     * token, specified in days.</p>
     */
    inline int GetDaysBeforeRenewal() const { return m_daysBeforeRenewal; }
    inline bool DaysBeforeRenewalHasBeenSet() const { return m_daysBeforeRenewalHasBeenSet; }
    inline void SetDaysBeforeRenewal(int value) { m_daysBeforeRenewalHasBeenSet = true; m_daysBeforeRenewal = value; }
    inline ProactiveRefreshTokenRenewal& WithDaysBeforeRenewal(int value) { SetDaysBeforeRenewal(value); return *this;}
    ///@}
  private:

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    int m_daysBeforeRenewal{0};
    bool m_daysBeforeRenewalHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
