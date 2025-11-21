/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ListImageReferrersFilter.h>
#include <aws/ecr/model/SubjectIdentifier.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class ListImageReferrersRequest : public ECRRequest {
 public:
  AWS_ECR_API ListImageReferrersRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListImageReferrers"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry that contains
   * the repository in which to list image referrers. If you do not specify a
   * registry, the default registry is assumed.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  ListImageReferrersRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the repository that contains the subject image.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  ListImageReferrersRequest& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object containing the image digest of the subject image for which to
   * retrieve associated artifacts.</p>
   */
  inline const SubjectIdentifier& GetSubjectId() const { return m_subjectId; }
  inline bool SubjectIdHasBeenSet() const { return m_subjectIdHasBeenSet; }
  template <typename SubjectIdT = SubjectIdentifier>
  void SetSubjectId(SubjectIdT&& value) {
    m_subjectIdHasBeenSet = true;
    m_subjectId = std::forward<SubjectIdT>(value);
  }
  template <typename SubjectIdT = SubjectIdentifier>
  ListImageReferrersRequest& WithSubjectId(SubjectIdT&& value) {
    SetSubjectId(std::forward<SubjectIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter key and value with which to filter your
   * <code>ListImageReferrers</code> results. If no filter is specified, only
   * artifacts with <code>ACTIVE</code> status are returned.</p>
   */
  inline const ListImageReferrersFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = ListImageReferrersFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = ListImageReferrersFilter>
  ListImageReferrersRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a previous paginated
   * <code>ListImageReferrers</code> request where <code>maxResults</code> was used
   * and the results exceeded the value of that parameter. Pagination continues from
   * the end of the previous results that returned the <code>nextToken</code> value.
   * This value is <code>null</code> when there are no more results to return.</p>
   *  <p>This token should be treated as an opaque identifier that is only used
   * to retrieve the next items in a list and not for other programmatic
   * purposes.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListImageReferrersRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of image referrer results returned by
   * <code>ListImageReferrers</code> in paginated output. When this parameter is
   * used, <code>ListImageReferrers</code> only returns <code>maxResults</code>
   * results in a single page along with a <code>nextToken</code> response element.
   * The remaining results of the initial request can be seen by sending another
   * <code>ListImageReferrers</code> request with the returned <code>nextToken</code>
   * value. This value can be between 1 and 50. If this parameter is not used, then
   * <code>ListImageReferrers</code> returns up to 50 results and a
   * <code>nextToken</code> value, if applicable.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListImageReferrersRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;
  bool m_registryIdHasBeenSet = false;

  Aws::String m_repositoryName;
  bool m_repositoryNameHasBeenSet = false;

  SubjectIdentifier m_subjectId;
  bool m_subjectIdHasBeenSet = false;

  ListImageReferrersFilter m_filter;
  bool m_filterHasBeenSet = false;

  Aws::String m_nextToken;
  bool m_nextTokenHasBeenSet = false;

  int m_maxResults{0};
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
