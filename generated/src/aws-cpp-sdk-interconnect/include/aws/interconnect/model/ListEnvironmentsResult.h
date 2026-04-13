/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/interconnect/Interconnect_EXPORTS.h>
#include <aws/interconnect/model/Environment.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Interconnect {
namespace Model {
class ListEnvironmentsResult {
 public:
  AWS_INTERCONNECT_API ListEnvironmentsResult() = default;
  AWS_INTERCONNECT_API ListEnvironmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_INTERCONNECT_API ListEnvironmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{
  /**
   * <p>The list of matching <a>Environment</a> objects.</p>
   */
  inline const Aws::Vector<Environment>& GetEnvironments() const { return m_environments; }
  template <typename EnvironmentsT = Aws::Vector<Environment>>
  void SetEnvironments(EnvironmentsT&& value) {
    m_environmentsHasBeenSet = true;
    m_environments = std::forward<EnvironmentsT>(value);
  }
  template <typename EnvironmentsT = Aws::Vector<Environment>>
  ListEnvironmentsResult& WithEnvironments(EnvironmentsT&& value) {
    SetEnvironments(std::forward<EnvironmentsT>(value));
    return *this;
  }
  template <typename EnvironmentsT = Environment>
  ListEnvironmentsResult& AddEnvironments(EnvironmentsT&& value) {
    m_environmentsHasBeenSet = true;
    m_environments.emplace_back(std::forward<EnvironmentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A pagination token for use in subsequent calls to fetch the next page of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListEnvironmentsResult& WithNextToken(NextTokenT&& value) {
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
  ListEnvironmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Environment> m_environments;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_environmentsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Interconnect
}  // namespace Aws
