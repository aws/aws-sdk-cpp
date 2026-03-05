/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ProviderRole.h>
#include <aws/connecthealth/model/Specialty.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>Details for user initiating insights job</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/UserContext">AWS
 * API Reference</a></p>
 */
class UserContext {
 public:
  AWS_CONNECTHEALTH_API UserContext() = default;
  AWS_CONNECTHEALTH_API UserContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API UserContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline ProviderRole GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(ProviderRole value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline UserContext& WithRole(ProviderRole value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier of the user</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  UserContext& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline Specialty GetSpecialty() const { return m_specialty; }
  inline bool SpecialtyHasBeenSet() const { return m_specialtyHasBeenSet; }
  inline void SetSpecialty(Specialty value) {
    m_specialtyHasBeenSet = true;
    m_specialty = value;
  }
  inline UserContext& WithSpecialty(Specialty value) {
    SetSpecialty(value);
    return *this;
  }
  ///@}
 private:
  ProviderRole m_role{ProviderRole::NOT_SET};

  Aws::String m_userId;

  Specialty m_specialty{Specialty::NOT_SET};
  bool m_roleHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_specialtyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
