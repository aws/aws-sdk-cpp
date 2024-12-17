/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanroomsml/model/InferenceResourceConfig.h>
#include <aws/cleanroomsml/model/InferenceOutputConfiguration.h>
#include <aws/cleanroomsml/model/ModelInferenceDataSource.h>
#include <aws/cleanroomsml/model/InferenceContainerExecutionParameters.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class StartTrainedModelInferenceJobRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API StartTrainedModelInferenceJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartTrainedModelInferenceJob"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The membership ID of the membership that contains the trained model inference
     * job.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model inference job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the trained model that is used for this
     * trained model inference job.</p>
     */
    inline const Aws::String& GetTrainedModelArn() const{ return m_trainedModelArn; }
    inline bool TrainedModelArnHasBeenSet() const { return m_trainedModelArnHasBeenSet; }
    inline void SetTrainedModelArn(const Aws::String& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = value; }
    inline void SetTrainedModelArn(Aws::String&& value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn = std::move(value); }
    inline void SetTrainedModelArn(const char* value) { m_trainedModelArnHasBeenSet = true; m_trainedModelArn.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithTrainedModelArn(const Aws::String& value) { SetTrainedModelArn(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithTrainedModelArn(Aws::String&& value) { SetTrainedModelArn(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithTrainedModelArn(const char* value) { SetTrainedModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the configured model algorithm association
     * that is used for this trained model inference job.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the resource configuration for the trained model inference job.</p>
     */
    inline const InferenceResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    inline void SetResourceConfig(const InferenceResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }
    inline void SetResourceConfig(InferenceResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithResourceConfig(const InferenceResourceConfig& value) { SetResourceConfig(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithResourceConfig(InferenceResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the output configuration information for the trained model inference
     * job.</p>
     */
    inline const InferenceOutputConfiguration& GetOutputConfiguration() const{ return m_outputConfiguration; }
    inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
    inline void SetOutputConfiguration(const InferenceOutputConfiguration& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = value; }
    inline void SetOutputConfiguration(InferenceOutputConfiguration&& value) { m_outputConfigurationHasBeenSet = true; m_outputConfiguration = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithOutputConfiguration(const InferenceOutputConfiguration& value) { SetOutputConfiguration(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithOutputConfiguration(InferenceOutputConfiguration&& value) { SetOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the data source that is used for the trained model inference job.</p>
     */
    inline const ModelInferenceDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const ModelInferenceDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(ModelInferenceDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithDataSource(const ModelInferenceDataSource& value) { SetDataSource(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithDataSource(ModelInferenceDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model inference job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution parameters for the container.</p>
     */
    inline const InferenceContainerExecutionParameters& GetContainerExecutionParameters() const{ return m_containerExecutionParameters; }
    inline bool ContainerExecutionParametersHasBeenSet() const { return m_containerExecutionParametersHasBeenSet; }
    inline void SetContainerExecutionParameters(const InferenceContainerExecutionParameters& value) { m_containerExecutionParametersHasBeenSet = true; m_containerExecutionParameters = value; }
    inline void SetContainerExecutionParameters(InferenceContainerExecutionParameters&& value) { m_containerExecutionParametersHasBeenSet = true; m_containerExecutionParameters = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithContainerExecutionParameters(const InferenceContainerExecutionParameters& value) { SetContainerExecutionParameters(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithContainerExecutionParameters(InferenceContainerExecutionParameters&& value) { SetContainerExecutionParameters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the ML inference job and associated data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline StartTrainedModelInferenceJobRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional metadata that you apply to the resource to help you categorize
     * and organize them. Each tag consists of a key and an optional value, both of
     * which you define.</p> <p>The following basic restrictions apply to tags:</p>
     * <ul> <li> <p>Maximum number of tags per resource - 50.</p> </li> <li> <p>For
     * each resource, each tag key must be unique, and each tag key can have only one
     * value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>If your tagging schema is used across multiple services
     * and resources, remember that other services may have restrictions on allowed
     * characters. Generally allowed characters are: letters, numbers, and spaces
     * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
     * <li> <p>Tag keys and values are case sensitive.</p> </li> <li> <p>Do not use
     * aws:, AWS:, or any upper or lowercase combination of such as a prefix for keys
     * as it is reserved for AWS use. You cannot edit or delete tag keys with this
     * prefix. Values can have this prefix. If a tag value has aws as its prefix but
     * the key does not, then Clean Rooms ML considers it to be a user tag and will
     * count against the limit of 50 tags. Tags with only the key prefix of aws do not
     * count against your tags per resource limit.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartTrainedModelInferenceJobRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline StartTrainedModelInferenceJobRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline StartTrainedModelInferenceJobRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline StartTrainedModelInferenceJobRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_trainedModelArn;
    bool m_trainedModelArnHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    InferenceResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    InferenceOutputConfiguration m_outputConfiguration;
    bool m_outputConfigurationHasBeenSet = false;

    ModelInferenceDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    InferenceContainerExecutionParameters m_containerExecutionParameters;
    bool m_containerExecutionParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
