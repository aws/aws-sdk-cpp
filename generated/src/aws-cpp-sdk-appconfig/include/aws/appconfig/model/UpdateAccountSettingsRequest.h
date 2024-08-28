/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/appconfig/model/DeletionProtectionSettings.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateAccountSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A parameter to configure deletion protection. If enabled, deletion protection
     * prevents a user from deleting a configuration profile or an environment if
     * AppConfig has called either <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or for the configuration profile or from the environment during the specified
     * interval. Deletion protection is disabled by default. The default interval for
     * <code>ProtectionPeriodInMinutes</code> is 60.</p>
     */
    inline const DeletionProtectionSettings& GetDeletionProtection() const{ return m_deletionProtection; }
    inline bool DeletionProtectionHasBeenSet() const { return m_deletionProtectionHasBeenSet; }
    inline void SetDeletionProtection(const DeletionProtectionSettings& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = value; }
    inline void SetDeletionProtection(DeletionProtectionSettings&& value) { m_deletionProtectionHasBeenSet = true; m_deletionProtection = std::move(value); }
    inline UpdateAccountSettingsRequest& WithDeletionProtection(const DeletionProtectionSettings& value) { SetDeletionProtection(value); return *this;}
    inline UpdateAccountSettingsRequest& WithDeletionProtection(DeletionProtectionSettings&& value) { SetDeletionProtection(std::move(value)); return *this;}
    ///@}
  private:

    DeletionProtectionSettings m_deletionProtection;
    bool m_deletionProtectionHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
