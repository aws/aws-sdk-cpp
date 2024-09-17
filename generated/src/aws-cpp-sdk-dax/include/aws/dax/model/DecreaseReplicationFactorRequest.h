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
    AWS_DAX_API DecreaseReplicationFactorRequest();

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
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline DecreaseReplicationFactorRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline DecreaseReplicationFactorRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline DecreaseReplicationFactorRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline int GetNewReplicationFactor() const{ return m_newReplicationFactor; }
    inline bool NewReplicationFactorHasBeenSet() const { return m_newReplicationFactorHasBeenSet; }
    inline void SetNewReplicationFactor(int value) { m_newReplicationFactorHasBeenSet = true; m_newReplicationFactor = value; }
    inline DecreaseReplicationFactorRequest& WithNewReplicationFactor(int value) { SetNewReplicationFactor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone(s) from which to remove nodes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }
    inline DecreaseReplicationFactorRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}
    inline DecreaseReplicationFactorRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }
    inline DecreaseReplicationFactorRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of the nodes to be removed from the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeIdsToRemove() const{ return m_nodeIdsToRemove; }
    inline bool NodeIdsToRemoveHasBeenSet() const { return m_nodeIdsToRemoveHasBeenSet; }
    inline void SetNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = value; }
    inline void SetNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove = std::move(value); }
    inline DecreaseReplicationFactorRequest& WithNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetNodeIdsToRemove(value); return *this;}
    inline DecreaseReplicationFactorRequest& WithNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetNodeIdsToRemove(std::move(value)); return *this;}
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(const Aws::String& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(Aws::String&& value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(std::move(value)); return *this; }
    inline DecreaseReplicationFactorRequest& AddNodeIdsToRemove(const char* value) { m_nodeIdsToRemoveHasBeenSet = true; m_nodeIdsToRemove.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    int m_newReplicationFactor;
    bool m_newReplicationFactorHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIdsToRemove;
    bool m_nodeIdsToRemoveHasBeenSet = false;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
