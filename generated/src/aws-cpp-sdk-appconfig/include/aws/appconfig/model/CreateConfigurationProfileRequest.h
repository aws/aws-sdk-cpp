/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateConfigurationProfileRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API CreateConfigurationProfileRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateConfigurationProfile"; }

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
    CreateConfigurationProfileRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the configuration profile.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateConfigurationProfileRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateConfigurationProfileRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A URI to locate the configuration. You can specify the following:</p> <ul>
     * <li> <p>For the AppConfig hosted configuration store and for feature flags,
     * specify <code>hosted</code>.</p> </li> <li> <p>For an Amazon Web Services
     * Systems Manager Parameter Store parameter, specify either the parameter name in
     * the format <code>ssm-parameter://&lt;parameter name&gt;</code> or the ARN.</p>
     * </li> <li> <p>For an Amazon Web Services CodePipeline pipeline, specify the URI
     * in the following format: <code>codepipeline</code>://&lt;pipeline name&gt;.</p>
     * </li> <li> <p>For an Secrets Manager secret, specify the URI in the following
     * format: <code>secretsmanager</code>://&lt;secret name&gt;.</p> </li> <li> <p>For
     * an Amazon S3 object, specify the URI in the following format:
     * <code>s3://&lt;bucket&gt;/&lt;objectKey&gt; </code>. Here is an example:
     * <code>s3://amzn-s3-demo-bucket/my-app/us-east-1/my-config.json</code> </p> </li>
     * <li> <p>For an SSM document, specify either the document name in the format
     * <code>ssm-document://&lt;document name&gt;</code> or the Amazon Resource Name
     * (ARN).</p> </li> </ul>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    inline bool LocationUriHasBeenSet() const { return m_locationUriHasBeenSet; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    CreateConfigurationProfileRequest& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
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
    CreateConfigurationProfileRequest& WithRetrievalRoleArn(RetrievalRoleArnT&& value) { SetRetrievalRoleArn(std::forward<RetrievalRoleArnT>(value)); return *this;}
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
    CreateConfigurationProfileRequest& WithValidators(ValidatorsT&& value) { SetValidators(std::forward<ValidatorsT>(value)); return *this;}
    template<typename ValidatorsT = Validator>
    CreateConfigurationProfileRequest& AddValidators(ValidatorsT&& value) { m_validatorsHasBeenSet = true; m_validators.emplace_back(std::forward<ValidatorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Metadata to assign to the configuration profile. Tags help organize and
     * categorize your AppConfig resources. Each tag consists of a key and an optional
     * value, both of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateConfigurationProfileRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateConfigurationProfileRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of configurations contained in the profile. AppConfig supports
     * <code>feature flags</code> and <code>freeform</code> configurations. We
     * recommend you create feature flag configurations to enable or disable new
     * features and freeform configurations to distribute configurations to an
     * application. When calling this API, enter one of the following values for
     * <code>Type</code>:</p> <p> <code>AWS.AppConfig.FeatureFlags</code> </p> <p>
     * <code>AWS.Freeform</code> </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    CreateConfigurationProfileRequest& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for an Key Management Service key to encrypt new configuration
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
    CreateConfigurationProfileRequest& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    Aws::String m_retrievalRoleArn;
    bool m_retrievalRoleArnHasBeenSet = false;

    Aws::Vector<Validator> m_validators;
    bool m_validatorsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
