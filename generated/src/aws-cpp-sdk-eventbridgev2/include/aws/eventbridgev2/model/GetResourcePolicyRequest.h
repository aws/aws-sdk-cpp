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
class GetResourcePolicyRequest : public EventBridgeV2Request {
 public:
  AWS_EVENTBRIDGEV2_API GetResourcePolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetResourcePolicy"; }

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
  GetResourcePolicyRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Which named policy to read. Defaults to &quot;default&quot; when omitted (a
   * read AWS Resource Access Manager makes on the owner's behalf resolves to
   * &quot;AWS_RAM&quot; instead). Unlike writing, neither name is reserved on a
   * read: the bus owner can read both. There is no fallback between the two, so a
   * bus shared only through Resource Access Manager fails with
   * ResourceNotFoundException until &quot;AWS_RAM&quot; is named explicitly. A
   * well-formed name that is neither of the two fails with
   * InvalidInputException.</p>
   */
  inline const Aws::String& GetPolicyName() const { return m_policyName; }
  inline bool PolicyNameHasBeenSet() const { return m_policyNameHasBeenSet; }
  template <typename PolicyNameT = Aws::String>
  void SetPolicyName(PolicyNameT&& value) {
    m_policyNameHasBeenSet = true;
    m_policyName = std::forward<PolicyNameT>(value);
  }
  template <typename PolicyNameT = Aws::String>
  GetResourcePolicyRequest& WithPolicyName(PolicyNameT&& value) {
    SetPolicyName(std::forward<PolicyNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  Aws::String m_policyName;
  bool m_resourceArnHasBeenSet = false;
  bool m_policyNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace EventBridgeV2
}  // namespace Aws
