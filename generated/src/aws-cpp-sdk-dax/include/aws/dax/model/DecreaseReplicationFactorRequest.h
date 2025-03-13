/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dax/DAX_EXPORTS.h>
#include <aws/dax/DAXRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DAX
{
namespace Model
{

  /**
   */
  class DecreaseReplicationFactorRequest : public DAXRequest
  {
  public:
    AWS_DAX_API DecreaseReplicationFactorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DecreaseReplicationFactor"; }

    AWS_DAX_API Aws::String SerializePayload() const override;

    AWS_DAX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the DAX cluster from which you want to remove nodes.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    DecreaseReplicationFactorRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline int GetNewReplicationFactor() const { return m_newReplicationFactor; }
    inline bool NewReplicationFactorHasBeenSet() const { return m_newReplicationFactorHasBeenSet; }
    inline void SetNewReplicationFactor(int value) { m_newReplicationFactorHasBeenSet = true; m_newReplicationFactor = value; }
    inline DecreaseReplicationFactorRequest& WithNewReplicationFactor(int value) { SetNewReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    DecreaseReplicationFactorRequest& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    DecreaseReplicationFactorRequest& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const { return m_nodeIdsToRemove; }
    inline bool NodeIdsToRemoveHasBeenSet() const { return m_nodeIdsToRemoveHasBeenSet; }
    template<typename NodeIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetNodeIdsToRemove(NodeIdsToRemoveT&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::forward<NodeIdsToRemoveT>(value); }
    template<typename NodeIdsToRemoveT = Aws::Vector<Aws::String>>
    DecreaseReplicationFactorRequest& WithNodeIdsToRemove(NodeIdsToRemoveT&& value) { SetNodeIdsToRemove(std::forward<NodeIdsToRemoveT>(value)); return *this;}
    template<typename NodeIdsToRemoveT = Aws::String>
    DecreaseReplicationFactorRequest& AddNodeIdsToRemove(NodeIdsToRemoveT&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.emplace_back(std::forward<NodeIdsToRemoveT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    int m_newReplicationFactor{0};
    bool m_newReplicationFactorHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIdsToRemove;
    bool m_nodeIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
