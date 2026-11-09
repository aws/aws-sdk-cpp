/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/AssociatedCollector.h>
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
namespace Continuum {
namespace Model {
/**
 * <p>Contains one page of the Collectors associated with the requested
 * Environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/ListAssociatedCollectorsOutput">AWS
 * API Reference</a></p>
 */
class ListAssociatedCollectorsResult {
 public:
  AWS_CONTINUUM_API ListAssociatedCollectorsResult() = default;
  AWS_CONTINUUM_API ListAssociatedCollectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONTINUUM_API ListAssociatedCollectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Collectors associated with this Environment, ordered by collectorId
   * ascending. Empty when the Environment has no associations, and also when every
   * association on the page predates Continuum persisting the ARN — the page is
   * still advanced by <code>nextToken</code> in that case.</p>
   */
  inline const Aws::Vector<AssociatedCollector>& GetAssociatedCollectors() const { return m_associatedCollectors; }
  template <typename AssociatedCollectorsT = Aws::Vector<AssociatedCollector>>
  void SetAssociatedCollectors(AssociatedCollectorsT&& value) {
    m_associatedCollectorsHasBeenSet = true;
    m_associatedCollectors = std::forward<AssociatedCollectorsT>(value);
  }
  template <typename AssociatedCollectorsT = Aws::Vector<AssociatedCollector>>
  ListAssociatedCollectorsResult& WithAssociatedCollectors(AssociatedCollectorsT&& value) {
    SetAssociatedCollectors(std::forward<AssociatedCollectorsT>(value));
    return *this;
  }
  template <typename AssociatedCollectorsT = AssociatedCollector>
  ListAssociatedCollectorsResult& AddAssociatedCollectors(AssociatedCollectorsT&& value) {
    m_associatedCollectorsHasBeenSet = true;
    m_associatedCollectors.emplace_back(std::forward<AssociatedCollectorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token for the next page, if present.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssociatedCollectorsResult& WithNextToken(NextTokenT&& value) {
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
  ListAssociatedCollectorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AssociatedCollector> m_associatedCollectors;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_associatedCollectorsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
