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
class DeleteResourcePolicyRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API DeleteResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteResourcePolicy"; }

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
  DeleteResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which named policy to delete. Defaults to &quot;default&quot; when omitted (a
   * delete AWS Resource Access Manager makes on the owner's behalf resolves to
   * &quot;AWS_RAM&quot; instead). The two writers are exclusive in both directions —
   * only Resource Access Manager can delete &quot;AWS_RAM&quot;, and only the bus
   * owner can delete &quot;default&quot; — so naming the other party's policy fails
   * with AccessDeniedException. A well-formed name that is neither of the two fails
   * with InvalidInputException.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  DeleteResourcePolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The delete succeeds only if the named policy's current revision ID matches
   * this value; if it differs or the policy does not exist, the operation fails with
   * ConflictException. The &quot;NO_POLICY&quot; sentinel is not valid here. When
   * omitted, deleting an absent policy is an idempotent success. Supplying this
   * value makes the delete non-idempotent: once it succeeds the expected revision no
   * longer exists, so retrying an unanswered request fails with ConflictException
   * even though the policy was deleted. To establish the outcome, read the policy
   * back: ResourceNotFoundException means the delete took effect.</p>
   */
  inline const Aws::String& GetExpectedRevisionId() const { return m_expectedRevisionId; }
  inline bool ExpectedRevisionIdHasBeenSet() const { return m_expectedRevisionIdHasBeenSet; }
  template <typename ExpectedRevisionIdT = Aws::String>
  void SetExpectedRevisionId(ExpectedRevisionIdT&& value) {
    m_expectedRevisionIdHasBeenSet = true;
    m_expectedRevisionId = std::forward<ExpectedRevisionIdT>(value);
  }
  template <typename ExpectedRevisionIdT = Aws::String>
  DeleteResourcePolicyRequest& WithExpectedRevisionId(ExpectedRevisionIdT&& value) {
    SetExpectedRevisionId(std::forward<ExpectedRevisionIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_policyName;

  Aws::String m_expectedRevisionId;
  bool m_resourceArnHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
  bool m_expectedRevisionIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
