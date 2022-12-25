/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
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
  class ModifyClusterRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ModifyClusterRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyCluster"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline ModifyClusterRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline ModifyClusterRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the cluster.</p>
     */
    inline ModifyClusterRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The number of steps that can be executed concurrently. You can specify a
     * minimum of 1 step and a maximum of 256 steps. We recommend that you do not
     * change this parameter while steps are running or the
     * <code>ActionOnFailure</code> setting may not behave as expected. For more
     * information see <a>Step$ActionOnFailure</a>.</p>
     */
    inline int GetStepConcurrencyLevel() const{ return m_stepConcurrencyLevel; }

    /**
     * <p>The number of steps that can be executed concurrently. You can specify a
     * minimum of 1 step and a maximum of 256 steps. We recommend that you do not
     * change this parameter while steps are running or the
     * <code>ActionOnFailure</code> setting may not behave as expected. For more
     * information see <a>Step$ActionOnFailure</a>.</p>
     */
    inline bool StepConcurrencyLevelHasBeenSet() const { return m_stepConcurrencyLevelHasBeenSet; }

    /**
     * <p>The number of steps that can be executed concurrently. You can specify a
     * minimum of 1 step and a maximum of 256 steps. We recommend that you do not
     * change this parameter while steps are running or the
     * <code>ActionOnFailure</code> setting may not behave as expected. For more
     * information see <a>Step$ActionOnFailure</a>.</p>
     */
    inline void SetStepConcurrencyLevel(int value) { m_stepConcurrencyLevelHasBeenSet = true; m_stepConcurrencyLevel = value; }

    /**
     * <p>The number of steps that can be executed concurrently. You can specify a
     * minimum of 1 step and a maximum of 256 steps. We recommend that you do not
     * change this parameter while steps are running or the
     * <code>ActionOnFailure</code> setting may not behave as expected. For more
     * information see <a>Step$ActionOnFailure</a>.</p>
     */
    inline ModifyClusterRequest& WithStepConcurrencyLevel(int value) { SetStepConcurrencyLevel(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    int m_stepConcurrencyLevel;
    bool m_stepConcurrencyLevelHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
