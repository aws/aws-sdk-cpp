/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access/AccountAccess_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccess {
namespace Model {

/**
 * <p>Specifies the IAM Identity Center instance to use as the identity source for
 * an application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/IdentityCenter">AWS
 * API Reference</a></p>
 */
class IdentityCenter {
 public:
  AWS_ACCOUNTACCESS_API IdentityCenter() = default;
  AWS_ACCOUNTACCESS_API IdentityCenter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API IdentityCenter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the IAM Identity Center instance.</p>
   */
  inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
  inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
  template <typename InstanceArnT = Aws::String>
  void SetInstanceArn(InstanceArnT&& value) {
    m_instanceArnHasBeenSet = true;
    m_instanceArn = std::forward<InstanceArnT>(value);
  }
  template <typename InstanceArnT = Aws::String>
  IdentityCenter& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceArn;
  bool m_instanceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
