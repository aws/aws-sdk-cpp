/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrassv2/model/DeploymentHistoryFilter.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class ListDeploymentsRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API ListDeploymentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeployments"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    ListDeploymentsRequest& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline DeploymentHistoryFilter GetHistoryFilter() const { return m_historyFilter; }
    inline bool HistoryFilterHasBeenSet() const { return m_historyFilterHasBeenSet; }
    inline void SetHistoryFilter(DeploymentHistoryFilter value) { m_historyFilterHasBeenSet = true; m_historyFilter = value; }
    inline ListDeploymentsRequest& WithHistoryFilter(DeploymentHistoryFilter value) { SetHistoryFilter(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const { return m_parentTargetArn; }
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }
    template<typename ParentTargetArnT = Aws::String>
    void SetParentTargetArn(ParentTargetArnT&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::forward<ParentTargetArnT>(value); }
    template<typename ParentTargetArnT = Aws::String>
    ListDeploymentsRequest& WithParentTargetArn(ParentTargetArnT&& value) { SetParentTargetArn(std::forward<ParentTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     * <p>Default: <code>50</code> </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListDeploymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    DeploymentHistoryFilter m_historyFilter{DeploymentHistoryFilter::NOT_SET};
    bool m_historyFilterHasBeenSet = false;

    Aws::String m_parentTargetArn;
    bool m_parentTargetArnHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
