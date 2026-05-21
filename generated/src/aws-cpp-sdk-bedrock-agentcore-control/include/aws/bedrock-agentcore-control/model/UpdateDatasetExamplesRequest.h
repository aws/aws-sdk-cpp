/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class UpdateDatasetExamplesRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API UpdateDatasetExamplesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateDatasetExamples"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

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
  UpdateDatasetExamplesRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
    return *this;
  }
  ///@}

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
  UpdateDatasetExamplesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Examples to update. Each element is a JSON object containing a required
   * <code>exampleId</code> string field identifying the existing example, plus the
   * replacement fields. The <code>exampleId</code> is extracted and removed before
   * persistence; the remaining document is validated against the dataset's
   * schemaType. Max 1000 examples per call. Total request body must not exceed 5
   * MB.</p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetExamples() const { return m_examples; }
  inline bool ExamplesHasBeenSet() const { return m_examplesHasBeenSet; }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  void SetExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples = std::forward<ExamplesT>(value);
  }
  template <typename ExamplesT = Aws::Vector<Aws::Utils::Document>>
  UpdateDatasetExamplesRequest& WithExamples(ExamplesT&& value) {
    SetExamples(std::forward<ExamplesT>(value));
    return *this;
  }
  template <typename ExamplesT = Aws::Utils::Document>
  UpdateDatasetExamplesRequest& AddExamples(ExamplesT&& value) {
    m_examplesHasBeenSet = true;
    m_examples.emplace_back(std::forward<ExamplesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_datasetId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::Vector<Aws::Utils::Document> m_examples;
  bool m_datasetIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_examplesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
