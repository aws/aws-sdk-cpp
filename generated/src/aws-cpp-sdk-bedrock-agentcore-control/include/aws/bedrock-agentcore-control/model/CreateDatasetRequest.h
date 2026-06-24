/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DataSourceType.h>
#include <aws/bedrock-agentcore-control/model/DatasetSchemaType.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class CreateDatasetRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CreateDatasetRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDataset"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If you don't specify this field, a value is randomly
   * generated for you. If this token matches a previous request, the service ignores
   * the request, but doesn't return an error. For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
   * idempotency</a>.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDatasetRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Human-readable name for the dataset. Must be unique within the account.
   * Immutable after creation. </p>
   */
  inline const Aws::String& GetDatasetName() const { return m_datasetName; }
  inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
  template <typename DatasetNameT = Aws::String>
  void SetDatasetName(DatasetNameT&& value) {
    m_datasetNameHasBeenSet = true;
    m_datasetName = std::forward<DatasetNameT>(value);
  }
  template <typename DatasetNameT = Aws::String>
  CreateDatasetRequest& WithDatasetName(DatasetNameT&& value) {
    SetDatasetName(std::forward<DatasetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A description of the dataset. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDatasetRequest& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Source of initial examples. Provide either inline examples or an S3 URI
   * pointing to a JSONL file. </p>
   */
  inline const DataSourceType& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = DataSourceType>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = DataSourceType>
  CreateDatasetRequest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Versioned schema type governing the structure of examples. Immutable after
   * creation. </p>
   */
  inline DatasetSchemaType GetSchemaType() const { return m_schemaType; }
  inline bool SchemaTypeHasBeenSet() const { return m_schemaTypeHasBeenSet; }
  inline void SetSchemaType(DatasetSchemaType value) {
    m_schemaTypeHasBeenSet = true;
    m_schemaType = value;
  }
  inline CreateDatasetRequest& WithSchemaType(DatasetSchemaType value) {
    SetSchemaType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Optional KMS key ARN for server-side encryption on service Amazon S3 writes.
   * </p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  CreateDatasetRequest& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A map of tag keys and values to assign to the dataset. </p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDatasetRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDatasetRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_datasetName;

  Aws::String m_description;

  DataSourceType m_source;

  DatasetSchemaType m_schemaType{DatasetSchemaType::NOT_SET};

  Aws::String m_kmsKeyArn;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_clientTokenHasBeenSet = true;
  bool m_datasetNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_sourceHasBeenSet = false;
  bool m_schemaTypeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
