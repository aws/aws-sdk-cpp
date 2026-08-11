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
 * <p>Contains detailed information about the IAM Identity Center configuration for
 * an application.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-2018-05-10/IdentityCenterDetails">AWS
 * API Reference</a></p>
 */
class IdentityCenterDetails {
 public:
  AWS_ACCOUNTACCESS_API IdentityCenterDetails() = default;
  AWS_ACCOUNTACCESS_API IdentityCenterDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESS_API IdentityCenterDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  IdentityCenterDetails& WithInstanceArn(InstanceArnT&& value) {
    SetInstanceArn(std::forward<InstanceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM Identity Center application created for this account
   * access manager application.</p>
   */
  inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
  inline bool ApplicationArnHasBeenSet() const { return m_applicationArnHasBeenSet; }
  template <typename ApplicationArnT = Aws::String>
  void SetApplicationArn(ApplicationArnT&& value) {
    m_applicationArnHasBeenSet = true;
    m_applicationArn = std::forward<ApplicationArnT>(value);
  }
  template <typename ApplicationArnT = Aws::String>
  IdentityCenterDetails& WithApplicationArn(ApplicationArnT&& value) {
    SetApplicationArn(std::forward<ApplicationArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_instanceArn;

  Aws::String m_applicationArn;
  bool m_instanceArnHasBeenSet = false;
  bool m_applicationArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccess
}  // namespace Aws
