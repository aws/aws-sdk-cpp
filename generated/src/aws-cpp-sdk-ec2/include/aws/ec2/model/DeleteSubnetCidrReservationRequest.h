/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
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
  class DeleteSubnetCidrReservationRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteSubnetCidrReservationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubnetCidrReservation"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the subnet CIDR reservation.</p>
     */
    inline const Aws::String& GetSubnetCidrReservationId() const { return m_subnetCidrReservationId; }
    inline bool SubnetCidrReservationIdHasBeenSet() const { return m_subnetCidrReservationIdHasBeenSet; }
    template<typename SubnetCidrReservationIdT = Aws::String>
    void SetSubnetCidrReservationId(SubnetCidrReservationIdT&& value) { m_subnetCidrReservationIdHasBeenSet = true; m_subnetCidrReservationId = std::forward<SubnetCidrReservationIdT>(value); }
    template<typename SubnetCidrReservationIdT = Aws::String>
    DeleteSubnetCidrReservationRequest& WithSubnetCidrReservationId(SubnetCidrReservationIdT&& value) { SetSubnetCidrReservationId(std::forward<SubnetCidrReservationIdT>(value)); return *this;}
    ///@}

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
    inline DeleteSubnetCidrReservationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_subnetCidrReservationId;
    bool m_subnetCidrReservationIdHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
