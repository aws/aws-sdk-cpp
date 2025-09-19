/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
#include <aws/license-manager-user-subscriptions/model/ServerSettings.h>
#include <utility>

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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>The settings to configure your license server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/LicenseServerSettings">AWS
   * API Reference</a></p>
   */
  class LicenseServerSettings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of license server.</p>
     */
    inline ServerType GetServerType() const { return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(ServerType value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline LicenseServerSettings& WithServerType(ServerType value) { SetServerType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>ServerSettings</code> resource contains the settings for your
     * server.</p>
     */
    inline const ServerSettings& GetServerSettings() const { return m_serverSettings; }
    inline bool ServerSettingsHasBeenSet() const { return m_serverSettingsHasBeenSet; }
    template<typename ServerSettingsT = ServerSettings>
    void SetServerSettings(ServerSettingsT&& value) { m_serverSettingsHasBeenSet = true; m_serverSettings = std::forward<ServerSettingsT>(value); }
    template<typename ServerSettingsT = ServerSettings>
    LicenseServerSettings& WithServerSettings(ServerSettingsT&& value) { SetServerSettings(std::forward<ServerSettingsT>(value)); return *this;}
    ///@}
  private:

    ServerType m_serverType{ServerType::NOT_SET};
    bool m_serverTypeHasBeenSet = false;

    ServerSettings m_serverSettings;
    bool m_serverSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
