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
    AWS_EMR_API CancelStepsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>ClusterID</code> for the specified steps that will be canceled. Use
     * <a>RunJobFlow</a> and <a>ListClusters</a> to get ClusterIDs. </p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    CancelStepsRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of <code>StepIDs</code> to cancel. Use <a>ListSteps</a> to get steps
     * and their states for the specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const { return m_stepIds; }
    inline bool StepIdsHasBeenSet() const { return m_stepIdsHasBeenSet; }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    void SetStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds = std::forward<StepIdsT>(value); }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    CancelStepsRequest& WithStepIds(StepIdsT&& value) { SetStepIds(std::forward<StepIdsT>(value)); return *this;}
    template<typename StepIdsT = Aws::String>
    CancelStepsRequest& AddStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds.emplace_back(std::forward<StepIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option to choose to cancel <code>RUNNING</code> steps. By default, the
     * value is <code>SEND_INTERRUPT</code>.</p>
     */
    inline StepCancellationOption GetStepCancellationOption() const { return m_stepCancellationOption; }
    inline bool StepCancellationOptionHasBeenSet() const { return m_stepCancellationOptionHasBeenSet; }
    inline void SetStepCancellationOption(StepCancellationOption value) { m_stepCancellationOptionHasBeenSet = true; m_stepCancellationOption = value; }
    inline CancelStepsRequest& WithStepCancellationOption(StepCancellationOption value) { SetStepCancellationOption(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet = false;

    StepCancellationOption m_stepCancellationOption{StepCancellationOption::NOT_SET};
    bool m_stepCancellationOptionHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
