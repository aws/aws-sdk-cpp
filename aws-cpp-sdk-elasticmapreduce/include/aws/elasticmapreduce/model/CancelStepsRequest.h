/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/StepCancellationOption.h>
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
  class CancelStepsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API CancelStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline CancelStepsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline CancelStepsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
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


    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline const StepCancellationOption& GetStepCancellationOption() const{ return m_stepCancellationOption; }

    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline bool StepCancellationOptionHasBeenSet() const { return m_stepCancellationOptionHasBeenSet; }

    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline void SetStepCancellationOption(const StepCancellationOption& value) { m_stepCancellationOptionHasBeenSet = true; m_stepCancellationOption = value; }

    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline void SetStepCancellationOption(StepCancellationOption&& value) { m_stepCancellationOptionHasBeenSet = true; m_stepCancellationOption = std::move(value); }

    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline CancelStepsRequest& WithStepCancellationOption(const StepCancellationOption& value) { SetStepCancellationOption(value); return *this;}

    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline CancelStepsRequest& WithStepCancellationOption(StepCancellationOption&& value) { SetStepCancellationOption(std::move(value)); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet = false;

    StepCancellationOption m_stepCancellationOption;
    bool m_stepCancellationOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
