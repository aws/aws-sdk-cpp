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
 * <p>Identifies the dataset and the version of it that a batch evaluation
 * ran.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DatasetDetails">AWS
 * API Reference</a></p>
 */
class DatasetDetails {
 public:
  AWS_BEDROCKAGENTCORE_API DatasetDetails() = default;
  AWS_BEDROCKAGENTCORE_API DatasetDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DatasetDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  DatasetDetails& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the dataset that the batch evaluation ran. If the request
   * didn't specify a version, this is the latest published version when the batch
   * evaluation started.</p>
   */
  inline const Aws::String& GetDatasetVersion() const { return m_datasetVersion; }
  inline bool DatasetVersionHasBeenSet() const { return m_datasetVersionHasBeenSet; }
  template <typename DatasetVersionT = Aws::String>
  void SetDatasetVersion(DatasetVersionT&& value) {
    m_datasetVersionHasBeenSet = true;
    m_datasetVersion = std::forward<DatasetVersionT>(value);
  }
  template <typename DatasetVersionT = Aws::String>
  DatasetDetails& WithDatasetVersion(DatasetVersionT&& value) {
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
