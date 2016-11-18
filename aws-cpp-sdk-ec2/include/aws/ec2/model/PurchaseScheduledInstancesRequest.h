﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PurchaseRequest.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for PurchaseScheduledInstances.</p>
   */
  class AWS_EC2_API PurchaseScheduledInstancesRequest : public EC2Request
  {
  public:
    PurchaseScheduledInstancesRequest();
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
    inline PurchaseScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseScheduledInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseScheduledInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline PurchaseScheduledInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

    /**
     * <p>One or more purchase requests.</p>
     */
    inline const Aws::Vector<PurchaseRequest>& GetPurchaseRequests() const{ return m_purchaseRequests; }

    /**
     * <p>One or more purchase requests.</p>
     */
    inline void SetPurchaseRequests(const Aws::Vector<PurchaseRequest>& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests = value; }

    /**
     * <p>One or more purchase requests.</p>
     */
    inline void SetPurchaseRequests(Aws::Vector<PurchaseRequest>&& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests = value; }

    /**
     * <p>One or more purchase requests.</p>
     */
    inline PurchaseScheduledInstancesRequest& WithPurchaseRequests(const Aws::Vector<PurchaseRequest>& value) { SetPurchaseRequests(value); return *this;}

    /**
     * <p>One or more purchase requests.</p>
     */
    inline PurchaseScheduledInstancesRequest& WithPurchaseRequests(Aws::Vector<PurchaseRequest>&& value) { SetPurchaseRequests(value); return *this;}

    /**
     * <p>One or more purchase requests.</p>
     */
    inline PurchaseScheduledInstancesRequest& AddPurchaseRequests(const PurchaseRequest& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests.push_back(value); return *this; }

    /**
     * <p>One or more purchase requests.</p>
     */
    inline PurchaseScheduledInstancesRequest& AddPurchaseRequests(PurchaseRequest&& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
    Aws::Vector<PurchaseRequest> m_purchaseRequests;
    bool m_purchaseRequestsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
