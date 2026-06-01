/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolReplicaType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace CognitoIdentityProvider {
namespace Model {
class ListUserPoolReplicasResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolReplicasResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolReplicasResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API ListUserPoolReplicasResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of user pool replicas, including information about their status, role,
   * and Region.</p>
   */
  inline const Aws::Vector<UserPoolReplicaType>& GetUserPoolReplicas() const { return m_userPoolReplicas; }
  template <typename UserPoolReplicasT = Aws::Vector<UserPoolReplicaType>>
  void SetUserPoolReplicas(UserPoolReplicasT&& value) {
    m_userPoolReplicasHasBeenSet = true;
    m_userPoolReplicas = std::forward<UserPoolReplicasT>(value);
  }
  template <typename UserPoolReplicasT = Aws::Vector<UserPoolReplicaType>>
  ListUserPoolReplicasResult& WithUserPoolReplicas(UserPoolReplicasT&& value) {
    SetUserPoolReplicas(std::forward<UserPoolReplicasT>(value));
    return *this;
  }
  template <typename UserPoolReplicasT = UserPoolReplicaType>
  ListUserPoolReplicasResult& AddUserPoolReplicas(UserPoolReplicasT&& value) {
    m_userPoolReplicasHasBeenSet = true;
    m_userPoolReplicas.emplace_back(std::forward<UserPoolReplicasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for retrieving the next page of results. If this value is
   * null, there are no more results to retrieve.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListUserPoolReplicasResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListUserPoolReplicasResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<UserPoolReplicaType> m_userPoolReplicas;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userPoolReplicasHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
