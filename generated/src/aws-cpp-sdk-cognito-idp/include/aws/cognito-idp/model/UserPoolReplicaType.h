/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ReplicaRoleType.h>
#include <aws/cognito-idp/model/ReplicaStatusType.h>
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
 * <p>Contains information about a replica user pool, including Region, status,
 * role, and ARN.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolReplicaType">AWS
 * API Reference</a></p>
 */
class UserPoolReplicaType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolReplicaType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolReplicaType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolReplicaType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Web Services Region where the replica is located.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  UserPoolReplicaType& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the replica.</p> <dl> <dt>CREATING</dt> <dd> <p>The
   * replica is being created.</p> </dd> <dt>INACTIVE</dt> <dd> <p>The replica has
   * been created, but is not accepting requests for end-users. Administrator
   * configuration operations are supported.</p> </dd> <dt>ACTIVE</dt> <dd> <p>The
   * replica is available for both end-user and administrator operations.</p> </dd>
   * <dt>DELETING</dt> <dd> <p>The replica is being deleted.</p> </dd> </dl>
   */
  inline ReplicaStatusType GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReplicaStatusType value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UserPoolReplicaType& WithStatus(ReplicaStatusType value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The role of the user pool replica that determines which API operations are
   * enabled.</p> <dl> <dt>PRIMARY</dt> <dd> <p>The primary replica supports all end
   * user and administrator operations.</p> </dd> <dt>SECONDARY</dt> <dd> <p>The
   * secondary replica supports a limited set of end user and administrator
   * operations. Generally, only administrator operations that set configurations
   * specific to the replica, and only end-user operations that do not create or
   * change attributes of a user are supported. </p> </dd> </dl>
   */
  inline ReplicaRoleType GetRole() const { return m_role; }
  inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
  inline void SetRole(ReplicaRoleType value) {
    m_roleHasBeenSet = true;
    m_role = value;
  }
  inline UserPoolReplicaType& WithRole(ReplicaRoleType value) {
    SetRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the replica user pool.</p>
   */
  inline const Aws::String& GetUserPoolArn() const { return m_userPoolArn; }
  inline bool UserPoolArnHasBeenSet() const { return m_userPoolArnHasBeenSet; }
  template <typename UserPoolArnT = Aws::String>
  void SetUserPoolArn(UserPoolArnT&& value) {
    m_userPoolArnHasBeenSet = true;
    m_userPoolArn = std::forward<UserPoolArnT>(value);
  }
  template <typename UserPoolArnT = Aws::String>
  UserPoolReplicaType& WithUserPoolArn(UserPoolArnT&& value) {
    SetUserPoolArn(std::forward<UserPoolArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_regionName;

  ReplicaStatusType m_status{ReplicaStatusType::NOT_SET};

  ReplicaRoleType m_role{ReplicaRoleType::NOT_SET};

  Aws::String m_userPoolArn;
  bool m_regionNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_roleHasBeenSet = false;
  bool m_userPoolArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
