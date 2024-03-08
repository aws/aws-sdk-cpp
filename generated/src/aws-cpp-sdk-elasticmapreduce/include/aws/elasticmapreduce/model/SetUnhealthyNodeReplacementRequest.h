/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class SetUnhealthyNodeReplacementRequest : public EMRRequest
  {
  public:
    AWS_EMR_API SetUnhealthyNodeReplacementRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetUnhealthyNodeReplacement"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline const Aws::Vector<Aws::String>& GetJobFlowIds() const{ return m_jobFlowIds; }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline bool JobFlowIdsHasBeenSet() const { return m_jobFlowIdsHasBeenSet; }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline void SetJobFlowIds(const Aws::Vector<Aws::String>& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = value; }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline void SetJobFlowIds(Aws::Vector<Aws::String>&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds = std::move(value); }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& WithJobFlowIds(const Aws::Vector<Aws::String>& value) { SetJobFlowIds(value); return *this;}

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& WithJobFlowIds(Aws::Vector<Aws::String>&& value) { SetJobFlowIds(std::move(value)); return *this;}

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& AddJobFlowIds(const Aws::String& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& AddJobFlowIds(Aws::String&& value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of strings that uniquely identify the clusters for which to turn on
     * unhealthy node replacement. You can get these identifiers by running the
     * <a>RunJobFlow</a> or the <a>DescribeJobFlows</a> operations.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& AddJobFlowIds(const char* value) { m_jobFlowIdsHasBeenSet = true; m_jobFlowIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether to turn on or turn off graceful unhealthy node
     * replacement.</p>
     */
    inline bool GetUnhealthyNodeReplacement() const{ return m_unhealthyNodeReplacement; }

    /**
     * <p>Indicates whether to turn on or turn off graceful unhealthy node
     * replacement.</p>
     */
    inline bool UnhealthyNodeReplacementHasBeenSet() const { return m_unhealthyNodeReplacementHasBeenSet; }

    /**
     * <p>Indicates whether to turn on or turn off graceful unhealthy node
     * replacement.</p>
     */
    inline void SetUnhealthyNodeReplacement(bool value) { m_unhealthyNodeReplacementHasBeenSet = true; m_unhealthyNodeReplacement = value; }

    /**
     * <p>Indicates whether to turn on or turn off graceful unhealthy node
     * replacement.</p>
     */
    inline SetUnhealthyNodeReplacementRequest& WithUnhealthyNodeReplacement(bool value) { SetUnhealthyNodeReplacement(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_jobFlowIds;
    bool m_jobFlowIdsHasBeenSet = false;

    bool m_unhealthyNodeReplacement;
    bool m_unhealthyNodeReplacementHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
