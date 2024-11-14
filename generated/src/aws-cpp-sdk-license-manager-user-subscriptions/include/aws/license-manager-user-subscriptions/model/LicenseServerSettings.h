/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/ServerSettings.h>
#include <aws/license-manager-user-subscriptions/model/ServerType.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API LicenseServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>ServerSettings</code> resource contains the settings for your
     * server.</p>
     */
    inline const ServerSettings& GetServerSettings() const{ return m_serverSettings; }
    inline bool ServerSettingsHasBeenSet() const { return m_serverSettingsHasBeenSet; }
    inline void SetServerSettings(const ServerSettings& value) { m_serverSettingsHasBeenSet = true; m_serverSettings = value; }
    inline void SetServerSettings(ServerSettings&& value) { m_serverSettingsHasBeenSet = true; m_serverSettings = std::move(value); }
    inline LicenseServerSettings& WithServerSettings(const ServerSettings& value) { SetServerSettings(value); return *this;}
    inline LicenseServerSettings& WithServerSettings(ServerSettings&& value) { SetServerSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of license server.</p>
     */
    inline const ServerType& GetServerType() const{ return m_serverType; }
    inline bool ServerTypeHasBeenSet() const { return m_serverTypeHasBeenSet; }
    inline void SetServerType(const ServerType& value) { m_serverTypeHasBeenSet = true; m_serverType = value; }
    inline void SetServerType(ServerType&& value) { m_serverTypeHasBeenSet = true; m_serverType = std::move(value); }
    inline LicenseServerSettings& WithServerType(const ServerType& value) { SetServerType(value); return *this;}
    inline LicenseServerSettings& WithServerType(ServerType&& value) { SetServerType(std::move(value)); return *this;}
    ///@}
  private:

    ServerSettings m_serverSettings;
    bool m_serverSettingsHasBeenSet = false;

    ServerType m_serverType;
    bool m_serverTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
