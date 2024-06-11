/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListInstancesRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInstances"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the cluster for which to list the instances.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }
    inline ListInstancesRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}
    inline ListInstancesRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}
    inline ListInstancesRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const{ return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    inline void SetInstanceGroupId(const Aws::String& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = value; }
    inline void SetInstanceGroupId(Aws::String&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::move(value); }
    inline void SetInstanceGroupId(const char* value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId.assign(value); }
    inline ListInstancesRequest& WithInstanceGroupId(const Aws::String& value) { SetInstanceGroupId(value); return *this;}
    inline ListInstancesRequest& WithInstanceGroupId(Aws::String&& value) { SetInstanceGroupId(std::move(value)); return *this;}
    inline ListInstancesRequest& WithInstanceGroupId(const char* value) { SetInstanceGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline const Aws::Vector<InstanceGroupType>& GetInstanceGroupTypes() const{ return m_instanceGroupTypes; }
    inline bool InstanceGroupTypesHasBeenSet() const { return m_instanceGroupTypesHasBeenSet; }
    inline void SetInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = value; }
    inline void SetInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = std::move(value); }
    inline ListInstancesRequest& WithInstanceGroupTypes(const Aws::Vector<InstanceGroupType>& value) { SetInstanceGroupTypes(value); return *this;}
    inline ListInstancesRequest& WithInstanceGroupTypes(Aws::Vector<InstanceGroupType>&& value) { SetInstanceGroupTypes(std::move(value)); return *this;}
    inline ListInstancesRequest& AddInstanceGroupTypes(const InstanceGroupType& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(value); return *this; }
    inline ListInstancesRequest& AddInstanceGroupTypes(InstanceGroupType&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }
    inline ListInstancesRequest& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}
    inline ListInstancesRequest& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}
    inline ListInstancesRequest& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline const InstanceFleetType& GetInstanceFleetType() const{ return m_instanceFleetType; }
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }
    inline void SetInstanceFleetType(const InstanceFleetType& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }
    inline void SetInstanceFleetType(InstanceFleetType&& value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = std::move(value); }
    inline ListInstancesRequest& WithInstanceFleetType(const InstanceFleetType& value) { SetInstanceFleetType(value); return *this;}
    inline ListInstancesRequest& WithInstanceFleetType(InstanceFleetType&& value) { SetInstanceFleetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStates() const{ return m_instanceStates; }
    inline bool InstanceStatesHasBeenSet() const { return m_instanceStatesHasBeenSet; }
    inline void SetInstanceStates(const Aws::Vector<InstanceState>& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = value; }
    inline void SetInstanceStates(Aws::Vector<InstanceState>&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = std::move(value); }
    inline ListInstancesRequest& WithInstanceStates(const Aws::Vector<InstanceState>& value) { SetInstanceStates(value); return *this;}
    inline ListInstancesRequest& WithInstanceStates(Aws::Vector<InstanceState>&& value) { SetInstanceStates(std::move(value)); return *this;}
    inline ListInstancesRequest& AddInstanceStates(const InstanceState& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(value); return *this; }
    inline ListInstancesRequest& AddInstanceStates(InstanceState&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline ListInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline ListInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline ListInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet = false;

    Aws::String m_instanceGroupId;
    bool m_instanceGroupIdHasBeenSet = false;

    Aws::Vector<InstanceGroupType> m_instanceGroupTypes;
    bool m_instanceGroupTypesHasBeenSet = false;

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet = false;

    InstanceFleetType m_instanceFleetType;
    bool m_instanceFleetTypeHasBeenSet = false;

    Aws::Vector<InstanceState> m_instanceStates;
    bool m_instanceStatesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
