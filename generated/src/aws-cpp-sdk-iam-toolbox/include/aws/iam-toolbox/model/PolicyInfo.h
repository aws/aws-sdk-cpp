/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>
#include <aws/iam-toolbox/model/AttachedTo.h>
#include <aws/iam-toolbox/model/PolicyType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {

/**
 * <p>Contains details about a policy evaluated during authorization. Details
 * include the policy type, whether it is inline or managed, a URI that identifies
 * it, and the entities it is attached to.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/PolicyInfo">AWS
 * API Reference</a></p>
 */
class PolicyInfo {
 public:
  AWS_IAMTOOLBOX_API PolicyInfo() = default;
  AWS_IAMTOOLBOX_API PolicyInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API PolicyInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of policy. Valid values:</p> <ul> <li> <p>
   * <code>IDENTITY_BASED_POLICY</code> - An identity-based policy attached to an IAM
   * user, group, or role.</p> </li> <li> <p> <code>PERMISSIONS_BOUNDARY</code> - A
   * permissions boundary for an IAM entity.</p> </li> <li> <p>
   * <code>RESOURCE_BASED_POLICY</code> - A resource-based policy attached to a
   * resource.</p> </li> <li> <p> <code>RESOURCE_CONTROL_POLICY</code> - A resource
   * control policy (RCP) in AWS Organizations.</p> </li> <li> <p>
   * <code>SERVICE_CONTROL_POLICY</code> - A service control policy (SCP) in AWS
   * Organizations.</p> </li> <li> <p> <code>SESSION_POLICY</code> - A session policy
   * passed during role assumption or federation.</p> </li> <li> <p>
   * <code>VPC_ENDPOINT_POLICY</code> - A VPC endpoint policy.</p> </li> </ul>
   */
  inline PolicyType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(PolicyType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline PolicyInfo& WithType(PolicyType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this is an inline policy (<code>true</code>) or a managed
   * policy (<code>false</code>).</p>
   */
  inline bool GetInline() const { return m_inline; }
  inline bool InlineHasBeenSet() const { return m_inlineHasBeenSet; }
  inline void SetInline(bool value) {
    m_inlineHasBeenSet = true;
    m_inline = value;
  }
  inline PolicyInfo& WithInline(bool value) {
    SetInline(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A URI that identifies the policy. Use this URI to cross-reference the policy
   * with the matching policies in each evaluation. The value depends on the policy
   * type:</p> <ul> <li> <p>For managed policies, this is the policy ARN.</p> </li>
   * <li> <p>For inline policies, which have no ARN, this is an opaque
   * identifier.</p> </li> </ul>
   */
  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  PolicyInfo& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entities that the policy is attached to. For identity, session, and
   * resource-based policies, this is typically a single entity. For organization
   * control policies (SCPs and RCPs), it can be multiple entities at different
   * levels of the organization hierarchy.</p>
   */
  inline const Aws::Vector<AttachedTo>& GetAttachedTo() const { return m_attachedTo; }
  inline bool AttachedToHasBeenSet() const { return m_attachedToHasBeenSet; }
  template <typename AttachedToT = Aws::Vector<AttachedTo>>
  void SetAttachedTo(AttachedToT&& value) {
    m_attachedToHasBeenSet = true;
    m_attachedTo = std::forward<AttachedToT>(value);
  }
  template <typename AttachedToT = Aws::Vector<AttachedTo>>
  PolicyInfo& WithAttachedTo(AttachedToT&& value) {
    SetAttachedTo(std::forward<AttachedToT>(value));
    return *this;
  }
  template <typename AttachedToT = AttachedTo>
  PolicyInfo& AddAttachedTo(AttachedToT&& value) {
    m_attachedToHasBeenSet = true;
    m_attachedTo.emplace_back(std::forward<AttachedToT>(value));
    return *this;
  }
  ///@}
 private:
  PolicyType m_type{PolicyType::NOT_SET};

  bool m_inline{false};

  Aws::String m_uri;

  Aws::Vector<AttachedTo> m_attachedTo;
  bool m_typeHasBeenSet = false;
  bool m_inlineHasBeenSet = false;
  bool m_uriHasBeenSet = false;
  bool m_attachedToHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
