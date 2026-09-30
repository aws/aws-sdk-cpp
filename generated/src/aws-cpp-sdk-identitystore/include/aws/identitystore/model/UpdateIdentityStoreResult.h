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
class UpdateIdentityStoreResult {
 public:
  AWS_IDENTITYSTORE_API UpdateIdentityStoreResult() = default;
  AWS_IDENTITYSTORE_API UpdateIdentityStoreResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IDENTITYSTORE_API UpdateIdentityStoreResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
  UpdateIdentityStoreResult& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the identity store. For example,
   * <code>arn:aws:identitystore::111122223333:identitystore/d-1234567890</code>.</p>
   */
  inline const Aws::String& GetIdentityStoreArn() const { return m_identityStoreArn; }
  template <typename IdentityStoreArnT = Aws::String>
  void SetIdentityStoreArn(IdentityStoreArnT&& value) {
    m_identityStoreArnHasBeenSet = true;
    m_identityStoreArn = std::forward<IdentityStoreArnT>(value);
  }
  template <typename IdentityStoreArnT = Aws::String>
  UpdateIdentityStoreResult& WithIdentityStoreArn(IdentityStoreArnT&& value) {
    SetIdentityStoreArn(std::forward<IdentityStoreArnT>(value));
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
  UpdateIdentityStoreResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_identityStoreId;

  Aws::String m_identityStoreArn;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_identityStoreArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
