/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class InitiatePointInTimeRecoveryRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API InitiatePointInTimeRecoveryRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "InitiatePointInTimeRecovery"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool that you want to recover.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  InitiatePointInTimeRecoveryRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The point in time that you want to recover your user pool to. Amazon Cognito
   * reverts changes to user data that occurred after this time. The recovery point
   * must be at least 15 minutes in the past and within the recovery period of your
   * user pool feature plan: up to 1 day in the past with the Essentials feature
   * plan, or up to 14 days in the past with the Plus feature plan.</p>
   */
  inline const Aws::Utils::DateTime& GetRestoreTimestamp() const { return m_restoreTimestamp; }
  inline bool RestoreTimestampHasBeenSet() const { return m_restoreTimestampHasBeenSet; }
  template <typename RestoreTimestampT = Aws::Utils::DateTime>
  void SetRestoreTimestamp(RestoreTimestampT&& value) {
    m_restoreTimestampHasBeenSet = true;
    m_restoreTimestamp = std::forward<RestoreTimestampT>(value);
  }
  template <typename RestoreTimestampT = Aws::Utils::DateTime>
  InitiatePointInTimeRecoveryRequest& WithRestoreTimestamp(RestoreTimestampT&& value) {
    SetRestoreTimestamp(std::forward<RestoreTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  Aws::Utils::DateTime m_restoreTimestamp{};
  bool m_userPoolIdHasBeenSet = false;
  bool m_restoreTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
