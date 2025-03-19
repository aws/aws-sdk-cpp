/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/RdsSalSettings.h>
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
   * <p>Contains settings for a specific server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/ServerSettings">AWS
   * API Reference</a></p>
   */
  class ServerSettings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ServerSettings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ServerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ServerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>RdsSalSettings</code> resource contains settings to configure a
     * specific Remote Desktop Services (RDS) license server.</p>
     */
    inline const RdsSalSettings& GetRdsSalSettings() const { return m_rdsSalSettings; }
    inline bool RdsSalSettingsHasBeenSet() const { return m_rdsSalSettingsHasBeenSet; }
    template<typename RdsSalSettingsT = RdsSalSettings>
    void SetRdsSalSettings(RdsSalSettingsT&& value) { m_rdsSalSettingsHasBeenSet = true; m_rdsSalSettings = std::forward<RdsSalSettingsT>(value); }
    template<typename RdsSalSettingsT = RdsSalSettings>
    ServerSettings& WithRdsSalSettings(RdsSalSettingsT&& value) { SetRdsSalSettings(std::forward<RdsSalSettingsT>(value)); return *this;}
    ///@}
  private:

    RdsSalSettings m_rdsSalSettings;
    bool m_rdsSalSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
