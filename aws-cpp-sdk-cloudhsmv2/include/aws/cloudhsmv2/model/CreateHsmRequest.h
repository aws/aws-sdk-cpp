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
#include <aws/cloudhsmv2/CloudHSMV2_EXPORTS.h>
#include <aws/cloudhsmv2/CloudHSMV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

  /**
   */
  class AWS_CLOUDHSMV2_API CreateHsmRequest : public CloudHSMV2Request
  {
  public:
    CreateHsmRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHsm"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetClusterId() const{ return m_clusterId; }

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline bool ClusterIdHasBeenSet() const { return m_clusterIdHasBeenSet; }

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const Aws::String& value) { m_clusterIdHasBeenSet = true; m_clusterId = value; }

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(Aws::String&& value) { m_clusterIdHasBeenSet = true; m_clusterId = std::move(value); }

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline void SetClusterId(const char* value) { m_clusterIdHasBeenSet = true; m_clusterId.assign(value); }

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithClusterId(const Aws::String& value) { SetClusterId(value); return *this;}

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithClusterId(Aws::String&& value) { SetClusterId(std::move(value)); return *this;}

    /**
     * <p>The identifier (ID) of the HSM's cluster. To find the cluster ID, use
     * <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithClusterId(const char* value) { SetClusterId(value); return *this;}


    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone where you are creating the HSM. To find the cluster's
     * Availability Zones, use <a>DescribeClusters</a>.</p>
     */
    inline CreateHsmRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline CreateHsmRequest& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline CreateHsmRequest& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The HSM's IP address. If you specify an IP address, use an available address
     * from the subnet that maps to the Availability Zone where you are creating the
     * HSM. If you don't specify an IP address, one is chosen for you from that
     * subnet.</p>
     */
    inline CreateHsmRequest& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}

  private:

    Aws::String m_clusterId;
    bool m_clusterIdHasBeenSet;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet;

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet;
  };

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
