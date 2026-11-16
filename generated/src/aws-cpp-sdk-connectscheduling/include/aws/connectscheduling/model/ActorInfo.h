/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectScheduling {
namespace Model {

/**
 * <p>Information about the identity that performed an action on a time off
 * request: a Connect Customer user or an IAM or AWS STS identity. Exactly one
 * member is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/ActorInfo">AWS
 * API Reference</a></p>
 */
class ActorInfo {
 public:
  AWS_CONNECTSCHEDULING_API ActorInfo() = default;
  AWS_CONNECTSCHEDULING_API ActorInfo(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API ActorInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Connect Customer user who performed the action.</p>
   */
  inline const Aws::String& GetConnectUserArn() const { return m_connectUserArn; }
  inline bool ConnectUserArnHasBeenSet() const { return m_connectUserArnHasBeenSet; }
  template <typename ConnectUserArnT = Aws::String>
  void SetConnectUserArn(ConnectUserArnT&& value) {
    m_connectUserArnHasBeenSet = true;
    m_connectUserArn = std::forward<ConnectUserArnT>(value);
  }
  template <typename ConnectUserArnT = Aws::String>
  ActorInfo& WithConnectUserArn(ConnectUserArnT&& value) {
    SetConnectUserArn(std::forward<ConnectUserArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM or AWS STS ARN of the identity that performed the action. Present
   * when that identity is not a Connect Customer user.</p>
   */
  inline const Aws::String& GetAWSIdentityArn() const { return m_aWSIdentityArn; }
  inline bool AWSIdentityArnHasBeenSet() const { return m_aWSIdentityArnHasBeenSet; }
  template <typename AWSIdentityArnT = Aws::String>
  void SetAWSIdentityArn(AWSIdentityArnT&& value) {
    m_aWSIdentityArnHasBeenSet = true;
    m_aWSIdentityArn = std::forward<AWSIdentityArnT>(value);
  }
  template <typename AWSIdentityArnT = Aws::String>
  ActorInfo& WithAWSIdentityArn(AWSIdentityArnT&& value) {
    SetAWSIdentityArn(std::forward<AWSIdentityArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_connectUserArn;

  Aws::String m_aWSIdentityArn;
  bool m_connectUserArnHasBeenSet = false;
  bool m_aWSIdentityArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
