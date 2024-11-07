/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanroomsml/CleanRoomsML_EXPORTS.h>
#include <aws/cleanroomsml/CleanRoomsMLRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cleanroomsml/model/ResourceConfig.h>
#include <aws/cleanroomsml/model/StoppingCondition.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanroomsml/model/ModelTrainingDataChannel.h>
#include <utility>

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

  /**
   */
  class CreateTrainedModelRequest : public CleanRoomsMLRequest
  {
  public:
    AWS_CLEANROOMSML_API CreateTrainedModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrainedModel"; }

    AWS_CLEANROOMSML_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The membership ID of the member that is creating the trained model.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }
    inline CreateTrainedModelRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}
    inline CreateTrainedModelRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateTrainedModelRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateTrainedModelRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated configured model algorithm used to train this model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const{ return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    inline void SetConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = value; }
    inline void SetConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::move(value); }
    inline void SetConfiguredModelAlgorithmAssociationArn(const char* value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn.assign(value); }
    inline CreateTrainedModelRequest& WithConfiguredModelAlgorithmAssociationArn(const Aws::String& value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    inline CreateTrainedModelRequest& WithConfiguredModelAlgorithmAssociationArn(Aws::String&& value) { SetConfiguredModelAlgorithmAssociationArn(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& WithConfiguredModelAlgorithmAssociationArn(const char* value) { SetConfiguredModelAlgorithmAssociationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperparameters() const{ return m_hyperparameters; }
    inline bool HyperparametersHasBeenSet() const { return m_hyperparametersHasBeenSet; }
    inline void SetHyperparameters(const Aws::Map<Aws::String, Aws::String>& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters = value; }
    inline void SetHyperparameters(Aws::Map<Aws::String, Aws::String>&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters = std::move(value); }
    inline CreateTrainedModelRequest& WithHyperparameters(const Aws::Map<Aws::String, Aws::String>& value) { SetHyperparameters(value); return *this;}
    inline CreateTrainedModelRequest& WithHyperparameters(Aws::Map<Aws::String, Aws::String>&& value) { SetHyperparameters(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& AddHyperparameters(const Aws::String& key, const Aws::String& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(key, value); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(Aws::String&& key, const Aws::String& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(const Aws::String& key, Aws::String&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(Aws::String&& key, Aws::String&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(const char* key, Aws::String&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(Aws::String&& key, const char* value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddHyperparameters(const char* key, const char* value) { m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline CreateTrainedModelRequest& WithEnvironment(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironment(value); return *this;}
    inline CreateTrainedModelRequest& WithEnvironment(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironment(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& AddEnvironment(const Aws::String& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(Aws::String&& key, const Aws::String& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(const Aws::String& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(Aws::String&& key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(const char* key, Aws::String&& value) { m_environmentHasBeenSet = true; m_environment.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(Aws::String&& key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddEnvironment(const char* key, const char* value) { m_environmentHasBeenSet = true; m_environment.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the EC2 resources that are used to train this model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const{ return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    inline void SetResourceConfig(const ResourceConfig& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = value; }
    inline void SetResourceConfig(ResourceConfig&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::move(value); }
    inline CreateTrainedModelRequest& WithResourceConfig(const ResourceConfig& value) { SetResourceConfig(value); return *this;}
    inline CreateTrainedModelRequest& WithResourceConfig(ResourceConfig&& value) { SetResourceConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that is used to stop model training.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const{ return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    inline void SetStoppingCondition(const StoppingCondition& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = value; }
    inline void SetStoppingCondition(StoppingCondition&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::move(value); }
    inline CreateTrainedModelRequest& WithStoppingCondition(const StoppingCondition& value) { SetStoppingCondition(value); return *this;}
    inline CreateTrainedModelRequest& WithStoppingCondition(StoppingCondition&& value) { SetStoppingCondition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the data channels that are used as input for the trained model
     * request.</p>
     */
    inline const Aws::Vector<ModelTrainingDataChannel>& GetDataChannels() const{ return m_dataChannels; }
    inline bool DataChannelsHasBeenSet() const { return m_dataChannelsHasBeenSet; }
    inline void SetDataChannels(const Aws::Vector<ModelTrainingDataChannel>& value) { m_dataChannelsHasBeenSet = true; m_dataChannels = value; }
    inline void SetDataChannels(Aws::Vector<ModelTrainingDataChannel>&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels = std::move(value); }
    inline CreateTrainedModelRequest& WithDataChannels(const Aws::Vector<ModelTrainingDataChannel>& value) { SetDataChannels(value); return *this;}
    inline CreateTrainedModelRequest& WithDataChannels(Aws::Vector<ModelTrainingDataChannel>&& value) { SetDataChannels(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& AddDataChannels(const ModelTrainingDataChannel& value) { m_dataChannelsHasBeenSet = true; m_dataChannels.push_back(value); return *this; }
    inline CreateTrainedModelRequest& AddDataChannels(ModelTrainingDataChannel&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateTrainedModelRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateTrainedModelRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline CreateTrainedModelRequest& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline CreateTrainedModelRequest& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
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
    inline CreateTrainedModelRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateTrainedModelRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTrainedModelRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateTrainedModelRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateTrainedModelRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateTrainedModelRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_configuredModelAlgorithmAssociationArn;
    bool m_configuredModelAlgorithmAssociationArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_hyperparameters;
    bool m_hyperparametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_environment;
    bool m_environmentHasBeenSet = false;

    ResourceConfig m_resourceConfig;
    bool m_resourceConfigHasBeenSet = false;

    StoppingCondition m_stoppingCondition;
    bool m_stoppingConditionHasBeenSet = false;

    Aws::Vector<ModelTrainingDataChannel> m_dataChannels;
    bool m_dataChannelsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
