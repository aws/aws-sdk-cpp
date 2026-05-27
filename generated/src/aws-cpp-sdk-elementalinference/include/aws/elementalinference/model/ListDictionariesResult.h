/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/DictionarySummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {
class ListDictionariesResult {
 public:
  AWS_ELEMENTALINFERENCE_API ListDictionariesResult() = default;
  AWS_ELEMENTALINFERENCE_API ListDictionariesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ELEMENTALINFERENCE_API ListDictionariesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of DictionarySummary objects.</p>
   */
  inline const Aws::Vector<DictionarySummary>& GetDictionaries() const { return m_dictionaries; }
  template <typename DictionariesT = Aws::Vector<DictionarySummary>>
  void SetDictionaries(DictionariesT&& value) {
    m_dictionariesHasBeenSet = true;
    m_dictionaries = std::forward<DictionariesT>(value);
  }
  template <typename DictionariesT = Aws::Vector<DictionarySummary>>
  ListDictionariesResult& WithDictionaries(DictionariesT&& value) {
    SetDictionaries(std::forward<DictionariesT>(value));
    return *this;
  }
  template <typename DictionariesT = DictionarySummary>
  ListDictionariesResult& AddDictionaries(DictionariesT&& value) {
    m_dictionariesHasBeenSet = true;
    m_dictionaries.emplace_back(std::forward<DictionariesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next batch of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListDictionariesResult& WithNextToken(NextTokenT&& value) {
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
  ListDictionariesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DictionarySummary> m_dictionaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dictionariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
