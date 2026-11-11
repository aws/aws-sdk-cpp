/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 */
class ListUserSessionsRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListUserSessionsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListUserSessions"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A valid access token that Amazon Cognito issued to the user whose sessions
   * you want to list. Amazon Cognito derives the user pool and username from this
   * token.</p>
   */
  inline const Aws::String& GetAccessToken() const { return m_accessToken; }
  inline bool AccessTokenHasBeenSet() const { return m_accessTokenHasBeenSet; }
  template <typename AccessTokenT = Aws::String>
  void SetAccessToken(AccessTokenT&& value) {
    m_accessTokenHasBeenSet = true;
    m_accessToken = std::forward<AccessTokenT>(value);
  }
  template <typename AccessTokenT = Aws::String>
  ListUserSessionsRequest& WithAccessToken(AccessTokenT&& value) {
    SetAccessToken(std::forward<AccessTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token that Amazon Cognito returned in a previous response. Use
   * this value to retrieve the next page of results if a <code>NextToken</code> was
   * included in a prior response.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUserSessionsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accessToken;

  Aws::String m_nextToken;
  bool m_accessTokenHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
