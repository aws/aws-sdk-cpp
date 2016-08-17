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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for CancelSpotInstanceRequests.</p>
   */
  class AWS_EC2_API CancelSpotInstanceRequestsRequest : public EC2Request
  {
  public:
    CancelSpotInstanceRequestsRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CancelSpotInstanceRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotInstanceRequestIds() const{ return m_spotInstanceRequestIds; }

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline void SetSpotInstanceRequestIds(const Aws::Vector<Aws::String>& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = value; }

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline void SetSpotInstanceRequestIds(Aws::Vector<Aws::String>&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = value; }

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline CancelSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(const Aws::Vector<Aws::String>& value) { SetSpotInstanceRequestIds(value); return *this;}

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline CancelSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(Aws::Vector<Aws::String>&& value) { SetSpotInstanceRequestIds(value); return *this;}

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline CancelSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(const Aws::String& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(value); return *this; }

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline CancelSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(Aws::String&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(value); return *this; }

    /**
     * <p>One or more Spot instance request IDs.</p>
     */
    inline CancelSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(const char* value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_spotInstanceRequestIds;
    bool m_spotInstanceRequestIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
