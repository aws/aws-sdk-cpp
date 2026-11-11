/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/IamCredentialProvider.h>
#include <aws/bedrock-agentcore-control/model/Unit.h>

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
 * <p>Authentication method for calling a remote MCP server.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessRemoteMcpOutboundAuth">AWS
 * API Reference</a></p>
 */
class HarnessRemoteMcpOutboundAuth {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessRemoteMcpOutboundAuth() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessRemoteMcpOutboundAuth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessRemoteMcpOutboundAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sign requests to the remote MCP server with Signature Version 4 (SigV4) using
   * the harness execution role. If you don't specify a Region, the harness Region is
   * used.</p>
   */
  inline const IamCredentialProvider& GetAwsIam() const { return m_awsIam; }
  inline bool AwsIamHasBeenSet() const { return m_awsIamHasBeenSet; }
  template <typename AwsIamT = IamCredentialProvider>
  void SetAwsIam(AwsIamT&& value) {
    m_awsIamHasBeenSet = true;
    m_awsIam = std::forward<AwsIamT>(value);
  }
  template <typename AwsIamT = IamCredentialProvider>
  HarnessRemoteMcpOutboundAuth& WithAwsIam(AwsIamT&& value) {
    SetAwsIam(std::forward<AwsIamT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>No authentication.</p>
   */
  inline const Unit& GetNone() const { return m_none; }
  inline bool NoneHasBeenSet() const { return m_noneHasBeenSet; }
  template <typename NoneT = Unit>
  void SetNone(NoneT&& value) {
    m_noneHasBeenSet = true;
    m_none = std::forward<NoneT>(value);
  }
  template <typename NoneT = Unit>
  HarnessRemoteMcpOutboundAuth& WithNone(NoneT&& value) {
    SetNone(std::forward<NoneT>(value));
    return *this;
  }
  ///@}
 private:
  IamCredentialProvider m_awsIam;

  Unit m_none;
  bool m_awsIamHasBeenSet = false;
  bool m_noneHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
