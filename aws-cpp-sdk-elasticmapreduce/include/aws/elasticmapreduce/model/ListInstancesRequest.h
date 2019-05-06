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
#include <aws/elasticmapreduce/model/InstanceFleetType.h>
#include <aws/elasticmapreduce/model/InstanceGroupType.h>
#include <aws/elasticmapreduce/model/InstanceState.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   * <p>This input determines which instances to list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ListInstancesInput">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ListInstancesRequest : public EMRRequest
  {
  public:
    ListInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

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
    inline ListInstancesRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

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
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }

    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }

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
    inline ListInstancesRequest& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}

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
    inline bool InstanceGroupTypesHasBeenSet() const { return m_instanceGroupTypesHasBeenSet; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = value; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline void SetInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = std::move(value); }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { SetInstanceGroupTypes(value); return *this;}

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& WithInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { SetInstanceGroupTypes(std::move(value)); return *this;}

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& AddInstanceGroupTypes(const InstanceGroupType& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(value); return *this; }

    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline ListInstancesRequest& AddInstanceGroupTypes(InstanceGroupType&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline ListInstancesRequest& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline ListInstancesRequest& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline ListInstancesRequest& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}


    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline const InstanceFleetType& GetInstanceFleetType() const{ return m_instanceFleetType; }

    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }

    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline void SetInstanceFleetType(const InstanceFleetType& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }

    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline void SetInstanceFleetType(InstanceFleetType&& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = std::move(value); }

    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline ListInstancesRequest& WithInstanceFleetType(const InstanceFleetType& value) { SetInstanceFleetType(value); return *this;}

    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline ListInstancesRequest& WithInstanceFleetType(InstanceFleetType&& value) { SetInstanceFleetType(std::move(value)); return *this;}


    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStates() const{ return m_instanceStates; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline bool InstanceStatesHasBeenSet() const { return m_instanceStatesHasBeenSet; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline void SetInstanceStates(const Aws::Vector<InstanceState>& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = value; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline void SetInstanceStates(Aws::Vector<InstanceState>&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = std::move(value); }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& WithInstanceStates(const Aws::Vector<InstanceState>& value) { SetInstanceStates(value); return *this;}

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& WithInstanceStates(Aws::Vector<InstanceState>&& value) { SetInstanceStates(std::move(value)); return *this;}

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& AddInstanceStates(const InstanceState& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(value); return *this; }

    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline ListInstancesRequest& AddInstanceStates(InstanceState&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }

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
    inline ListInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

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

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet;

    InstanceFleetType m_instanceFleetType;
    bool m_instanceFleetTypeHasBeenSet;

    Aws::Vector<InstanceState> m_instanceStates;
    bool m_instanceStatesHasBeenSet;

    Aws::String m_marker;
    bool m_markerHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
