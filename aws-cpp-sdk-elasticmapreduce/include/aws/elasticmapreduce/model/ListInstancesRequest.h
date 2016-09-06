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
#include <aws/elasticmapreduce/model/InstanceGroupType.h>
#include <aws/elasticmapreduce/model/InstanceState.h>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which instances to list.</p>
   */
  class AWS_EMR_API ListInstancesRequest : public EMRRequest
  {
  public:
    ListInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithClusterId(Aws::String&& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline const Aws::Vector<InstanceGroupType>& GetInstanceGroupTypes() const{ return m_instanceGroupTypes; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = value; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = value; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { SetInstanceGroupTypes(value); return *this;}

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { SetInstanceGroupTypes(value); return *this;}

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& AddInstanceGroupTypes(const InstanceGroupType& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(value); return *this; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& AddInstanceGroupTypes(InstanceGroupType&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(value); return *this; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStates() const{ return m_instanceStates; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline void SetInstanceStates(const Aws::Vector<InstanceState>& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = value; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline void SetInstanceStates(Aws::Vector<InstanceState>&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = value; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& WithInstanceStates(const Aws::Vector<InstanceState>& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& WithInstanceStates(Aws::Vector<InstanceState>&& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& AddInstanceStates(const InstanceState& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(value); return *this; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& AddInstanceStates(InstanceState&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(value); return *this; }

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
    inline ListInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}

  private:
    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;
    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet;
    Aws::Vector<InstanceGroupType> m_instanceGroupTypes;
    bool m_instanceGroupTypesHasBeenSet;
    Aws::Vector<InstanceState> m_instanceStates;
    bool m_instanceStatesHasBeenSet;
    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
