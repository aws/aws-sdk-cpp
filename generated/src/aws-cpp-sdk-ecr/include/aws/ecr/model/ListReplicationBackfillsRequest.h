/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class ListReplicationBackfillsRequest : public ECRRequest {
 public:
  AWS_ECR_API ListReplicationBackfillsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListReplicationBackfills"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry for which to
   * list replication backfills. If you do not specify a registry, the default
   * registry is assumed.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  ListReplicationBackfillsRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of replication backfill results returned by
   * <code>ListReplicationBackfills</code> in paginated output. When this parameter
   * is used, <code>ListReplicationBackfills</code> only returns
   * <code>maxResults</code> results in a single page along with a
   * <code>nextToken</code> response element. The remaining results of the initial
   * request can be seen by sending another <code>ListReplicationBackfills</code>
   * request with the returned <code>nextToken</code> value. This value can be
   * between 1 and 50. If this parameter is not used, then
   * <code>ListReplicationBackfills</code> returns up to 25 results and a
   * <code>nextToken</code> value, if applicable.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListReplicationBackfillsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a previous paginated
   * <code>ListReplicationBackfills</code> request where <code>maxResults</code> was
   * used and the results exceeded the value of that parameter. Pagination continues
   * from the end of the previous results that returned the <code>nextToken</code>
   * value. This value is <code>null</code> when there are no more results to
   * return.</p>  <p>This token should be treated as an opaque identifier that
   * is only used to retrieve the next items in a list and not for other programmatic
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
  ListReplicationBackfillsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_registryIdHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
