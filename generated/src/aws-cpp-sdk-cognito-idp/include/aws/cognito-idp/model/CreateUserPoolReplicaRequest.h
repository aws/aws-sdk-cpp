/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class CreateUserPoolReplicaRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API CreateUserPoolReplicaRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateUserPoolReplica"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool to replicate.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  CreateUserPoolReplicaRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services Region where you want to create the replica user
   * pool.</p>
   */
  inline const Aws::String& GetRegionName() const { return m_regionName; }
  inline bool RegionNameHasBeenSet() const { return m_regionNameHasBeenSet; }
  template <typename RegionNameT = Aws::String>
  void SetRegionName(RegionNameT&& value) {
    m_regionNameHasBeenSet = true;
    m_regionName = std::forward<RegionNameT>(value);
  }
  template <typename RegionNameT = Aws::String>
  CreateUserPoolReplicaRequest& WithRegionName(RegionNameT&& value) {
    SetRegionName(std::forward<RegionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tags to assign to the replica user pool. Each tag consists of a key
   * and an optional value, both of which you define. You can maintain tags
   * independently on replica user pools.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetUserPoolTags() const { return m_userPoolTags; }
  inline bool UserPoolTagsHasBeenSet() const { return m_userPoolTagsHasBeenSet; }
  template <typename UserPoolTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetUserPoolTags(UserPoolTagsT&& value) {
    m_userPoolTagsHasBeenSet = true;
    m_userPoolTags = std::forward<UserPoolTagsT>(value);
  }
  template <typename UserPoolTagsT = Aws::Map<Aws::String, Aws::String>>
  CreateUserPoolReplicaRequest& WithUserPoolTags(UserPoolTagsT&& value) {
    SetUserPoolTags(std::forward<UserPoolTagsT>(value));
    return *this;
  }
  template <typename UserPoolTagsKeyT = Aws::String, typename UserPoolTagsValueT = Aws::String>
  CreateUserPoolReplicaRequest& AddUserPoolTags(UserPoolTagsKeyT&& key, UserPoolTagsValueT&& value) {
    m_userPoolTagsHasBeenSet = true;
    m_userPoolTags.emplace(std::forward<UserPoolTagsKeyT>(key), std::forward<UserPoolTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::String m_regionName;

  Aws::Map<Aws::String, Aws::String> m_userPoolTags;
  bool m_userPoolIdHasBeenSet = false;
  bool m_regionNameHasBeenSet = false;
  bool m_userPoolTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
