/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

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
 * <p>An entity that a policy is attached to, identified by its ARN.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iam-toolbox-2018-05-10/AttachedTo">AWS
 * API Reference</a></p>
 */
class AttachedTo {
 public:
  AWS_IAMTOOLBOX_API AttachedTo() = default;
  AWS_IAMTOOLBOX_API AttachedTo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API AttachedTo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IAMTOOLBOX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the entity that the policy is attached to. The ARN format depends
   * on the policy type:</p> <ul> <li> <p>For identity, session, and permissions
   * boundary policies, this is the principal ARN (for example, an IAM role or user
   * ARN).</p> </li> <li> <p>For resource-based policies, this is the resource
   * ARN.</p> </li> <li> <p>For organization control policies (SCPs and RCPs), this
   * is the AWS Organizations ARN of the account, organizational unit, or root.</p>
   * </li> </ul>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  AttachedTo& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;
  bool m_arnHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
