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
   */
  class DeleteVpcEndpointServiceConfigurationsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteVpcEndpointServiceConfigurationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcEndpointServiceConfigurations"; }

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceIds() const{ return m_serviceIds; }
    inline bool ServiceIdsHasBeenSet() const { return m_serviceIdsHasBeenSet; }
    inline void SetServiceIds(const Aws::Vector<Aws::String>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }
    inline void SetServiceIds(Aws::Vector<Aws::String>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithServiceIds(const Aws::Vector<Aws::String>& value) { SetServiceIds(value); return *this;}
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithServiceIds(Aws::Vector<Aws::String>&& value) { SetServiceIds(std::move(value)); return *this;}
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(const Aws::String& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(Aws::String&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(const char* value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Aws::String> m_serviceIds;
    bool m_serviceIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
