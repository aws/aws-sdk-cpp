/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/DocumentAclMembership.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>The access control list for a document, containing allow and deny membership
 * lists. Each list specifies conditions that determine which users and groups are
 * granted or denied access.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/DocumentAcl">AWS
 * API Reference</a></p>
 */
class DocumentAcl {
 public:
  AWS_BEDROCKAGENTRUNTIME_API DocumentAcl() = default;
  AWS_BEDROCKAGENTRUNTIME_API DocumentAcl(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API DocumentAcl& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of principals allowed access to the document.</p>
   */
  inline const DocumentAclMembership& GetAllowList() const { return m_allowList; }
  inline bool AllowListHasBeenSet() const { return m_allowListHasBeenSet; }
  template <typename AllowListT = DocumentAclMembership>
  void SetAllowList(AllowListT&& value) {
    m_allowListHasBeenSet = true;
    m_allowList = std::forward<AllowListT>(value);
  }
  template <typename AllowListT = DocumentAclMembership>
  DocumentAcl& WithAllowList(AllowListT&& value) {
    SetAllowList(std::forward<AllowListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of principals denied access to the document.</p>
   */
  inline const DocumentAclMembership& GetDenyList() const { return m_denyList; }
  inline bool DenyListHasBeenSet() const { return m_denyListHasBeenSet; }
  template <typename DenyListT = DocumentAclMembership>
  void SetDenyList(DenyListT&& value) {
    m_denyListHasBeenSet = true;
    m_denyList = std::forward<DenyListT>(value);
  }
  template <typename DenyListT = DocumentAclMembership>
  DocumentAcl& WithDenyList(DenyListT&& value) {
    SetDenyList(std::forward<DenyListT>(value));
    return *this;
  }
  ///@}
 private:
  DocumentAclMembership m_allowList;

  DocumentAclMembership m_denyList;
  bool m_allowListHasBeenSet = false;
  bool m_denyListHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
