/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains the parameters for CancelSpotInstanceRequests.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CancelSpotInstanceRequestsRequest">AWS
   * API Reference</a></p>
   */
  class CancelSpotInstanceRequestsRequest : public EC2Request
  {
  public:
    AWS_EC2_API CancelSpotInstanceRequestsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSpotInstanceRequests"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CancelSpotInstanceRequestsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the Spot Instance requests.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSpotInstanceRequestIds() const { return m_spotInstanceRequestIds; }
    inline bool SpotInstanceRequestIdsHasBeenSet() const { return m_spotInstanceRequestIdsHasBeenSet; }
    template<typename SpotInstanceRequestIdsT = Aws::Vector<Aws::String>>
    void SetSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds = std::forward<SpotInstanceRequestIdsT>(value); }
    template<typename SpotInstanceRequestIdsT = Aws::Vector<Aws::String>>
    CancelSpotInstanceRequestsRequest& WithSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { SetSpotInstanceRequestIds(std::forward<SpotInstanceRequestIdsT>(value)); return *this;}
    template<typename SpotInstanceRequestIdsT = Aws::String>
    CancelSpotInstanceRequestsRequest& AddSpotInstanceRequestIds(SpotInstanceRequestIdsT&& value) { m_spotInstanceRequestIdsHasBeenSet = true; m_spotInstanceRequestIds.emplace_back(std::forward<SpotInstanceRequestIdsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_spotInstanceRequestIds;
    bool m_spotInstanceRequestIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
