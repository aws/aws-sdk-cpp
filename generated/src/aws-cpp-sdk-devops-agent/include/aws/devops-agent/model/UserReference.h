/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/UserType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Reference to a user in the system</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/UserReference">AWS
 * API Reference</a></p>
 */
class UserReference {
 public:
  AWS_DEVOPSAGENT_API UserReference() = default;
  AWS_DEVOPSAGENT_API UserReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API UserReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the user</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  UserReference& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of user</p>
   */
  inline UserType GetUserType() const { return m_userType; }
  inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
  inline void SetUserType(UserType value) {
    m_userTypeHasBeenSet = true;
    m_userType = value;
  }
  inline UserReference& WithUserType(UserType value) {
    SetUserType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;

  UserType m_userType{UserType::NOT_SET};
  bool m_userIdHasBeenSet = false;
  bool m_userTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
