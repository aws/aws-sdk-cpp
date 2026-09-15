/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/ResiliencyGroupAssociation.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectConnect {
namespace Model {
class AssociateConnectionsToResiliencyGroupResult {
 public:
  AWS_DIRECTCONNECT_API AssociateConnectionsToResiliencyGroupResult() = default;
  AWS_DIRECTCONNECT_API AssociateConnectionsToResiliencyGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTCONNECT_API AssociateConnectionsToResiliencyGroupResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The connection associations for the resiliency group.</p>
   */
  inline const Aws::Vector<ResiliencyGroupAssociation>& GetResiliencyGroupAssociations() const { return m_resiliencyGroupAssociations; }
  template <typename ResiliencyGroupAssociationsT = Aws::Vector<ResiliencyGroupAssociation>>
  void SetResiliencyGroupAssociations(ResiliencyGroupAssociationsT&& value) {
    m_resiliencyGroupAssociationsHasBeenSet = true;
    m_resiliencyGroupAssociations = std::forward<ResiliencyGroupAssociationsT>(value);
  }
  template <typename ResiliencyGroupAssociationsT = Aws::Vector<ResiliencyGroupAssociation>>
  AssociateConnectionsToResiliencyGroupResult& WithResiliencyGroupAssociations(ResiliencyGroupAssociationsT&& value) {
    SetResiliencyGroupAssociations(std::forward<ResiliencyGroupAssociationsT>(value));
    return *this;
  }
  template <typename ResiliencyGroupAssociationsT = ResiliencyGroupAssociation>
  AssociateConnectionsToResiliencyGroupResult& AddResiliencyGroupAssociations(ResiliencyGroupAssociationsT&& value) {
    m_resiliencyGroupAssociationsHasBeenSet = true;
    m_resiliencyGroupAssociations.emplace_back(std::forward<ResiliencyGroupAssociationsT>(value));
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
  AssociateConnectionsToResiliencyGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ResiliencyGroupAssociation> m_resiliencyGroupAssociations;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_resiliencyGroupAssociationsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectConnect
}  // namespace Aws
