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
    AWS_EMR_API ListInstancesRequest() = default;

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
    inline const Aws::String& GetClusterId() const { return m_clusterId; }
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }
    template<typename ClusterIdT = Aws::String>
    void SetClusterId(ClusterIdT&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::forward<ClusterIdT>(value); }
    template<typename ClusterIdT = Aws::String>
    ListInstancesRequest& WithClusterId(ClusterIdT&& value) { SetClusterId(std::forward<ClusterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the instance group for which to list the instances.</p>
     */
    inline const Aws::String& GetInstanceGroupId() const { return m_instanceGroupId; }
    inline bool InstanceGroupIdHasBeenSet() const { return m_instanceGroupIdHasBeenSet; }
    template<typename InstanceGroupIdT = Aws::String>
    void SetInstanceGroupId(InstanceGroupIdT&& value) { m_instanceGroupIdHasBeenSet = true; m_instanceGroupId = std::forward<InstanceGroupIdT>(value); }
    template<typename InstanceGroupIdT = Aws::String>
    ListInstancesRequest& WithInstanceGroupId(InstanceGroupIdT&& value) { SetInstanceGroupId(std::forward<InstanceGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of instance group for which to list the instances.</p>
     */
    inline const Aws::Vector<InstanceGroupType>& GetInstanceGroupTypes() const { return m_instanceGroupTypes; }
    inline bool InstanceGroupTypesHasBeenSet() const { return m_instanceGroupTypesHasBeenSet; }
    template<typename InstanceGroupTypesT = Aws::Vector<InstanceGroupType>>
    void SetInstanceGroupTypes(InstanceGroupTypesT&& value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes = std::forward<InstanceGroupTypesT>(value); }
    template<typename InstanceGroupTypesT = Aws::Vector<InstanceGroupType>>
    ListInstancesRequest& WithInstanceGroupTypes(InstanceGroupTypesT&& value) { SetInstanceGroupTypes(std::forward<InstanceGroupTypesT>(value)); return *this;}
    inline ListInstancesRequest& AddInstanceGroupTypes(InstanceGroupType value) { m_instanceGroupTypesHasBeenSet = true; m_instanceGroupTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const { return m_instanceFleetId; }
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }
    template<typename InstanceFleetIdT = Aws::String>
    void SetInstanceFleetId(InstanceFleetIdT&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::forward<InstanceFleetIdT>(value); }
    template<typename InstanceFleetIdT = Aws::String>
    ListInstancesRequest& WithInstanceFleetId(InstanceFleetIdT&& value) { SetInstanceFleetId(std::forward<InstanceFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the instance fleet. For example MASTER, CORE, or TASK.</p>
     */
    inline InstanceFleetType GetInstanceFleetType() const { return m_instanceFleetType; }
    inline bool InstanceFleetTypeHasBeenSet() const { return m_instanceFleetTypeHasBeenSet; }
    inline void SetInstanceFleetType(InstanceFleetType value) { m_instanceFleetTypeHasBeenSet = true; m_instanceFleetType = value; }
    inline ListInstancesRequest& WithInstanceFleetType(InstanceFleetType value) { SetInstanceFleetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of instance states that will filter the instances returned with this
     * request.</p>
     */
    inline const Aws::Vector<InstanceState>& GetInstanceStates() const { return m_instanceStates; }
    inline bool InstanceStatesHasBeenSet() const { return m_instanceStatesHasBeenSet; }
    template<typename InstanceStatesT = Aws::Vector<InstanceState>>
    void SetInstanceStates(InstanceStatesT&& value) { m_instanceStatesHasBeenSet = true; m_instanceStates = std::forward<InstanceStatesT>(value); }
    template<typename InstanceStatesT = Aws::Vector<InstanceState>>
    ListInstancesRequest& WithInstanceStates(InstanceStatesT&& value) { SetInstanceStates(std::forward<InstanceStatesT>(value)); return *this;}
    inline ListInstancesRequest& AddInstanceStates(InstanceState value) { m_instanceStatesHasBeenSet = true; m_instanceStates.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListInstancesRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
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

    InstanceFleetType m_instanceFleetType{InstanceFleetType::NOT_SET};
    bool m_instanceFleetTypeHasBeenSet = false;

    Aws::Vector<InstanceState> m_instanceStates;
    bool m_instanceStatesHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
