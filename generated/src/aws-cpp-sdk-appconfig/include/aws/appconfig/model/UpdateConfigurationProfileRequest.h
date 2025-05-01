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
    AWS_APPCONFIG_API UpdateConfigurationProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateConfigurationProfile"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateConfigurationProfileRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the configuration profile.</p>
     */
    inline const Aws::String& GetConfigurationProfileId() const { return m_configurationProfileId; }
    inline bool ConfigurationProfileIdHasBeenSet() const { return m_configurationProfileIdHasBeenSet; }
    template<typename ConfigurationProfileIdT = Aws::String>
    void SetConfigurationProfileId(ConfigurationProfileIdT&& value) { m_configurationProfileIdHasBeenSet = true; m_configurationProfileId = std::forward<ConfigurationProfileIdT>(value); }
    template<typename ConfigurationProfileIdT = Aws::String>
    UpdateConfigurationProfileRequest& WithConfigurationProfileId(ConfigurationProfileIdT&& value) { SetConfigurationProfileId(std::forward<ConfigurationProfileIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the configuration profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateConfigurationProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the configuration profile.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateConfigurationProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of an IAM role with permission to access the configuration at the
     * specified <code>LocationUri</code>.</p>  <p>A retrieval role ARN is
     * not required for configurations stored in CodePipeline or the AppConfig hosted
     * configuration store. It is required for all other sources that store your
     * configuration. </p> 
     */
    inline const Aws::String& GetRetrievalRoleArn() const { return m_retrievalRoleArn; }
    inline bool RetrievalRoleArnHasBeenSet() const { return m_retrievalRoleArnHasBeenSet; }
    template<typename RetrievalRoleArnT = Aws::String>
    void SetRetrievalRoleArn(RetrievalRoleArnT&& value) { m_retrievalRoleArnHasBeenSet = true; m_retrievalRoleArn = std::forward<RetrievalRoleArnT>(value); }
    template<typename RetrievalRoleArnT = Aws::String>
    UpdateConfigurationProfileRequest& WithRetrievalRoleArn(RetrievalRoleArnT&& value) { SetRetrievalRoleArn(std::forward<RetrievalRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of methods for validating the configuration.</p>
     */
    inline const Aws::Vector<Validator>& GetValidators() const { return m_validators; }
    inline bool ValidatorsHasBeenSet() const { return m_validatorsHasBeenSet; }
    template<typename ValidatorsT = Aws::Vector<Validator>>
    void SetValidators(ValidatorsT&& value) { m_validatorsHasBeenSet = true; m_validators = std::forward<ValidatorsT>(value); }
    template<typename ValidatorsT = Aws::Vector<Validator>>
    UpdateConfigurationProfileRequest& WithValidators(ValidatorsT&& value) { SetValidators(std::forward<ValidatorsT>(value)); return *this;}
    template<typename ValidatorsT = Validator>
    UpdateConfigurationProfileRequest& AddValidators(ValidatorsT&& value) { m_validatorsHasBeenSet = true; m_validators.emplace_back(std::forward<ValidatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier for a Key Management Service key to encrypt new configuration
     * data versions in the AppConfig hosted configuration store. This attribute is
     * only used for <code>hosted</code> configuration types. The identifier can be an
     * KMS key ID, alias, or the Amazon Resource Name (ARN) of the key ID or alias. To
     * encrypt data managed in other configuration stores, see the documentation for
     * how to specify an KMS key for that particular service.</p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    inline bool KmsKeyIdentifierHasBeenSet() const { return m_kmsKeyIdentifierHasBeenSet; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    UpdateConfigurationProfileRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}
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

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
