/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class GetDatasetGenerationRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API GetDatasetGenerationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDatasetGeneration"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

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
  GetDatasetGenerationRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the dataset generation.</p>
   */
  inline const Aws::String& GetGenerationId() const { return m_generationId; }
  inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
  template <typename GenerationIdT = Aws::String>
  void SetGenerationId(GenerationIdT&& value) {
    m_generationIdHasBeenSet = true;
    m_generationId = std::forward<GenerationIdT>(value);
  }
  template <typename GenerationIdT = Aws::String>
  GetDatasetGenerationRequest& WithGenerationId(GenerationIdT&& value) {
    SetGenerationId(std::forward<GenerationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_generationId;
  bool m_datasetIdHasBeenSet = false;
  bool m_generationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
