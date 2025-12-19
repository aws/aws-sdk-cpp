/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/EKSRequest.h>
#include <aws/eks/EKS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace EKS {
namespace Model {

/**
 */
class ListCapabilitiesRequest : public EKSRequest {
 public:
  AWS_EKS_API ListCapabilitiesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListCapabilities"; }

  AWS_EKS_API Aws::String SerializePayload() const override;

  AWS_EKS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The name of the Amazon EKS cluster for which you want to list
   * capabilities.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  ListCapabilitiesRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a previous paginated request,
   * where <code>maxResults</code> was used and the results exceeded the value of
   * that parameter. Pagination continues from the end of the previous results that
   * returned the <code>nextToken</code> value. This value is null when there are no
   * more results to return.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListCapabilitiesRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. To retrieve the
   * remaining results, make another call with the returned <code>nextToken</code>
   * value. If you don't specify a value, the default is 100 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListCapabilitiesRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_clusterNameHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
