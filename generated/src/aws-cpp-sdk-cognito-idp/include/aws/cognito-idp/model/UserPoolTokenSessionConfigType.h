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
 * <p>The pool-wide token session settings for a user pool.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/UserPoolTokenSessionConfigType">AWS
 * API Reference</a></p>
 */
class UserPoolTokenSessionConfigType {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolTokenSessionConfigType() = default;
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolTokenSessionConfigType(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API UserPoolTokenSessionConfigType& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_COGNITOIDENTITYPROVIDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum number of active token sessions that a user can have across the
   * user pool. The minimum value is <code>1</code> and the maximum value is
   * <code>100</code>. The default is <code>20</code>. When a user reaches this
   * limit, the next successful authentication automatically evicts that user's least
   * recently used token session before it creates the new session. Lowering this
   * value doesn't evict existing sessions on its own; the user is brought back
   * within the limit on their next sign-in.</p>
   */
  inline int GetMaxPerUser() const { return m_maxPerUser; }
  inline bool MaxPerUserHasBeenSet() const { return m_maxPerUserHasBeenSet; }
  inline void SetMaxPerUser(int value) {
    m_maxPerUserHasBeenSet = true;
    m_maxPerUser = value;
  }
  inline UserPoolTokenSessionConfigType& WithMaxPerUser(int value) {
    SetMaxPerUser(value);
    return *this;
  }
  ///@}
 private:
  int m_maxPerUser{0};
  bool m_maxPerUserHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
