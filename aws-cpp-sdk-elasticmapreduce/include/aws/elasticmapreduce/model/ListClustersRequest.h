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
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/ClusterState.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines how the ListClusters action filters the list of
   * clusters that it returns.</p>
   */
  class AWS_EMR_API ListClustersRequest : public EMRRequest
  {
  public:
    ListClustersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The creation date and time beginning value filter for listing clusters .</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The creation date and time beginning value filter for listing clusters .</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The creation date and time beginning value filter for listing clusters .</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The creation date and time beginning value filter for listing clusters .</p>
     */
    inline ListClustersRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The creation date and time beginning value filter for listing clusters .</p>
     */
    inline ListClustersRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The creation date and time end value filter for listing clusters .</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The creation date and time end value filter for listing clusters .</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The creation date and time end value filter for listing clusters .</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The creation date and time end value filter for listing clusters .</p>
     */
    inline ListClustersRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The creation date and time end value filter for listing clusters .</p>
     */
    inline ListClustersRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline const Aws::Vector<ClusterState>& GetClusterStates() const{ return m_clusterStates; }

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline void SetClusterStates(const Aws::Vector<ClusterState>& value) { m_clusterStatesHasBeenSet = true; m_clusterStates = value; }

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline void SetClusterStates(Aws::Vector<ClusterState>&& value) { m_clusterStatesHasBeenSet = true; m_clusterStates = value; }

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline ListClustersRequest& WithClusterStates(const Aws::Vector<ClusterState>& value) { SetClusterStates(value); return *this;}

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline ListClustersRequest& WithClusterStates(Aws::Vector<ClusterState>&& value) { SetClusterStates(value); return *this;}

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline ListClustersRequest& AddClusterStates(const ClusterState& value) { m_clusterStatesHasBeenSet = true; m_clusterStates.push_back(value); return *this; }

    /**
     * <p>The cluster state filters to apply when listing clusters.</p>
     */
    inline ListClustersRequest& AddClusterStates(ClusterState&& value) { m_clusterStatesHasBeenSet = true; m_clusterStates.push_back(value); return *this; }

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
    inline ListClustersRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListClustersRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListClustersRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet;
    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet;
    Aws::Vector<ClusterState> m_clusterStates;
    bool m_clusterStatesHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
