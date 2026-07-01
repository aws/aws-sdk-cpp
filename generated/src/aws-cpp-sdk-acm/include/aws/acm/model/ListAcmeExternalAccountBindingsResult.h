/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AcmeExternalAccountBindingSummary.h>
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
namespace ACM {
namespace Model {
class ListAcmeExternalAccountBindingsResult {
 public:
  AWS_ACM_API ListAcmeExternalAccountBindingsResult() = default;
  AWS_ACM_API ListAcmeExternalAccountBindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ACM_API ListAcmeExternalAccountBindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of external account bindings.</p>
   */
  inline const Aws::Vector<AcmeExternalAccountBindingSummary>& GetExternalAccountBindings() const { return m_externalAccountBindings; }
  template <typename ExternalAccountBindingsT = Aws::Vector<AcmeExternalAccountBindingSummary>>
  void SetExternalAccountBindings(ExternalAccountBindingsT&& value) {
    m_externalAccountBindingsHasBeenSet = true;
    m_externalAccountBindings = std::forward<ExternalAccountBindingsT>(value);
  }
  template <typename ExternalAccountBindingsT = Aws::Vector<AcmeExternalAccountBindingSummary>>
  ListAcmeExternalAccountBindingsResult& WithExternalAccountBindings(ExternalAccountBindingsT&& value) {
    SetExternalAccountBindings(std::forward<ExternalAccountBindingsT>(value));
    return *this;
  }
  template <typename ExternalAccountBindingsT = AcmeExternalAccountBindingSummary>
  ListAcmeExternalAccountBindingsResult& AddExternalAccountBindings(ExternalAccountBindingsT&& value) {
    m_externalAccountBindingsHasBeenSet = true;
    m_externalAccountBindings.emplace_back(std::forward<ExternalAccountBindingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token for pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAcmeExternalAccountBindingsResult& WithNextToken(NextTokenT&& value) {
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
  ListAcmeExternalAccountBindingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AcmeExternalAccountBindingSummary> m_externalAccountBindings;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_externalAccountBindingsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
