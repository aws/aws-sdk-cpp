/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticmapreduce/model/StepState.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which steps to list.</p>
   */
  class AWS_EMR_API ListStepsRequest : public EMRRequest
  {
  public:
    ListStepsRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster for which to list the steps.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

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
    inline ListStepsRequest& WithClusterId(Aws::String&& value) { SetClusterId(value); return *this;}

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
    inline void SetStepStates(const Aws::Vector<StepState>& value) { m_stepStatesHasBeenSet = true; m_stepStates = value; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline void SetStepStates(Aws::Vector<StepState>&& value) { m_stepStatesHasBeenSet = true; m_stepStates = value; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& WithStepStates(const Aws::Vector<StepState>& value) { SetStepStates(value); return *this;}

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& WithStepStates(Aws::Vector<StepState>&& value) { SetStepStates(value); return *this;}

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& AddStepStates(const StepState& value) { m_stepStatesHasBeenSet = true; m_stepStates.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on certain states.</p>
     */
    inline ListStepsRequest& AddStepStates(StepState&& value) { m_stepStatesHasBeenSet = true; m_stepStates.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline const Aws::Vector<Aws::String>& GetStepIds() const{ return m_stepIds; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline void SetStepIds(const Aws::Vector<Aws::String>& value) { m_stepIdsHasBeenSet = true; m_stepIds = value; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline void SetStepIds(Aws::Vector<Aws::String>&& value) { m_stepIdsHasBeenSet = true; m_stepIds = value; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline ListStepsRequest& WithStepIds(const Aws::Vector<Aws::String>& value) { SetStepIds(value); return *this;}

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline ListStepsRequest& WithStepIds(Aws::Vector<Aws::String>&& value) { SetStepIds(value); return *this;}

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline ListStepsRequest& AddStepIds(const Aws::String& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline ListStepsRequest& AddStepIds(Aws::String&& value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

    /**
     * <p>The filter to limit the step list based on the identifier of the steps.</p>
     */
    inline ListStepsRequest& AddStepIds(const char* value) { m_stepIdsHasBeenSet = true; m_stepIds.push_back(value); return *this; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListStepsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;
    Aws::Vector<StepState> m_stepStates;
    bool m_stepStatesHasBeenSet;
    Aws::Vector<Aws::String> m_stepIds;
    bool m_stepIdsHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
