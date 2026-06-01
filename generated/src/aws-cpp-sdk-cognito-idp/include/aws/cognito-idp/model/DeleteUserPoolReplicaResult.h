/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/model/UserPoolReplicaType.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class DeleteUserPoolReplicaResult {
 public:
  AWS_COGNITOIDENTITYPROVIDER_API DeleteUserPoolReplicaResult() = default;
  AWS_COGNITOIDENTITYPROVIDER_API DeleteUserPoolReplicaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_COGNITOIDENTITYPROVIDER_API DeleteUserPoolReplicaResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the deleted user pool replica.</p>
   */
  inline const UserPoolReplicaType& GetUserPoolReplica() const { return m_userPoolReplica; }
  template <typename UserPoolReplicaT = UserPoolReplicaType>
  void SetUserPoolReplica(UserPoolReplicaT&& value) {
    m_userPoolReplicaHasBeenSet = true;
    m_userPoolReplica = std::forward<UserPoolReplicaT>(value);
  }
  template <typename UserPoolReplicaT = UserPoolReplicaType>
  DeleteUserPoolReplicaResult& WithUserPoolReplica(UserPoolReplicaT&& value) {
    SetUserPoolReplica(std::forward<UserPoolReplicaT>(value));
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
  DeleteUserPoolReplicaResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  UserPoolReplicaType m_userPoolReplica;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_userPoolReplicaHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CognitoIdentityProvider
}  // namespace Aws
