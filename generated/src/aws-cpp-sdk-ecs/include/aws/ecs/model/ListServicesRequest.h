/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/LaunchType.h>
#include <aws/ecs/model/SchedulingStrategy.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class ListServicesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ListServicesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster to use when
     * filtering the <code>ListServices</code> results. If you do not specify a
     * cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    ListServicesRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value returned from a <code>ListServices</code>
     * request indicating that more results are available to fulfill the request and
     * further calls will be needed. If <code>maxResults</code> was provided, it is
     * possible the number of results to be fewer than <code>maxResults</code>.</p>
     *  <p>This token should be treated as an opaque identifier that is only used
     * to retrieve the next items in a list and not for other programmatic
     * purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServicesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of service results that <code>ListServices</code> returned
     * in paginated output. When this parameter is used, <code>ListServices</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListServices</code> request with
     * the returned <code>nextToken</code> value. This value can be between 1 and 100.
     * If this parameter isn't used, then <code>ListServices</code> returns up to 10
     * results and a <code>nextToken</code> value if applicable.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The launch type to use when filtering the <code>ListServices</code>
     * results.</p>
     */
    inline LaunchType GetLaunchType() const { return m_launchType; }
    inline bool LaunchTypeHasBeenSet() const { return m_launchTypeHasBeenSet; }
    inline void SetLaunchType(LaunchType value) { m_launchTypeHasBeenSet = true; m_launchType = value; }
    inline ListServicesRequest& WithLaunchType(LaunchType value) { SetLaunchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scheduling strategy to use when filtering the <code>ListServices</code>
     * results.</p>
     */
    inline SchedulingStrategy GetSchedulingStrategy() const { return m_schedulingStrategy; }
    inline bool SchedulingStrategyHasBeenSet() const { return m_schedulingStrategyHasBeenSet; }
    inline void SetSchedulingStrategy(SchedulingStrategy value) { m_schedulingStrategyHasBeenSet = true; m_schedulingStrategy = value; }
    inline ListServicesRequest& WithSchedulingStrategy(SchedulingStrategy value) { SetSchedulingStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    LaunchType m_launchType{LaunchType::NOT_SET};
    bool m_launchTypeHasBeenSet = false;

    SchedulingStrategy m_schedulingStrategy{SchedulingStrategy::NOT_SET};
    bool m_schedulingStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
