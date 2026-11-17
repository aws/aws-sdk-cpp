/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Identifies the dataset and the version of it to run.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DatasetSource">AWS
 * API Reference</a></p>
 */
class DatasetSource {
 public:
  AWS_BEDROCKAGENTCORE_API DatasetSource() = default;
  AWS_BEDROCKAGENTCORE_API DatasetSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DatasetSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the dataset.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  DatasetSource& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of a published version of the dataset. You can't run the
   * <code>DRAFT</code> version. If you don't specify a version, the batch evaluation
   * uses the latest published version.</p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  inline bool DatasetVersionHasBeenSet() const { return m_datasetVersionHasBeenSet; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  DatasetSource& WithDatasetVersion(DatasetVersionT&& value) {
    SetDatasetVersion(std::forward<DatasetVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_datasetVersion;
  bool m_datasetIdHasBeenSet = false;
  bool m_datasetVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
