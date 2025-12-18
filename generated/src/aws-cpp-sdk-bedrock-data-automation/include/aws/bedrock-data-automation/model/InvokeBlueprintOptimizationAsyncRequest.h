/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomationRequest.h>
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/bedrock-data-automation/model/BlueprintOptimizationObject.h>
#include <aws/bedrock-data-automation/model/BlueprintOptimizationOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/BlueprintOptimizationSample.h>
#include <aws/bedrock-data-automation/model/EncryptionConfiguration.h>
#include <aws/bedrock-data-automation/model/Tag.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockDataAutomation {
namespace Model {

/**
 * <p>Invoke Blueprint Optimization Async Request</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/InvokeBlueprintOptimizationAsyncRequest">AWS
 * API Reference</a></p>
 */
class InvokeBlueprintOptimizationAsyncRequest : public BedrockDataAutomationRequest {
 public:
  AWS_BEDROCKDATAAUTOMATION_API InvokeBlueprintOptimizationAsyncRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InvokeBlueprintOptimizationAsync"; }

  AWS_BEDROCKDATAAUTOMATION_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Blueprint to be optimized</p>
   */
  inline const BlueprintOptimizationObject& GetBlueprint() const { return m_blueprint; }
  inline bool BlueprintHasBeenSet() const { return m_blueprintHasBeenSet; }
  template <typename BlueprintT = BlueprintOptimizationObject>
  void SetBlueprint(BlueprintT&& value) {
    m_blueprintHasBeenSet = true;
    m_blueprint = std::forward<BlueprintT>(value);
  }
  template <typename BlueprintT = BlueprintOptimizationObject>
  InvokeBlueprintOptimizationAsyncRequest& WithBlueprint(BlueprintT&& value) {
    SetBlueprint(std::forward<BlueprintT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of Blueprint Optimization Samples</p>
   */
  inline const Aws::Vector<BlueprintOptimizationSample>& GetSamples() const { return m_samples; }
  inline bool SamplesHasBeenSet() const { return m_samplesHasBeenSet; }
  template <typename SamplesT = Aws::Vector<BlueprintOptimizationSample>>
  void SetSamples(SamplesT&& value) {
    m_samplesHasBeenSet = true;
    m_samples = std::forward<SamplesT>(value);
  }
  template <typename SamplesT = Aws::Vector<BlueprintOptimizationSample>>
  InvokeBlueprintOptimizationAsyncRequest& WithSamples(SamplesT&& value) {
    SetSamples(std::forward<SamplesT>(value));
    return *this;
  }
  template <typename SamplesT = BlueprintOptimizationSample>
  InvokeBlueprintOptimizationAsyncRequest& AddSamples(SamplesT&& value) {
    m_samplesHasBeenSet = true;
    m_samples.emplace_back(std::forward<SamplesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Output configuration where the results should be placed</p>
   */
  inline const BlueprintOptimizationOutputConfiguration& GetOutputConfiguration() const { return m_outputConfiguration; }
  inline bool OutputConfigurationHasBeenSet() const { return m_outputConfigurationHasBeenSet; }
  template <typename OutputConfigurationT = BlueprintOptimizationOutputConfiguration>
  void SetOutputConfiguration(OutputConfigurationT&& value) {
    m_outputConfigurationHasBeenSet = true;
    m_outputConfiguration = std::forward<OutputConfigurationT>(value);
  }
  template <typename OutputConfigurationT = BlueprintOptimizationOutputConfiguration>
  InvokeBlueprintOptimizationAsyncRequest& WithOutputConfiguration(OutputConfigurationT&& value) {
    SetOutputConfiguration(std::forward<OutputConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Data automation profile ARN</p>
   */
  inline const Aws::String& GetDataAutomationProfileArn() const { return m_dataAutomationProfileArn; }
  inline bool DataAutomationProfileArnHasBeenSet() const { return m_dataAutomationProfileArnHasBeenSet; }
  template <typename DataAutomationProfileArnT = Aws::String>
  void SetDataAutomationProfileArn(DataAutomationProfileArnT&& value) {
    m_dataAutomationProfileArnHasBeenSet = true;
    m_dataAutomationProfileArn = std::forward<DataAutomationProfileArnT>(value);
  }
  template <typename DataAutomationProfileArnT = Aws::String>
  InvokeBlueprintOptimizationAsyncRequest& WithDataAutomationProfileArn(DataAutomationProfileArnT&& value) {
    SetDataAutomationProfileArn(std::forward<DataAutomationProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encryption configuration.</p>
   */
  inline const EncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = EncryptionConfiguration>
  InvokeBlueprintOptimizationAsyncRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of tags.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  InvokeBlueprintOptimizationAsyncRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  InvokeBlueprintOptimizationAsyncRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  BlueprintOptimizationObject m_blueprint;

  Aws::Vector<BlueprintOptimizationSample> m_samples;

  BlueprintOptimizationOutputConfiguration m_outputConfiguration;

  Aws::String m_dataAutomationProfileArn;

  EncryptionConfiguration m_encryptionConfiguration;

  Aws::Vector<Tag> m_tags;
  bool m_blueprintHasBeenSet = false;
  bool m_samplesHasBeenSet = false;
  bool m_outputConfigurationHasBeenSet = false;
  bool m_dataAutomationProfileArnHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockDataAutomation
}  // namespace Aws
