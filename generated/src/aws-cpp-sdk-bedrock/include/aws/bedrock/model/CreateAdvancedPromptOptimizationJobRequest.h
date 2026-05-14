/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/BedrockRequest.h>
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationInputConfig.h>
#include <aws/bedrock/model/AdvancedPromptOptimizationOutputConfig.h>
#include <aws/bedrock/model/ModelConfiguration.h>
#include <aws/bedrock/model/Tag.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Bedrock {
namespace Model {

/**
 * <p>Create Advanced Prompt Optimization Job Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/CreateAdvancedPromptOptimizationJobRequest">AWS
 * API Reference</a></p>
 */
class CreateAdvancedPromptOptimizationJobRequest : public BedrockRequest {
 public:
  AWS_BEDROCK_API CreateAdvancedPromptOptimizationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateAdvancedPromptOptimizationJob"; }

  AWS_BEDROCK_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Name of the advanced prompt optimization job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  CreateAdvancedPromptOptimizationJobRequest& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the advanced prompt optimization job.</p>
   */
  inline const Aws::String& GetJobDescription() const { return m_jobDescription; }
  inline bool JobDescriptionHasBeenSet() const { return m_jobDescriptionHasBeenSet; }
  template <typename JobDescriptionT = Aws::String>
  void SetJobDescription(JobDescriptionT&& value) {
    m_jobDescriptionHasBeenSet = true;
    m_jobDescription = std::forward<JobDescriptionT>(value);
  }
  template <typename JobDescriptionT = Aws::String>
  CreateAdvancedPromptOptimizationJobRequest& WithJobDescription(JobDescriptionT&& value) {
    SetJobDescription(std::forward<JobDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Idempotency token for the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateAdvancedPromptOptimizationJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Input data configuration for the advanced prompt optimization job.</p>
   */
  inline const AdvancedPromptOptimizationInputConfig& GetInputConfig() const { return m_inputConfig; }
  inline bool InputConfigHasBeenSet() const { return m_inputConfigHasBeenSet; }
  template <typename InputConfigT = AdvancedPromptOptimizationInputConfig>
  void SetInputConfig(InputConfigT&& value) {
    m_inputConfigHasBeenSet = true;
    m_inputConfig = std::forward<InputConfigT>(value);
  }
  template <typename InputConfigT = AdvancedPromptOptimizationInputConfig>
  CreateAdvancedPromptOptimizationJobRequest& WithInputConfig(InputConfigT&& value) {
    SetInputConfig(std::forward<InputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output data configuration for the advanced prompt optimization job.</p>
   */
  inline const AdvancedPromptOptimizationOutputConfig& GetOutputConfig() const { return m_outputConfig; }
  inline bool OutputConfigHasBeenSet() const { return m_outputConfigHasBeenSet; }
  template <typename OutputConfigT = AdvancedPromptOptimizationOutputConfig>
  void SetOutputConfig(OutputConfigT&& value) {
    m_outputConfigHasBeenSet = true;
    m_outputConfig = std::forward<OutputConfigT>(value);
  }
  template <typename OutputConfigT = AdvancedPromptOptimizationOutputConfig>
  CreateAdvancedPromptOptimizationJobRequest& WithOutputConfig(OutputConfigT&& value) {
    SetOutputConfig(std::forward<OutputConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>KMS key ARN for encrypting output data.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  CreateAdvancedPromptOptimizationJobRequest& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags to associate with the job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateAdvancedPromptOptimizationJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateAdvancedPromptOptimizationJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Model configurations for advanced prompt optimization.</p>
   */
  inline const Aws::Vector<ModelConfiguration>& GetModelConfigurations() const { return m_modelConfigurations; }
  inline bool ModelConfigurationsHasBeenSet() const { return m_modelConfigurationsHasBeenSet; }
  template <typename ModelConfigurationsT = Aws::Vector<ModelConfiguration>>
  void SetModelConfigurations(ModelConfigurationsT&& value) {
    m_modelConfigurationsHasBeenSet = true;
    m_modelConfigurations = std::forward<ModelConfigurationsT>(value);
  }
  template <typename ModelConfigurationsT = Aws::Vector<ModelConfiguration>>
  CreateAdvancedPromptOptimizationJobRequest& WithModelConfigurations(ModelConfigurationsT&& value) {
    SetModelConfigurations(std::forward<ModelConfigurationsT>(value));
    return *this;
  }
  template <typename ModelConfigurationsT = ModelConfiguration>
  CreateAdvancedPromptOptimizationJobRequest& AddModelConfigurations(ModelConfigurationsT&& value) {
    m_modelConfigurationsHasBeenSet = true;
    m_modelConfigurations.emplace_back(std::forward<ModelConfigurationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobName;

  Aws::String m_jobDescription;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  AdvancedPromptOptimizationInputConfig m_inputConfig;

  AdvancedPromptOptimizationOutputConfig m_outputConfig;

  Aws::String m_encryptionKeyArn;

  Aws::Vector<Tag> m_tags;

  Aws::Vector<ModelConfiguration> m_modelConfigurations;
  bool m_jobNameHasBeenSet = false;
  bool m_jobDescriptionHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_inputConfigHasBeenSet = false;
  bool m_outputConfigHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_modelConfigurationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
