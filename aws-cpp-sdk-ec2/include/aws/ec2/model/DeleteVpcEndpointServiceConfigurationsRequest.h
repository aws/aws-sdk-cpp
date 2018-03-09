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
  class AWS_EC2_API DeleteVpcEndpointServiceConfigurationsRequest : public EC2Request
  {
  public:
    DeleteVpcEndpointServiceConfigurationsRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteVpcEndpointServiceConfigurations"; }

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The IDs of one or more services.</p>
     */
    inline const Aws::Vector<Aws::String>& GetServiceIds() const{ return m_serviceIds; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline void SetServiceIds(const Aws::Vector<Aws::String>& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = value; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline void SetServiceIds(Aws::Vector<Aws::String>&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds = std::move(value); }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithServiceIds(const Aws::Vector<Aws::String>& value) { SetServiceIds(value); return *this;}

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& WithServiceIds(Aws::Vector<Aws::String>&& value) { SetServiceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(const Aws::String& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(Aws::String&& value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of one or more services.</p>
     */
    inline DeleteVpcEndpointServiceConfigurationsRequest& AddServiceIds(const char* value) { m_serviceIdsHasBeenSet = true; m_serviceIds.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Aws::String> m_serviceIds;
    bool m_serviceIdsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
