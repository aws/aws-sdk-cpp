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
#include <aws/cleanroomsml/model/TrainingInputMode.h>
#include <aws/cleanroomsml/model/IncrementalTrainingDataChannel.h>
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
    AWS_CLEANROOMSML_API CreateTrainedModelRequest() = default;

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
    inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
    template<typename MembershipIdentifierT = Aws::String>
    void SetMembershipIdentifier(MembershipIdentifierT&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::forward<MembershipIdentifierT>(value); }
    template<typename MembershipIdentifierT = Aws::String>
    CreateTrainedModelRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) { SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the trained model.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTrainedModelRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The associated configured model algorithm used to train this model.</p>
     */
    inline const Aws::String& GetConfiguredModelAlgorithmAssociationArn() const { return m_configuredModelAlgorithmAssociationArn; }
    inline bool ConfiguredModelAlgorithmAssociationArnHasBeenSet() const { return m_configuredModelAlgorithmAssociationArnHasBeenSet; }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    void SetConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { m_configuredModelAlgorithmAssociationArnHasBeenSet = true; m_configuredModelAlgorithmAssociationArn = std::forward<ConfiguredModelAlgorithmAssociationArnT>(value); }
    template<typename ConfiguredModelAlgorithmAssociationArnT = Aws::String>
    CreateTrainedModelRequest& WithConfiguredModelAlgorithmAssociationArn(ConfiguredModelAlgorithmAssociationArnT&& value) { SetConfiguredModelAlgorithmAssociationArn(std::forward<ConfiguredModelAlgorithmAssociationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Algorithm-specific parameters that influence the quality of the model. You
     * set hyperparameters before you start the learning process.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetHyperparameters() const { return m_hyperparameters; }
    inline bool HyperparametersHasBeenSet() const { return m_hyperparametersHasBeenSet; }
    template<typename HyperparametersT = Aws::Map<Aws::String, Aws::String>>
    void SetHyperparameters(HyperparametersT&& value) { m_hyperparametersHasBeenSet = true; m_hyperparameters = std::forward<HyperparametersT>(value); }
    template<typename HyperparametersT = Aws::Map<Aws::String, Aws::String>>
    CreateTrainedModelRequest& WithHyperparameters(HyperparametersT&& value) { SetHyperparameters(std::forward<HyperparametersT>(value)); return *this;}
    template<typename HyperparametersKeyT = Aws::String, typename HyperparametersValueT = Aws::String>
    CreateTrainedModelRequest& AddHyperparameters(HyperparametersKeyT&& key, HyperparametersValueT&& value) {
      m_hyperparametersHasBeenSet = true; m_hyperparameters.emplace(std::forward<HyperparametersKeyT>(key), std::forward<HyperparametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The environment variables to set in the Docker container.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    void SetEnvironment(EnvironmentT&& value) { m_environmentHasBeenSet = true; m_environment = std::forward<EnvironmentT>(value); }
    template<typename EnvironmentT = Aws::Map<Aws::String, Aws::String>>
    CreateTrainedModelRequest& WithEnvironment(EnvironmentT&& value) { SetEnvironment(std::forward<EnvironmentT>(value)); return *this;}
    template<typename EnvironmentKeyT = Aws::String, typename EnvironmentValueT = Aws::String>
    CreateTrainedModelRequest& AddEnvironment(EnvironmentKeyT&& key, EnvironmentValueT&& value) {
      m_environmentHasBeenSet = true; m_environment.emplace(std::forward<EnvironmentKeyT>(key), std::forward<EnvironmentValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about the EC2 resources that are used to train this model.</p>
     */
    inline const ResourceConfig& GetResourceConfig() const { return m_resourceConfig; }
    inline bool ResourceConfigHasBeenSet() const { return m_resourceConfigHasBeenSet; }
    template<typename ResourceConfigT = ResourceConfig>
    void SetResourceConfig(ResourceConfigT&& value) { m_resourceConfigHasBeenSet = true; m_resourceConfig = std::forward<ResourceConfigT>(value); }
    template<typename ResourceConfigT = ResourceConfig>
    CreateTrainedModelRequest& WithResourceConfig(ResourceConfigT&& value) { SetResourceConfig(std::forward<ResourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria that is used to stop model training.</p>
     */
    inline const StoppingCondition& GetStoppingCondition() const { return m_stoppingCondition; }
    inline bool StoppingConditionHasBeenSet() const { return m_stoppingConditionHasBeenSet; }
    template<typename StoppingConditionT = StoppingCondition>
    void SetStoppingCondition(StoppingConditionT&& value) { m_stoppingConditionHasBeenSet = true; m_stoppingCondition = std::forward<StoppingConditionT>(value); }
    template<typename StoppingConditionT = StoppingCondition>
    CreateTrainedModelRequest& WithStoppingCondition(StoppingConditionT&& value) { SetStoppingCondition(std::forward<StoppingConditionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the incremental training data channels for the trained model. </p>
     * <p>Incremental training allows you to create a new trained model with updates
     * without retraining from scratch. You can specify up to one incremental training
     * data channel that references a previously trained model and its version.</p>
     * <p>Limit: Maximum of 20 channels total (including both
     * <code>incrementalTrainingDataChannels</code> and <code>dataChannels</code>).</p>
     */
    inline const Aws::Vector<IncrementalTrainingDataChannel>& GetIncrementalTrainingDataChannels() const { return m_incrementalTrainingDataChannels; }
    inline bool IncrementalTrainingDataChannelsHasBeenSet() const { return m_incrementalTrainingDataChannelsHasBeenSet; }
    template<typename IncrementalTrainingDataChannelsT = Aws::Vector<IncrementalTrainingDataChannel>>
    void SetIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { m_incrementalTrainingDataChannelsHasBeenSet = true; m_incrementalTrainingDataChannels = std::forward<IncrementalTrainingDataChannelsT>(value); }
    template<typename IncrementalTrainingDataChannelsT = Aws::Vector<IncrementalTrainingDataChannel>>
    CreateTrainedModelRequest& WithIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { SetIncrementalTrainingDataChannels(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this;}
    template<typename IncrementalTrainingDataChannelsT = IncrementalTrainingDataChannel>
    CreateTrainedModelRequest& AddIncrementalTrainingDataChannels(IncrementalTrainingDataChannelsT&& value) { m_incrementalTrainingDataChannelsHasBeenSet = true; m_incrementalTrainingDataChannels.emplace_back(std::forward<IncrementalTrainingDataChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Defines the data channels that are used as input for the trained model
     * request.</p> <p>Limit: Maximum of 20 channels total (including both
     * <code>dataChannels</code> and <code>incrementalTrainingDataChannels</code>).</p>
     */
    inline const Aws::Vector<ModelTrainingDataChannel>& GetDataChannels() const { return m_dataChannels; }
    inline bool DataChannelsHasBeenSet() const { return m_dataChannelsHasBeenSet; }
    template<typename DataChannelsT = Aws::Vector<ModelTrainingDataChannel>>
    void SetDataChannels(DataChannelsT&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels = std::forward<DataChannelsT>(value); }
    template<typename DataChannelsT = Aws::Vector<ModelTrainingDataChannel>>
    CreateTrainedModelRequest& WithDataChannels(DataChannelsT&& value) { SetDataChannels(std::forward<DataChannelsT>(value)); return *this;}
    template<typename DataChannelsT = ModelTrainingDataChannel>
    CreateTrainedModelRequest& AddDataChannels(DataChannelsT&& value) { m_dataChannelsHasBeenSet = true; m_dataChannels.emplace_back(std::forward<DataChannelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The input mode for accessing the training data. This parameter determines how
     * the training data is made available to the training algorithm. Valid values
     * are:</p> <ul> <li> <p> <code>File</code> - The training data is downloaded to
     * the training instance and made available as files.</p> </li> <li> <p>
     * <code>FastFile</code> - The training data is streamed directly from Amazon S3 to
     * the training algorithm, providing faster access for large datasets.</p> </li>
     * <li> <p> <code>Pipe</code> - The training data is streamed to the training
     * algorithm using named pipes, which can improve performance for certain
     * algorithms.</p> </li> </ul>
     */
    inline TrainingInputMode GetTrainingInputMode() const { return m_trainingInputMode; }
    inline bool TrainingInputModeHasBeenSet() const { return m_trainingInputModeHasBeenSet; }
    inline void SetTrainingInputMode(TrainingInputMode value) { m_trainingInputModeHasBeenSet = true; m_trainingInputMode = value; }
    inline CreateTrainedModelRequest& WithTrainingInputMode(TrainingInputMode value) { SetTrainingInputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the trained model.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateTrainedModelRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key. This key is used to encrypt
     * and decrypt customer-owned data in the trained ML model and the associated
     * data.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    template<typename KmsKeyArnT = Aws::String>
    void SetKmsKeyArn(KmsKeyArnT&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::forward<KmsKeyArnT>(value); }
    template<typename KmsKeyArnT = Aws::String>
    CreateTrainedModelRequest& WithKmsKeyArn(KmsKeyArnT&& value) { SetKmsKeyArn(std::forward<KmsKeyArnT>(value)); return *this;}
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
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateTrainedModelRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateTrainedModelRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::Vector<IncrementalTrainingDataChannel> m_incrementalTrainingDataChannels;
    bool m_incrementalTrainingDataChannelsHasBeenSet = false;

    Aws::Vector<ModelTrainingDataChannel> m_dataChannels;
    bool m_dataChannelsHasBeenSet = false;

    TrainingInputMode m_trainingInputMode{TrainingInputMode::NOT_SET};
    bool m_trainingInputModeHasBeenSet = false;

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
