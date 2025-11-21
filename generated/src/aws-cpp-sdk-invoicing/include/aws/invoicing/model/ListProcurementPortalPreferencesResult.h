/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/ProcurementPortalPreferenceSummary.h>

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
class ListProcurementPortalPreferencesResult {
 public:
  AWS_INVOICING_API ListProcurementPortalPreferencesResult() = default;
  AWS_INVOICING_API ListProcurementPortalPreferencesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_INVOICING_API ListProcurementPortalPreferencesResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of procurement portal preferences associated with the Amazon Web
   * Services account.</p>
   */
  inline const Aws::Vector<ProcurementPortalPreferenceSummary>& GetProcurementPortalPreferences() const {
    return m_procurementPortalPreferences;
  }
  template <typename ProcurementPortalPreferencesT = Aws::Vector<ProcurementPortalPreferenceSummary>>
  void SetProcurementPortalPreferences(ProcurementPortalPreferencesT&& value) {
    m_procurementPortalPreferencesHasBeenSet = true;
    m_procurementPortalPreferences = std::forward<ProcurementPortalPreferencesT>(value);
  }
  template <typename ProcurementPortalPreferencesT = Aws::Vector<ProcurementPortalPreferenceSummary>>
  ListProcurementPortalPreferencesResult& WithProcurementPortalPreferences(ProcurementPortalPreferencesT&& value) {
    SetProcurementPortalPreferences(std::forward<ProcurementPortalPreferencesT>(value));
    return *this;
  }
  template <typename ProcurementPortalPreferencesT = ProcurementPortalPreferenceSummary>
  ListProcurementPortalPreferencesResult& AddProcurementPortalPreferences(ProcurementPortalPreferencesT&& value) {
    m_procurementPortalPreferencesHasBeenSet = true;
    m_procurementPortalPreferences.emplace_back(std::forward<ProcurementPortalPreferencesT>(value));
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
  ListProcurementPortalPreferencesResult& WithNextToken(NextTokenT&& value) {
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
  ListProcurementPortalPreferencesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ProcurementPortalPreferenceSummary> m_procurementPortalPreferences;
  bool m_procurementPortalPreferencesHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Invoicing
}  // namespace Aws
