/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/SsmSapRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm-sap/model/ApplicationCredential.h>
#include <utility>

namespace Aws
{
namespace SsmSap
{
namespace Model
{

  /**
   */
  class UpdateApplicationSettingsRequest : public SsmSapRequest
  {
  public:
    AWS_SSMSAP_API UpdateApplicationSettingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationSettings"; }

    AWS_SSMSAP_API Aws::String SerializePayload() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p/>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p/>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToAddOrUpdate() const{ return m_credentialsToAddOrUpdate; }

    /**
     * <p/>
     */
    inline bool CredentialsToAddOrUpdateHasBeenSet() const { return m_credentialsToAddOrUpdateHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = value; }

    /**
     * <p/>
     */
    inline void SetCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToAddOrUpdate(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToAddOrUpdate(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToAddOrUpdate(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(const ApplicationCredential& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToAddOrUpdate(ApplicationCredential&& value) { m_credentialsToAddOrUpdateHasBeenSet = true; m_credentialsToAddOrUpdate.push_back(std::move(value)); return *this; }


    /**
     * <p/>
     */
    inline const Aws::Vector<ApplicationCredential>& GetCredentialsToRemove() const{ return m_credentialsToRemove; }

    /**
     * <p/>
     */
    inline bool CredentialsToRemoveHasBeenSet() const { return m_credentialsToRemoveHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = value; }

    /**
     * <p/>
     */
    inline void SetCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove = std::move(value); }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(const Aws::Vector<ApplicationCredential>& value) { SetCredentialsToRemove(value); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& WithCredentialsToRemove(Aws::Vector<ApplicationCredential>&& value) { SetCredentialsToRemove(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(const ApplicationCredential& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(value); return *this; }

    /**
     * <p/>
     */
    inline UpdateApplicationSettingsRequest& AddCredentialsToRemove(ApplicationCredential&& value) { m_credentialsToRemoveHasBeenSet = true; m_credentialsToRemove.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentialsToAddOrUpdate;
    bool m_credentialsToAddOrUpdateHasBeenSet = false;

    Aws::Vector<ApplicationCredential> m_credentialsToRemove;
    bool m_credentialsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
