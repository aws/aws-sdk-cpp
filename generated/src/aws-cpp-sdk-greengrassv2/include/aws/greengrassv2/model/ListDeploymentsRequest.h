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
    AWS_GREENGRASSV2_API ListDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeployments"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline const Aws::String& GetTargetArn() const{ return m_targetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline void SetTargetArn(const Aws::String& value) { m_targetArnHasBeenSet = true; m_targetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline void SetTargetArn(Aws::String&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline void SetTargetArn(const char* value) { m_targetArnHasBeenSet = true; m_targetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline ListDeploymentsRequest& WithTargetArn(const Aws::String& value) { SetTargetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline ListDeploymentsRequest& WithTargetArn(Aws::String&& value) { SetTargetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the target IoT thing or thing group.</p>
     */
    inline ListDeploymentsRequest& WithTargetArn(const char* value) { SetTargetArn(value); return *this;}


    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline const DeploymentHistoryFilter& GetHistoryFilter() const{ return m_historyFilter; }

    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline bool HistoryFilterHasBeenSet() const { return m_historyFilterHasBeenSet; }

    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline void SetHistoryFilter(const DeploymentHistoryFilter& value) { m_historyFilterHasBeenSet = true; m_historyFilter = value; }

    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline void SetHistoryFilter(DeploymentHistoryFilter&& value) { m_historyFilterHasBeenSet = true; m_historyFilter = std::move(value); }

    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline ListDeploymentsRequest& WithHistoryFilter(const DeploymentHistoryFilter& value) { SetHistoryFilter(value); return *this;}

    /**
     * <p>The filter for the list of deployments. Choose one of the following
     * options:</p> <ul> <li> <p> <code>ALL</code> – The list includes all
     * deployments.</p> </li> <li> <p> <code>LATEST_ONLY</code> – The list includes
     * only the latest revision of each deployment.</p> </li> </ul> <p>Default:
     * <code>LATEST_ONLY</code> </p>
     */
    inline ListDeploymentsRequest& WithHistoryFilter(DeploymentHistoryFilter&& value) { SetHistoryFilter(std::move(value)); return *this;}


    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline const Aws::String& GetParentTargetArn() const{ return m_parentTargetArn; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline bool ParentTargetArnHasBeenSet() const { return m_parentTargetArnHasBeenSet; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const Aws::String& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = value; }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(Aws::String&& value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn = std::move(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline void SetParentTargetArn(const char* value) { m_parentTargetArnHasBeenSet = true; m_parentTargetArn.assign(value); }

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline ListDeploymentsRequest& WithParentTargetArn(const Aws::String& value) { SetParentTargetArn(value); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline ListDeploymentsRequest& WithParentTargetArn(Aws::String&& value) { SetParentTargetArn(std::move(value)); return *this;}

    /**
     * <p>The parent deployment's target <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * within a subdeployment.</p>
     */
    inline ListDeploymentsRequest& WithParentTargetArn(const char* value) { SetParentTargetArn(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per paginated request.</p>
     */
    inline ListDeploymentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to be used for the next set of paginated results.</p>
     */
    inline ListDeploymentsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    DeploymentHistoryFilter m_historyFilter;
    bool m_historyFilterHasBeenSet = false;

    Aws::String m_parentTargetArn;
    bool m_parentTargetArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
