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
    AWS_APPCONFIG_API DeleteEnvironmentRequest();

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
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline DeleteEnvironmentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline DeleteEnvironmentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline DeleteEnvironmentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application ID that includes the environment that you want to delete.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline DeleteEnvironmentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline DeleteEnvironmentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline DeleteEnvironmentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A parameter to configure deletion protection. If enabled, deletion protection
     * prevents a user from deleting an environment if your application called either
     * <a
     * href="https://docs.aws.amazon.com/appconfig/2019-10-09/APIReference/API_appconfigdata_GetLatestConfiguration.html">GetLatestConfiguration</a>
     * or in the environment during the specified interval. </p> <p>This parameter
     * supports the following values:</p> <ul> <li> <p> <code>BYPASS</code>: Instructs
     * AppConfig to bypass the deletion protection check and delete a configuration
     * profile even if deletion protection would have otherwise prevented it. </p>
     * </li> <li> <p> <code>APPLY</code>: Instructs the deletion protection check to
     * run, even if deletion protection is disabled at the account level.
     * <code>APPLY</code> also forces the deletion protection check to run against
     * resources created in the past hour, which are normally excluded from deletion
     * protection checks. </p> </li> <li> <p> <code>ACCOUNT_DEFAULT</code>: The default
     * setting, which instructs AppConfig to implement the deletion protection value
     * specified in the <code>UpdateAccountSettings</code> API.</p> </li> </ul>
     */
    inline const DeletionProtectionCheck& GetDeletionProtectionCheck() const{ return m_deletionProtectionCheck; }
    inline bool DeletionProtectionCheckHasBeenSet() const { return m_deletionProtectionCheckHasBeenSet; }
    inline void SetDeletionProtectionCheck(const DeletionProtectionCheck& value) { m_deletionProtectionCheckHasBeenSet = true; m_deletionProtectionCheck = value; }
    inline void SetDeletionProtectionCheck(DeletionProtectionCheck&& value) { m_deletionProtectionCheckHasBeenSet = true; m_deletionProtectionCheck = std::move(value); }
    inline DeleteEnvironmentRequest& WithDeletionProtectionCheck(const DeletionProtectionCheck& value) { SetDeletionProtectionCheck(value); return *this;}
    inline DeleteEnvironmentRequest& WithDeletionProtectionCheck(DeletionProtectionCheck&& value) { SetDeletionProtectionCheck(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    DeletionProtectionCheck m_deletionProtectionCheck;
    bool m_deletionProtectionCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
