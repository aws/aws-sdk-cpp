/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/model/IncludedData.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace BedrockAgent {
namespace Model {

/**
 */
class GetFlowRequest : public BedrockAgentRequest {
 public:
  AWS_BEDROCKAGENT_API GetFlowRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetFlow"; }

  AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier of the flow.</p>
   */
  inline const Aws::String& GetFlowIdentifier() const { return m_flowIdentifier; }
  inline bool FlowIdentifierHasBeenSet() const { return m_flowIdentifierHasBeenSet; }
  template <typename FlowIdentifierT = Aws::String>
  void SetFlowIdentifier(FlowIdentifierT&& value) {
    m_flowIdentifierHasBeenSet = true;
    m_flowIdentifier = std::forward<FlowIdentifierT>(value);
  }
  template <typename FlowIdentifierT = Aws::String>
  GetFlowRequest& WithFlowIdentifier(FlowIdentifierT&& value) {
    SetFlowIdentifier(std::forward<FlowIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Controls the scope of data returned. Set to <code>METADATA_ONLY</code> to
   * return only resource metadata. Set to <code>ALL_DATA</code> or omit this field
   * to return the full response.</p>
   */
  inline IncludedData GetIncludedData() const { return m_includedData; }
  inline bool IncludedDataHasBeenSet() const { return m_includedDataHasBeenSet; }
  inline void SetIncludedData(IncludedData value) {
    m_includedDataHasBeenSet = true;
    m_includedData = value;
  }
  inline GetFlowRequest& WithIncludedData(IncludedData value) {
    SetIncludedData(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_flowIdentifier;

  IncludedData m_includedData{IncludedData::NOT_SET};
  bool m_flowIdentifierHasBeenSet = false;
  bool m_includedDataHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgent
}  // namespace Aws
