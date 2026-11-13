/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/ClientTypeType.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CognitoIdentityProvider {
namespace Model {

/**
 * <p>Represents the request to list the user pool clients.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUserPoolClientsRequest">AWS
 * API Reference</a></p>
 */
class ListUserPoolClientsRequest : public CognitoIdentityProviderRequest {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolClientsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListUserPoolClients"; }

  AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

  AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ID of the user pool where you want to list user pool clients.</p>
   */
  inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
  inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
  template <typename UserPoolIdT = Aws::String>
  void SetUserPoolId(UserPoolIdT&& value) {
    m_userPoolIdHasBeenSet = true;
    m_userPoolId = std::forward<UserPoolIdT>(value);
  }
  template <typename UserPoolIdT = Aws::String>
  ListUserPoolClientsRequest& WithUserPoolId(UserPoolIdT&& value) {
    SetUserPoolId(std::forward<UserPoolIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of app clients that you want Amazon Cognito to return in
   * the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListUserPoolClientsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>This API operation returns a limited number of results. The pagination token
   * is an identifier that you can present in an additional API request with the same
   * parameters. When you include the pagination token, Amazon Cognito returns the
   * next set of items after the current list. Subsequent requests return a new
   * pagination token. By use of this token, you can paginate through the full list
   * of items.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUserPoolClientsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only app clients of this type. For dynamic client registration
   * (<code>DCR</code>) and other app clients, the following values are valid.</p>
   * <dl> <dt>REGULAR</dt> <dd> <p>An app client not created through dynamic client
   * registration.</p> </dd> <dt>DCR</dt> <dd> <p>An app client created through
   * dynamic client registration.</p> </dd> </dl> <p>If you omit
   * <code>ClientType</code>, the response includes app clients of all types. When
   * you set this filter, a page of results can contain fewer app clients than
   * <code>MaxResults</code>, or none, while the response still includes a
   * <code>NextToken</code>. Continue to request pages until the response has no
   * <code>NextToken</code>. The app clients in the response don't include their
   * type. To get the type of an app client, call
   * <code>DescribeUserPoolClient</code>.</p>
   */
  inline ClientTypeType GetClientType() const { return m_clientType; }
  inline bool ClientTypeHasBeenSet() const { return m_clientTypeHasBeenSet; }
  inline void SetClientType(ClientTypeType value) {
    m_clientTypeHasBeenSet = true;
    m_clientType = value;
  }
  inline ListUserPoolClientsRequest& WithClientType(ClientTypeType value) {
    SetClientType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_userPoolId;

  int m_maxResults{0};

  Aws::String m_nextToken;

  ClientTypeType m_clientType{ClientTypeType::NOT_SET};
  bool m_userPoolIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_clientTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
