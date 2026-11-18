/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>The number of entities of one type that a point-in-time recovery creates,
 * updates, and deletes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/RestorePreviewType">AWS
 * API Reference</a></p>
 */
class RestorePreviewType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API RestorePreviewType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API RestorePreviewType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API RestorePreviewType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of user pool entity that the recovery changes. Can be one of the
   * following values.</p> <dl> <dt>Users</dt> <dd> <p>User profiles, including their
   * attributes.</p> </dd> <dt>Groups</dt> <dd> <p>User pool groups.</p> </dd>
   * <dt>User MFAs</dt> <dd> <p>The MFA settings of users.</p> </dd>
   * <dt>Passkeys</dt> <dd> <p>The passkeys that users registered.</p> </dd> </dl>
   */
  inline const Aws::String& GetEntity() const { return m_entity; }
  inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
  template <typename EntityT = Aws::String>
  void SetEntity(EntityT&& value) {
    m_entityHasBeenSet = true;
    m_entity = std::forward<EntityT>(value);
  }
  template <typename EntityT = Aws::String>
  RestorePreviewType& WithEntity(EntityT&& value) {
    SetEntity(std::forward<EntityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entities of this type that the recovery creates. These entities
   * existed at the recovery point and were deleted after it.</p>
   */
  inline long long GetCreateCount() const { return m_createCount; }
  inline bool CreateCountHasBeenSet() const { return m_createCountHasBeenSet; }
  inline void SetCreateCount(long long value) {
    m_createCountHasBeenSet = true;
    m_createCount = value;
  }
  inline RestorePreviewType& WithCreateCount(long long value) {
    SetCreateCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entities of this type that the recovery reverts to their state
   * at the recovery point. These entities were modified after the recovery
   * point.</p>
   */
  inline long long GetUpdateCount() const { return m_updateCount; }
  inline bool UpdateCountHasBeenSet() const { return m_updateCountHasBeenSet; }
  inline void SetUpdateCount(long long value) {
    m_updateCountHasBeenSet = true;
    m_updateCount = value;
  }
  inline RestorePreviewType& WithUpdateCount(long long value) {
    SetUpdateCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of entities of this type that the recovery deletes. These entities
   * were created after the recovery point.</p>
   */
  inline long long GetDeleteCount() const { return m_deleteCount; }
  inline bool DeleteCountHasBeenSet() const { return m_deleteCountHasBeenSet; }
  inline void SetDeleteCount(long long value) {
    m_deleteCountHasBeenSet = true;
    m_deleteCount = value;
  }
  inline RestorePreviewType& WithDeleteCount(long long value) {
    SetDeleteCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_entity;

  long long m_createCount{0};

  long long m_updateCount{0};

  long long m_deleteCount{0};
  bool m_entityHasBeenSet = false;
  bool m_createCountHasBeenSet = false;
  bool m_updateCountHasBeenSet = false;
  bool m_deleteCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
