/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IdentityStore {
namespace Model {
class GetUserIdResult {
 public:
  AWS_IDENTITYSTORE_API GetUserIdResult() = default;
  AWS_IDENTITYSTORE_API GetUserIdResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IDENTITYSTORE_API GetUserIdResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  GetUserIdResult& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a user in the identity store.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  GetUserIdResult& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the user in the identity store. For
   * example,
   * <code>arn:aws:identitystore:::user/a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
   */
  inline const Aws::String& GetUserArn() const { return m_userArn; }
  template <typename UserArnT = Aws::String>
  void SetUserArn(UserArnT&& value) {
    m_userArnHasBeenSet = true;
    m_userArn = std::forward<UserArnT>(value);
  }
  template <typename UserArnT = Aws::String>
  GetUserIdResult& WithUserArn(UserArnT&& value) {
    SetUserArn(std::forward<UserArnT>(value));
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
  GetUserIdResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_identityStoreId;

  Aws::String m_userId;

  Aws::String m_userArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_userArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
