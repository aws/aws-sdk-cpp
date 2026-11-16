/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam-toolbox/IAMToolbox_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IAMToolbox {
namespace Model {
class GetRequestAuthorizationPolicyResult {
 public:
  AWS_IAMTOOLBOX_API GetRequestAuthorizationPolicyResult() = default;
  AWS_IAMTOOLBOX_API GetRequestAuthorizationPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IAMTOOLBOX_API GetRequestAuthorizationPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The policy document evaluated for the denied request, returned as a JSON
   * object.</p> <p>For some AWS services and policy types, this document includes
   * all actions relevant to the service that processed the denied request, but might
   * omit actions for other services.</p>
   */
  inline Aws::Utils::DocumentView GetPolicyDocument() const { return m_policyDocument; }
  template <typename PolicyDocumentT = Aws::Utils::Document>
  void SetPolicyDocument(PolicyDocumentT&& value) {
    m_policyDocumentHasBeenSet = true;
    m_policyDocument = std::forward<PolicyDocumentT>(value);
  }
  template <typename PolicyDocumentT = Aws::Utils::Document>
  GetRequestAuthorizationPolicyResult& WithPolicyDocument(PolicyDocumentT&& value) {
    SetPolicyDocument(std::forward<PolicyDocumentT>(value));
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
  GetRequestAuthorizationPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::Document m_policyDocument;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyDocumentHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IAMToolbox
}  // namespace Aws
