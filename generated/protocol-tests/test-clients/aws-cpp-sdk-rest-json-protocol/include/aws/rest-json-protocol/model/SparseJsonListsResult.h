/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/Optional.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class SparseJsonListsResult {
 public:
  AWS_RESTJSONPROTOCOL_API SparseJsonListsResult() = default;
  AWS_RESTJSONPROTOCOL_API SparseJsonListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API SparseJsonListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::Vector<Aws::Crt::Optional<Aws::String>>& GetSparseStringList() const { return m_sparseStringList; }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  void SetSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList = std::forward<SparseStringListT>(value);
  }
  template <typename SparseStringListT = Aws::Vector<Aws::Crt::Optional<Aws::String>>>
  SparseJsonListsResult& WithSparseStringList(SparseStringListT&& value) {
    SetSparseStringList(std::forward<SparseStringListT>(value));
    return *this;
  }
  template <typename SparseStringListT = Aws::String>
  SparseJsonListsResult& AddSparseStringList(SparseStringListT&& value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.emplace_back(std::forward<SparseStringListT>(value));
    return *this;
  }
  inline SparseJsonListsResult& AddSparseStringList(Aws::Crt::Optional<Aws::String> value) {
    m_sparseStringListHasBeenSet = true;
    m_sparseStringList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Crt::Optional<int>>& GetSparseShortList() const { return m_sparseShortList; }
  template <typename SparseShortListT = Aws::Vector<Aws::Crt::Optional<int>>>
  void SetSparseShortList(SparseShortListT&& value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList = std::forward<SparseShortListT>(value);
  }
  template <typename SparseShortListT = Aws::Vector<Aws::Crt::Optional<int>>>
  SparseJsonListsResult& WithSparseShortList(SparseShortListT&& value) {
    SetSparseShortList(std::forward<SparseShortListT>(value));
    return *this;
  }
  inline SparseJsonListsResult& AddSparseShortList(int value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList.push_back(value);
    return *this;
  }
  inline SparseJsonListsResult& AddSparseShortList(Aws::Crt::Optional<int> value) {
    m_sparseShortListHasBeenSet = true;
    m_sparseShortList.push_back(value);
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
  SparseJsonListsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::Crt::Optional<Aws::String>> m_sparseStringList;

  Aws::Vector<Aws::Crt::Optional<int>> m_sparseShortList;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_sparseStringListHasBeenSet = false;
  bool m_sparseShortListHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
