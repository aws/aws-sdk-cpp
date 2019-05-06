/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>The input argument to the <a>CancelSteps</a> operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CancelStepsInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API CancelStepsRequest : public EMRRequest
  {
  public:
    CancelStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSteps"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline CancelStepsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline CancelStepsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The <code>ClusterID</code> for which specified steps will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline CancelStepsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const{ return m_stepIds; }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline bool StepIdsHasBeenSet() const { return m_stepIdsHasBeenSet; }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline void SetStepIds(const Aws::Vector<Aws::String>& value) { m_stepIdsHasBeenSet = true; m_stepIds = value; }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline void SetStepIds(Aws::Vector<Aws::String>&& value) { m_stepIdsHasBeenSet = true; m_stepIds = std::move(value); }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline CancelStepsRequest& WithStepIds(const Aws::Vector<Aws::String>& value) { SetStepIds(value); return *this;}

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline CancelStepsRequest& WithStepIds(Aws::Vector<Aws::String>&& value) { SetStepIds(std::move(value)); return *this;}

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline CancelStepsRequest& AddStepIds(const Aws::String& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline CancelStepsRequest& AddStepIds(Aws::String&& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline CancelStepsRequest& AddStepIds(const char* value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
