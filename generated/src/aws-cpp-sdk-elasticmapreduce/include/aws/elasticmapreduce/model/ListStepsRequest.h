/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/StepState.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which steps to list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListStepsInput">AWS
   * API Reference</a></p>
   */
  class ListStepsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListStepsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    ListStepsRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline const Aws::Vector<StepState>& GetStepStates() const { return m_stepStates; }
    inline bool StepStatesHasBeenSet() const { return m_stepStatesHasBeenSet; }
    template<typename StepStatesT = Aws::Vector<StepState>>
    void SetStepStates(StepStatesT&& value) { m_stepStatesHasBeenSet = true; m_stepStates = std::forward<StepStatesT>(value); }
    template<typename StepStatesT = Aws::Vector<StepState>>
    ListStepsRequest& WithStepStates(StepStatesT&& value) { SetStepStates(std::forward<StepStatesT>(value)); return *this;}
    inline ListStepsRequest& AddStepStates(StepState value) { m_stepStatesHasBeenSet = true; m_stepStates.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const { return m_stepIds; }
    inline bool StepIdsHasBeenSet() const { return m_stepIdsHasBeenSet; }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    void SetStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds = std::forward<StepIdsT>(value); }
    template<typename StepIdsT = Aws::Vector<Aws::String>>
    ListStepsRequest& WithStepIds(StepIdsT&& value) { SetStepIds(std::forward<StepIdsT>(value)); return *this;}
    template<typename StepIdsT = Aws::String>
    ListStepsRequest& AddStepIds(StepIdsT&& value) { m_stepIdsHasBeenSet = true; m_stepIds.emplace_back(std::forward<StepIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListStepsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::Vector<StepState> m_stepStates;
    bool m_stepStatesHasBeenSet = false;

    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
