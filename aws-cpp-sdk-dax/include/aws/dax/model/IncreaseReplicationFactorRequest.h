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
  class AWS_DAX_API IncreaseReplicationFactorRequest : public DAXRequest
  {
  public:
    IncreaseReplicationFactorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IncreaseReplicationFactor"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline IncreaseReplicationFactorRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline IncreaseReplicationFactorRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of the DAX cluster that will receive additional nodes.</p>
     */
    inline IncreaseReplicationFactorRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline int GetNewReplicationFactor() const{ return m_newReplicationFactor; }

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline bool NewReplicationFactorHasBeenSet() const { return m_newReplicationFactorHasBeenSet; }

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline void SetNewReplicationFactor(int value) { m_newReplicationFactorHasBeenSet = true; m_newReplicationFactor = value; }

    /**
     * <p>The new number of nodes for the DAX cluster.</p>
     */
    inline IncreaseReplicationFactorRequest& WithNewReplicationFactor(int value) { SetNewReplicationFactor(value); return *this;}


    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline IncreaseReplicationFactorRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline IncreaseReplicationFactorRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline IncreaseReplicationFactorRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline IncreaseReplicationFactorRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>The Availability Zones (AZs) in which the cluster nodes will be created. All
     * nodes belonging to the cluster are placed in these Availability Zones. Use this
     * parameter if you want to distribute the nodes across multiple AZs.</p>
     */
    inline IncreaseReplicationFactorRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet;

    int m_newReplicationFactor;
    bool m_newReplicationFactorHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;
  };

} // namespace Model
} // namespace DAX
} // namespace Aws
