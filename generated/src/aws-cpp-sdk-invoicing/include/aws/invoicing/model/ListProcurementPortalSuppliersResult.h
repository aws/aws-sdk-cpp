/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ProcurementPortalSupplier.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Invoicing {
namespace Model {
class ListProcurementPortalSuppliersResult {
 public:
  AWS_INVOICING_API ListProcurementPortalSuppliersResult() = default;
  AWS_INVOICING_API ListProcurementPortalSuppliersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INVOICING_API ListProcurementPortalSuppliersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of suppliers configured for the specified procurement portal.</p>
   */
  inline const Aws::Vector<ProcurementPortalSupplier>& GetProcurementPortalSuppliers() const { return m_procurementPortalSuppliers; }
  template <typename ProcurementPortalSuppliersT = Aws::Vector<ProcurementPortalSupplier>>
  void SetProcurementPortalSuppliers(ProcurementPortalSuppliersT&& value) {
    m_procurementPortalSuppliersHasBeenSet = true;
    m_procurementPortalSuppliers = std::forward<ProcurementPortalSuppliersT>(value);
  }
  template <typename ProcurementPortalSuppliersT = Aws::Vector<ProcurementPortalSupplier>>
  ListProcurementPortalSuppliersResult& WithProcurementPortalSuppliers(ProcurementPortalSuppliersT&& value) {
    SetProcurementPortalSuppliers(std::forward<ProcurementPortalSuppliersT>(value));
    return *this;
  }
  template <typename ProcurementPortalSuppliersT = ProcurementPortalSupplier>
  ListProcurementPortalSuppliersResult& AddProcurementPortalSuppliers(ProcurementPortalSuppliersT&& value) {
    m_procurementPortalSuppliersHasBeenSet = true;
    m_procurementPortalSuppliers.emplace_back(std::forward<ProcurementPortalSuppliersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token to use to retrieve the next set of results, or null if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListProcurementPortalSuppliersResult& WithNextToken(NextTokenT&& value) {
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
  ListProcurementPortalSuppliersResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ProcurementPortalSupplier> m_procurementPortalSuppliers;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_procurementPortalSuppliersHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
