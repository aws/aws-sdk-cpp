/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/CertificateFilterStatement.h>
#include <aws/acm/model/SearchCertificatesSortBy.h>
#include <aws/acm/model/SearchCertificatesSortOrder.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ACM {
namespace Model {

/**
 */
class SearchCertificatesRequest : public ACMRequest {
 public:
  AWS_ACM_API SearchCertificatesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "SearchCertificates"; }

  AWS_ACM_API Aws::String SerializePayload() const override;

  AWS_ACM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>A filter statement that defines the search criteria. You can combine multiple
   * filters using AND, OR, and NOT logical operators to create complex queries.</p>
   */
  inline const CertificateFilterStatement& GetFilterStatement() const { return m_filterStatement; }
  inline bool FilterStatementHasBeenSet() const { return m_filterStatementHasBeenSet; }
  template <typename FilterStatementT = CertificateFilterStatement>
  void SetFilterStatement(FilterStatementT&& value) {
    m_filterStatementHasBeenSet = true;
    m_filterStatement = std::forward<FilterStatementT>(value);
  }
  template <typename FilterStatementT = CertificateFilterStatement>
  SearchCertificatesRequest& WithFilterStatement(FilterStatementT&& value) {
    SetFilterStatement(std::forward<FilterStatementT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in the response. Default is 100.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchCertificatesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Use this parameter only when paginating results and only in a subsequent
   * request after you receive a response with truncated results. Set it to the value
   * of <code>NextToken</code> from the response you just received.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchCertificatesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the field to sort results by. Valid values are CREATED_AT,
   * NOT_AFTER, STATUS, RENEWAL_STATUS, EXPORTED, IN_USE, NOT_BEFORE, KEY_ALGORITHM,
   * TYPE, CERTIFICATE_ARN, COMMON_NAME, REVOKED_AT, RENEWAL_ELIGIBILITY, ISSUED_AT,
   * MANAGED_BY, EXPORT_OPTION, VALIDATION_METHOD, and IMPORTED_AT.</p>
   */
  inline SearchCertificatesSortBy GetSortBy() const { return m_sortBy; }
  inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }
  inline void SetSortBy(SearchCertificatesSortBy value) {
    m_sortByHasBeenSet = true;
    m_sortBy = value;
  }
  inline SearchCertificatesRequest& WithSortBy(SearchCertificatesSortBy value) {
    SetSortBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the order of sorted results. Valid values are ASCENDING or
   * DESCENDING.</p>
   */
  inline SearchCertificatesSortOrder GetSortOrder() const { return m_sortOrder; }
  inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }
  inline void SetSortOrder(SearchCertificatesSortOrder value) {
    m_sortOrderHasBeenSet = true;
    m_sortOrder = value;
  }
  inline SearchCertificatesRequest& WithSortOrder(SearchCertificatesSortOrder value) {
    SetSortOrder(value);
    return *this;
  }
  ///@}
 private:
  CertificateFilterStatement m_filterStatement;

  int m_maxResults{0};

  Aws::String m_nextToken;

  SearchCertificatesSortBy m_sortBy{SearchCertificatesSortBy::NOT_SET};

  SearchCertificatesSortOrder m_sortOrder{SearchCertificatesSortOrder::NOT_SET};
  bool m_filterStatementHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_sortByHasBeenSet = false;
  bool m_sortOrderHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
