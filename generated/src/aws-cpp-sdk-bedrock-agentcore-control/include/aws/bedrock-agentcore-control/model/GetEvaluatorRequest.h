/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/IncludedData.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgentCoreControl {
namespace Model {

/**
 */
class GetEvaluatorRequest : public BedrockAgentCoreControlRequest {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API GetEvaluatorRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetEvaluator"; }

  AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORECONTROL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p> The unique identifier of the evaluator to retrieve. Can be a built-in
   * evaluator ID (e.g., Builtin.Helpfulness) or a custom evaluator ID. </p>
   */
  inline const Aws::String& GetEvaluatorId() const { return m_evaluatorId; }
  inline bool EvaluatorIdHasBeenSet() const { return m_evaluatorIdHasBeenSet; }
  template <typename EvaluatorIdT = Aws::String>
  void SetEvaluatorId(EvaluatorIdT&& value) {
    m_evaluatorIdHasBeenSet = true;
    m_evaluatorId = std::forward<EvaluatorIdT>(value);
  }
  template <typename EvaluatorIdT = Aws::String>
  GetEvaluatorRequest& WithEvaluatorId(EvaluatorIdT&& value) {
    SetEvaluatorId(std::forward<EvaluatorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Controls which data is returned in the response. <code>ALL_DATA</code>
   * (default) returns the full evaluator including decrypted instructions and rating
   * scale. For evaluators encrypted with a customer managed KMS key, this requires
   * <code>kms:Decrypt</code> permission on the key. <code>METADATA_ONLY</code>
   * returns evaluator metadata and model configuration without instructions or
   * rating scale, and does not require any KMS permissions. </p>
   */
  inline IncludedData GetIncludedData() const { return m_includedData; }
  inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
  inline void SetIncludedData(IncludedData value) {
    m_includedDataHasBeenSet = true;
    m_includedData = value;
  }
  inline GetEvaluatorRequest& WithIncludedData(IncludedData value) {
    SetIncludedData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluatorId;

  IncludedData m_includedData{IncludedData::NOT_SET};
  bool m_evaluatorIdHasBeenSet = false;
  bool m_includedDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
