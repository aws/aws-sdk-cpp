/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appconfig/model/DeletionProtectionCheck.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class DeleteEnvironmentRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API DeleteEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteEnvironment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the environment that you want to delete.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    DeleteEnvironmentRequest& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application ID that includes the environment that you want to delete.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    DeleteEnvironmentRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to configure deletion protection. Deletion protection prevents a
     * user from deleting an environment if your application called either <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or in the environment during the specified interval. </p> <p>This parameter
     * supports the following values:</p> <ul> <li> <p> <code>BYPASS</code>: Instructs
     * AppConfig to bypass the deletion protection check and delete a configuration
     * profile even if deletion protection would have otherwise prevented it. </p>
     * </li> <li> <p> <code>APPLY</code>: Instructs the deletion protection check to
     * run, even if deletion protection is disabled at the account level.
     * <code>APPLY</code> also forces the deletion protection check to run against
     * resources created in the past hour, which are normally excluded from deletion
     * protection checks.</p> </li> <li> <p> <code>ACCOUNT_DEFAULT</code>: The default
     * setting, which instructs AppConfig to implement the deletion protection value
     * specified in the <code>UpdateAccountSettings</code> API.</p> </li> </ul>
     */
    inline DeletionProtectionCheck GetDeletionProtectionCheck() const { return m_deletionProtectionCheck; }
    inline bool DeletionProtectionCheckHasBeenSet() const { return m_deletionProtectionCheckHasBeenSet; }
    inline void SetDeletionProtectionCheck(DeletionProtectionCheck value) { m_deletionProtectionCheckHasBeenSet = true; m_deletionProtectionCheck = value; }
    inline DeleteEnvironmentRequest& WithDeletionProtectionCheck(DeletionProtectionCheck value) { SetDeletionProtectionCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    DeletionProtectionCheck m_deletionProtectionCheck{DeletionProtectionCheck::NOT_SET};
    bool m_deletionProtectionCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
