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
   * <p>Contains the parameters for CancelSpotFleetRequests.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotFleetRequestsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CancelSpotFleetRequestsRequest : public EC2Request
  {
  public:
    CancelSpotFleetRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSpotFleetRequests"; }

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
    inline CancelSpotFleetRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotFleetRequestIds() const{ return m_spotFleetRequestIds; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline bool SpotFleetRequestIdsHasBeenSet() const { return m_spotFleetRequestIdsHasBeenSet; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline void SetSpotFleetRequestIds(const Aws::Vector<Aws::String>& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds = value; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline void SetSpotFleetRequestIds(Aws::Vector<Aws::String>&& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds = std::move(value); }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline CancelSpotFleetRequestsRequest& WithSpotFleetRequestIds(const Aws::Vector<Aws::String>& value) { SetSpotFleetRequestIds(value); return *this;}

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline CancelSpotFleetRequestsRequest& WithSpotFleetRequestIds(Aws::Vector<Aws::String>&& value) { SetSpotFleetRequestIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline CancelSpotFleetRequestsRequest& AddSpotFleetRequestIds(const Aws::String& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline CancelSpotFleetRequestsRequest& AddSpotFleetRequestIds(Aws::String&& value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the Spot Fleet requests.</p>
     */
    inline CancelSpotFleetRequestsRequest& AddSpotFleetRequestIds(const char* value) { m_spotFleetRequestIdsHasBeenSet = true; m_spotFleetRequestIds.push_back(value); return *this; }


    /**
     * <p>Indicates whether to terminate instances for a Spot Fleet request if it is
     * canceled successfully.</p>
     */
    inline bool GetTerminateInstances() const{ return m_terminateInstances; }

    /**
     * <p>Indicates whether to terminate instances for a Spot Fleet request if it is
     * canceled successfully.</p>
     */
    inline bool TerminateInstancesHasBeenSet() const { return m_terminateInstancesHasBeenSet; }

    /**
     * <p>Indicates whether to terminate instances for a Spot Fleet request if it is
     * canceled successfully.</p>
     */
    inline void SetTerminateInstances(bool value) { m_terminateInstancesHasBeenSet = true; m_terminateInstances = value; }

    /**
     * <p>Indicates whether to terminate instances for a Spot Fleet request if it is
     * canceled successfully.</p>
     */
    inline CancelSpotFleetRequestsRequest& WithTerminateInstances(bool value) { SetTerminateInstances(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_spotFleetRequestIds;
    bool m_spotFleetRequestIdsHasBeenSet;

    bool m_terminateInstances;
    bool m_terminateInstancesHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
