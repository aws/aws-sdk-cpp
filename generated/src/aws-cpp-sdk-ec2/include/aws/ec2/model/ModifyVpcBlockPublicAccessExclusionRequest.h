/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InternetGatewayExclusionMode.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyVpcBlockPublicAccessExclusionRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyVpcBlockPublicAccessExclusionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyVpcBlockPublicAccessExclusion"; }

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
    inline ModifyVpcBlockPublicAccessExclusionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of an exclusion.</p>
     */
    inline const Aws::String& GetExclusionId() const { return m_exclusionId; }
    inline bool ExclusionIdHasBeenSet() const { return m_exclusionIdHasBeenSet; }
    template<typename ExclusionIdT = Aws::String>
    void SetExclusionId(ExclusionIdT&& value) { m_exclusionIdHasBeenSet = true; m_exclusionId = std::forward<ExclusionIdT>(value); }
    template<typename ExclusionIdT = Aws::String>
    ModifyVpcBlockPublicAccessExclusionRequest& WithExclusionId(ExclusionIdT&& value) { SetExclusionId(std::forward<ExclusionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion mode for internet gateway traffic.</p> <ul> <li> <p>
     * <code>allow-bidirectional</code>: Allow all internet traffic to and from the
     * excluded VPCs and subnets.</p> </li> <li> <p> <code>allow-egress</code>: Allow
     * outbound internet traffic from the excluded VPCs and subnets. Block inbound
     * internet traffic to the excluded VPCs and subnets. Only applies when VPC Block
     * Public Access is set to Bidirectional.</p> </li> </ul>
     */
    inline InternetGatewayExclusionMode GetInternetGatewayExclusionMode() const { return m_internetGatewayExclusionMode; }
    inline bool InternetGatewayExclusionModeHasBeenSet() const { return m_internetGatewayExclusionModeHasBeenSet; }
    inline void SetInternetGatewayExclusionMode(InternetGatewayExclusionMode value) { m_internetGatewayExclusionModeHasBeenSet = true; m_internetGatewayExclusionMode = value; }
    inline ModifyVpcBlockPublicAccessExclusionRequest& WithInternetGatewayExclusionMode(InternetGatewayExclusionMode value) { SetInternetGatewayExclusionMode(value); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_exclusionId;
    bool m_exclusionIdHasBeenSet = false;

    InternetGatewayExclusionMode m_internetGatewayExclusionMode{InternetGatewayExclusionMode::NOT_SET};
    bool m_internetGatewayExclusionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
