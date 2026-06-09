/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/DatasetSchemaType.h>
#include <aws/bedrock-agentcore-control/model/DatasetStatus.h>
#include <aws/bedrock-agentcore-control/model/DraftStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> Summary information about a dataset. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DatasetSummary">AWS
 * API Reference</a></p>
 */
class DatasetSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DatasetSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DatasetSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API DatasetSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The Amazon Resource Name (ARN) of the dataset. </p>
   */
  inline const Aws::String& GetDatasetArn() const { return m_datasetArn; }
  inline bool DatasetArnHasBeenSet() const { return m_datasetArnHasBeenSet; }
  template <typename DatasetArnT = Aws::String>
  void SetDatasetArn(DatasetArnT&& value) {
    m_datasetArnHasBeenSet = true;
    m_datasetArn = std::forward<DatasetArnT>(value);
  }
  template <typename DatasetArnT = Aws::String>
  DatasetSummary& WithDatasetArn(DatasetArnT&& value) {
    SetDatasetArn(std::forward<DatasetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the dataset. </p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  DatasetSummary& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the dataset. </p>
   */
  inline const Aws::String& GetDatasetName() const { return m_datasetName; }
  inline bool DatasetNameHasBeenSet() const { return m_datasetNameHasBeenSet; }
  template <typename DatasetNameT = Aws::String>
  void SetDatasetName(DatasetNameT&& value) {
    m_datasetNameHasBeenSet = true;
    m_datasetName = std::forward<DatasetNameT>(value);
  }
  template <typename DatasetNameT = Aws::String>
  DatasetSummary& WithDatasetName(DatasetNameT&& value) {
    SetDatasetName(std::forward<DatasetNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The description of the dataset. </p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DatasetSummary& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The current status of the dataset. </p>
   */
  inline DatasetStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DatasetStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DatasetSummary& WithStatus(DatasetStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Publish synchronization state. Only authoritative when status == ACTIVE.</p>
   */
  inline DraftStatus GetDraftStatus() const { return m_draftStatus; }
  inline bool DraftStatusHasBeenSet() const { return m_draftStatusHasBeenSet; }
  inline void SetDraftStatus(DraftStatus value) {
    m_draftStatusHasBeenSet = true;
    m_draftStatus = value;
  }
  inline DatasetSummary& WithDraftStatus(DraftStatus value) {
    SetDraftStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The schema type of the dataset. </p>
   */
  inline DatasetSchemaType GetSchemaType() const { return m_schemaType; }
  inline bool SchemaTypeHasBeenSet() const { return m_schemaTypeHasBeenSet; }
  inline void SetSchemaType(DatasetSchemaType value) {
    m_schemaTypeHasBeenSet = true;
    m_schemaType = value;
  }
  inline DatasetSummary& WithSchemaType(DatasetSchemaType value) {
    SetSchemaType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples in the dataset. </p>
   */
  inline long long GetExampleCount() const { return m_exampleCount; }
  inline bool ExampleCountHasBeenSet() const { return m_exampleCountHasBeenSet; }
  inline void SetExampleCount(long long value) {
    m_exampleCountHasBeenSet = true;
    m_exampleCount = value;
  }
  inline DatasetSummary& WithExampleCount(long long value) {
    SetExampleCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the dataset was created. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DatasetSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when the dataset was last updated. </p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DatasetSummary& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetArn;

  Aws::String m_datasetId;

  Aws::String m_datasetName;

  Aws::String m_description;

  DatasetStatus m_status{DatasetStatus::NOT_SET};

  DraftStatus m_draftStatus{DraftStatus::NOT_SET};

  DatasetSchemaType m_schemaType{DatasetSchemaType::NOT_SET};

  long long m_exampleCount{0};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};
  bool m_datasetArnHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetNameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_draftStatusHasBeenSet = false;
  bool m_schemaTypeHasBeenSet = false;
  bool m_exampleCountHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
