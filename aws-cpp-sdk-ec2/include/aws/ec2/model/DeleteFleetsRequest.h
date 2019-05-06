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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DeleteFleetsRequest : public EC2Request
  {
  public:
    DeleteFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteFleets"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = value; }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::move(value); }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline DeleteFleetsRequest& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline DeleteFleetsRequest& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline DeleteFleetsRequest& AddFleetIds(const Aws::String& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline DeleteFleetsRequest& AddFleetIds(Aws::String&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the EC2 Fleets.</p>
     */
    inline DeleteFleetsRequest& AddFleetIds(const char* value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether to terminate instances for an EC2 Fleet if it is deleted
     * successfully.</p>
     */
    inline bool GetTerminateInstances() const{ return m_terminateInstances; }

    /**
     * <p>Indicates whether to terminate instances for an EC2 Fleet if it is deleted
     * successfully.</p>
     */
    inline bool TerminateInstancesHasBeenSet() const { return m_terminateInstancesHasBeenSet; }

    /**
     * <p>Indicates whether to terminate instances for an EC2 Fleet if it is deleted
     * successfully.</p>
     */
    inline void SetTerminateInstances(bool value) { m_terminateInstancesHasBeenSet = true; m_terminateInstances = value; }

    /**
     * <p>Indicates whether to terminate instances for an EC2 Fleet if it is deleted
     * successfully.</p>
     */
    inline DeleteFleetsRequest& WithTerminateInstances(bool value) { SetTerminateInstances(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet;

    bool m_terminateInstances;
    bool m_terminateInstancesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
