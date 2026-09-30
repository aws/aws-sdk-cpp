/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eventbridgev2/EventBridgeV2Request.h>
#include <aws/eventbridgev2/EventBridgeV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace EventBridgeV2 {
namespace Model {

/**
 */
class PutResourcePolicyRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API PutResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutResourcePolicy"; }

  AWS_EVENTBRIDGEV2_API Aws::String SerializePayload() const override;

  AWS_EVENTBRIDGEV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_EVENTBRIDGEV2_API EndpointParameters GetEndpointContextParams() const override;

  ///@{

  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  PutResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyDocument() const { return m_policyDocument; }
  inline bool PolicyDocumentHasBeenSet() const { return m_policyDocumentHasBeenSet; }
  template <typename PolicyDocumentT = Aws::String>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::String>
  PutResourcePolicyRequest& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which named policy to write. Defaults to &quot;default&quot;, the
   * customer-managed policy, when omitted (a write AWS Resource Access Manager makes
   * on the owner's behalf resolves to &quot;AWS_RAM&quot; instead). The two writers
   * are exclusive in both directions — only Resource Access Manager can write
   * &quot;AWS_RAM&quot;, and only the bus owner can write &quot;default&quot; — so
   * naming the other party's policy fails with AccessDeniedException. A well-formed
   * name that is neither of the two fails with InvalidInputException.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  PutResourcePolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The write succeeds only if the named policy's current revision ID matches
   * this value; a policy that does not exist yet matches only the sentinel
   * &quot;NO_POLICY&quot; (create-only). On mismatch the operation fails with
   * ConflictException. When omitted, the write is unconditional. Every attempt
   * stores a newly generated revision ID, so retrying an unanswered request can
   * conflict with the caller's own earlier attempt; read the policy back and compare
   * it with the one you intended before treating a conflict as another writer's
   * change.</p>
   */
  inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
  inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
  template <typename ExpectedRevisionIdT = Aws::String>
  void SetExpectedRevisionId(ExpectedRevisionIdT&& value) {
    m_expectedRevisionIdHasBeenSet = true;
    m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value);
  }
  template <typename ExpectedRevisionIdT = Aws::String>
  PutResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) {
    SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_policyDocument;

  Aws::String m_policyName;

  Aws::String m_expectedRevisionId;
  bool m_resourceArnHasBeenSet = false;
  bool m_policyDocumentHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_expectedRevisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
