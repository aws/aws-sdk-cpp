/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appconfig/model/Validator.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class UpdateConfigurationProfileRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API UpdateConfigurationProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationProfile"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline UpdateConfigurationProfileRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline UpdateConfigurationProfileRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline UpdateConfigurationProfileRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const{ return m_configurationProfileId; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetConfigurationProfileId(const Aws::String& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = value; }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetConfigurationProfileId(Aws::String&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::move(value); }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline void SetConfigurationProfileId(const char* value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId.assign(value); }

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithConfigurationProfileId(const Aws::String& value) { SetConfigurationProfileId(value); return *this;}

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithConfigurationProfileId(Aws::String&& value) { SetConfigurationProfileId(std::move(value)); return *this;}

    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithConfigurationProfileId(const char* value) { SetConfigurationProfileId(value); return *this;}


    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the configuration profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the configuration profile.</p>
     */
    inline UpdateConfigurationProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline const Aws::String& GetRetrievalRoleArn() const{ return m_retrievalRoleArn; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline bool RetrievalRoleArnHasBeenSet() const { return m_retrievalRoleArnHasBeenSet; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(const Aws::String& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = value; }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(Aws::String&& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = std::move(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline void SetRetrievalRoleArn(const char* value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn.assign(value); }

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline UpdateConfigurationProfileRequest& WithRetrievalRoleArn(const Aws::String& value) { SetRetrievalRoleArn(value); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline UpdateConfigurationProfileRequest& WithRetrievalRoleArn(Aws::String&& value) { SetRetrievalRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>
     */
    inline UpdateConfigurationProfileRequest& WithRetrievalRoleArn(const char* value) { SetRetrievalRoleArn(value); return *this;}


    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const{ return m_validators; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(const Aws::Vector<Validator>& value) { m_validatorsHasBeenSet = true; m_validators = value; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline void SetValidators(Aws::Vector<Validator>&& value) { m_validatorsHasBeenSet = true; m_validators = std::move(value); }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline UpdateConfigurationProfileRequest& WithValidators(const Aws::Vector<Validator>& value) { SetValidators(value); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline UpdateConfigurationProfileRequest& WithValidators(Aws::Vector<Validator>&& value) { SetValidators(std::move(value)); return *this;}

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline UpdateConfigurationProfileRequest& AddValidators(const Validator& value) { m_validatorsHasBeenSet = true; m_validators.push_back(value); return *this; }

    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline UpdateConfigurationProfileRequest& AddValidators(Validator&& value) { m_validatorsHasBeenSet = true; m_validators.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_configurationProfileId;
    bool m_configurationProfileIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_retrievalRoleArn;
    bool m_retrievalRoleArnHasBeenSet = false;

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
