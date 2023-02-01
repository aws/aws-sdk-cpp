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
    AWS_EMR_API ListStepsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSteps"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline ListStepsRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline ListStepsRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline ListStepsRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline const Aws::Vector<StepState>& GetStepStates() const{ return m_stepStates; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline bool StepStatesHasBeenSet() const { return m_stepStatesHasBeenSet; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline void SetStepStates(const Aws::Vector<StepState>& value) { m_stepStatesHasBeenSet = true; m_stepStates = value; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline void SetStepStates(Aws::Vector<StepState>&& value) { m_stepStatesHasBeenSet = true; m_stepStates = std::move(value); }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& WithStepStates(const Aws::Vector<StepState>& value) { SetStepStates(value); return *this;}

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& WithStepStates(Aws::Vector<StepState>&& value) { SetStepStates(std::move(value)); return *this;}

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& AddStepStates(const StepState& value) { m_stepStatesHasBeenSet = true; m_stepStates.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& AddStepStates(StepState&& value) { m_stepStatesHasBeenSet = true; m_stepStates.push_back(std::move(value)); return *this; }


    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const{ return m_stepIds; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline bool StepIdsHasBeenSet() const { return m_stepIdsHasBeenSet; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline void SetStepIds(const Aws::Vector<Aws::String>& value) { m_stepIdsHasBeenSet = true; m_stepIds = value; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline void SetStepIds(Aws::Vector<Aws::String>&& value) { m_stepIdsHasBeenSet = true; m_stepIds = std::move(value); }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline ListStepsRequest& WithStepIds(const Aws::Vector<Aws::String>& value) { SetStepIds(value); return *this;}

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline ListStepsRequest& WithStepIds(Aws::Vector<Aws::String>&& value) { SetStepIds(std::move(value)); return *this;}

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline ListStepsRequest& AddStepIds(const Aws::String& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline ListStepsRequest& AddStepIds(Aws::String&& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps. You
     * can specify a maximum of ten Step IDs. The character constraint applies to the
     * overall length of the array.</p>
     */
    inline ListStepsRequest& AddStepIds(const char* value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>The maximum number of steps that a single <code>ListSteps</code> action
     * returns is 50. To return a longer list of steps, use multiple
     * <code>ListSteps</code> actions along with the <code>Marker</code> parameter,
     * which is a pagination token that indicates the next set of results to
     * retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

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
