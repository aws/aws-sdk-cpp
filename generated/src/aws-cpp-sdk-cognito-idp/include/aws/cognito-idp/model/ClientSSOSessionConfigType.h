/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>

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
 * <p>The SSO session settings for a user pool app client.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ClientSSOSessionConfigType">AWS
 * API Reference</a></p>
 */
class ClientSSOSessionConfigType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ClientSSOSessionConfigType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ClientSSOSessionConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API ClientSSOSessionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum amount of time, in minutes, that this app client silently reuses
   * an existing SSO session, returning a new set of tokens without requiring the
   * user to re-authenticate, measured from the user's last fresh authentication. The
   * minimum value is <code>0</code> and the maximum value is <code>129600</code> (90
   * days). The default is <code>60</code>. A value of <code>0</code> means that this
   * app client never silently reuses the SSO session and always re-authenticates the
   * user. The SSO session record and its cookie are still created regardless of this
   * value, and other app clients in the same user pool can still reuse the
   * session.</p>
   */
  inline int GetMaxValidityMinutes() const { return m_maxValidityMinutes; }
  inline bool MaxValidityMinutesHasBeenSet() const { return m_maxValidityMinutesHasBeenSet; }
  inline void SetMaxValidityMinutes(int value) {
    m_maxValidityMinutesHasBeenSet = true;
    m_maxValidityMinutes = value;
  }
  inline ClientSSOSessionConfigType& WithMaxValidityMinutes(int value) {
    SetMaxValidityMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_maxValidityMinutes{0};
  bool m_maxValidityMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
