/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/ExampleCountByField.h>
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
 * <p> Summary information about a published dataset version. </p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/DatasetVersionSummary">AWS
 * API Reference</a></p>
 */
class DatasetVersionSummary {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API DatasetVersionSummary() = default;
  AWS_BEDROCKAGENTCORECONTROL_API DatasetVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API DatasetVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The version number of this published snapshot. </p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  inline bool DatasetVersionHasBeenSet() const { return m_datasetVersionHasBeenSet; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  DatasetVersionSummary& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples in this version. </p>
   */
  inline long long GetExampleCount() const { return m_exampleCount; }
  inline bool ExampleCountHasBeenSet() const { return m_exampleCountHasBeenSet; }
  inline void SetExampleCount(long long value) {
    m_exampleCountHasBeenSet = true;
    m_exampleCount = value;
  }
  inline DatasetVersionSummary& WithExampleCount(long long value) {
    SetExampleCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of examples that have each field, for this version. Absent when
   * the counts are unknown. </p>
   */
  inline const ExampleCountByField& GetExampleCountByField() const { return m_exampleCountByField; }
  inline bool ExampleCountByFieldHasBeenSet() const { return m_exampleCountByFieldHasBeenSet; }
  template <typename ExampleCountByFieldT = ExampleCountByField>
  void SetExampleCountByField(ExampleCountByFieldT&& value) {
    m_exampleCountByFieldHasBeenSet = true;
    m_exampleCountByField = std::forward<ExampleCountByFieldT>(value);
  }
  template <typename ExampleCountByFieldT = ExampleCountByField>
  DatasetVersionSummary& WithExampleCountByField(ExampleCountByFieldT&& value) {
    SetExampleCountByField(std::forward<ExampleCountByFieldT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The timestamp when this version was published. </p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DatasetVersionSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetVersion;

  long long m_exampleCount{0};

  ExampleCountByField m_exampleCountByField;

  Aws::Utils::DateTime m_createdAt{};
  bool m_datasetVersionHasBeenSet = false;
  bool m_exampleCountHasBeenSet = false;
  bool m_exampleCountByFieldHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
