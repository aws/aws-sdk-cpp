/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PurchaseRequest.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for PurchaseScheduledInstances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PurchaseScheduledInstancesRequest">AWS
   * API Reference</a></p>
   */
  class PurchaseScheduledInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API PurchaseScheduledInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PurchaseScheduledInstances"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that ensures the idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline PurchaseScheduledInstancesRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline PurchaseScheduledInstancesRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline PurchaseScheduledInstancesRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline PurchaseScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The purchase requests.</p>
     */
    inline const Aws::Vector<PurchaseRequest>& GetPurchaseRequests() const{ return m_purchaseRequests; }
    inline bool PurchaseRequestsHasBeenSet() const { return m_purchaseRequestsHasBeenSet; }
    inline void SetPurchaseRequests(const Aws::Vector<PurchaseRequest>& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests = value; }
    inline void SetPurchaseRequests(Aws::Vector<PurchaseRequest>&& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests = std::move(value); }
    inline PurchaseScheduledInstancesRequest& WithPurchaseRequests(const Aws::Vector<PurchaseRequest>& value) { SetPurchaseRequests(value); return *this;}
    inline PurchaseScheduledInstancesRequest& WithPurchaseRequests(Aws::Vector<PurchaseRequest>&& value) { SetPurchaseRequests(std::move(value)); return *this;}
    inline PurchaseScheduledInstancesRequest& AddPurchaseRequests(const PurchaseRequest& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests.push_back(value); return *this; }
    inline PurchaseScheduledInstancesRequest& AddPurchaseRequests(PurchaseRequest&& value) { m_purchaseRequestsHasBeenSet = true; m_purchaseRequests.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<PurchaseRequest> m_purchaseRequests;
    bool m_purchaseRequestsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
