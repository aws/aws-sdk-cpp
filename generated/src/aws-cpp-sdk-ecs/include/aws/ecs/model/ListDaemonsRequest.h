/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ListDaemonsRequest : public ECSRequest {
 public:
  AWS_ECS_API ListDaemonsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListDaemons"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the cluster to filter daemons by. If not
   * specified, daemons from all clusters are returned.</p>
   */
  inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
  inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
  template <typename ClusterArnT = Aws::String>
  void SetClusterArn(ClusterArnT&& value) {
    m_clusterArnHasBeenSet = true;
    m_clusterArn = std::forward<ClusterArnT>(value);
  }
  template <typename ClusterArnT = Aws::String>
  ListDaemonsRequest& WithClusterArn(ClusterArnT&& value) {
    SetClusterArn(std::forward<ClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Names (ARNs) of the capacity providers to filter daemons
   * by. Only daemons associated with the specified capacity providers are
   * returned.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCapacityProviderArns() const { return m_capacityProviderArns; }
  inline bool CapacityProviderArnsHasBeenSet() const { return m_capacityProviderArnsHasBeenSet; }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  void SetCapacityProviderArns(CapacityProviderArnsT&& value) {
    m_capacityProviderArnsHasBeenSet = true;
    m_capacityProviderArns = std::forward<CapacityProviderArnsT>(value);
  }
  template <typename CapacityProviderArnsT = Aws::Vector<Aws::String>>
  ListDaemonsRequest& WithCapacityProviderArns(CapacityProviderArnsT&& value) {
    SetCapacityProviderArns(std::forward<CapacityProviderArnsT>(value));
    return *this;
  }
  template <typename CapacityProviderArnsT = Aws::String>
  ListDaemonsRequest& AddCapacityProviderArns(CapacityProviderArnsT&& value) {
    m_capacityProviderArnsHasBeenSet = true;
    m_capacityProviderArns.emplace_back(std::forward<CapacityProviderArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of daemon results that <code>ListDaemons</code> returned
   * in paginated output. When this parameter is used, <code>ListDaemons</code> only
   * returns <code>maxResults</code> results in a single page along with a
   * <code>nextToken</code> response element. The remaining results of the initial
   * request can be seen by sending another <code>ListDaemons</code> request with the
   * returned <code>nextToken</code> value. This value can be between 1 and 100. If
   * this parameter isn't used, then <code>ListDaemons</code> returns up to 100
   * results and a <code>nextToken</code> value if applicable.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListDaemonsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>nextToken</code> value returned from a <code>ListDaemons</code>
   * request indicating that more results are available to fulfill the request and
   * further calls will be needed. If <code>maxResults</code> was provided, it's
   * possible for the number of results to be fewer than <code>maxResults</code>.</p>
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
  ListDaemonsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterArn;

  Aws::Vector<Aws::String> m_capacityProviderArns;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_clusterArnHasBeenSet = false;
  bool m_capacityProviderArnsHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
