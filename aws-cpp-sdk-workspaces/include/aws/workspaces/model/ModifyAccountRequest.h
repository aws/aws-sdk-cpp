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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/WorkSpacesRequest.h>
#include <aws/workspaces/model/DedicatedTenancySupportEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace WorkSpaces
{
namespace Model
{

  /**
   */
  class AWS_WORKSPACES_API ModifyAccountRequest : public WorkSpacesRequest
  {
  public:
    ModifyAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyAccount"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The status of BYOL.</p>
     */
    inline const DedicatedTenancySupportEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }

    /**
     * <p>The status of BYOL.</p>
     */
    inline bool DedicatedTenancySupportHasBeenSet() const { return m_dedicatedTenancySupportHasBeenSet; }

    /**
     * <p>The status of BYOL.</p>
     */
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportEnum& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = value; }

    /**
     * <p>The status of BYOL.</p>
     */
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportEnum&& value) { m_dedicatedTenancySupportHasBeenSet = true; m_dedicatedTenancySupport = std::move(value); }

    /**
     * <p>The status of BYOL.</p>
     */
    inline ModifyAccountRequest& WithDedicatedTenancySupport(const DedicatedTenancySupportEnum& value) { SetDedicatedTenancySupport(value); return *this;}

    /**
     * <p>The status of BYOL.</p>
     */
    inline ModifyAccountRequest& WithDedicatedTenancySupport(DedicatedTenancySupportEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}


    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline bool DedicatedTenancyManagementCidrRangeHasBeenSet() const { return m_dedicatedTenancyManagementCidrRangeHasBeenSet; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = value; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange = std::move(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRangeHasBeenSet = true; m_dedicatedTenancyManagementCidrRange.assign(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, for the management
     * network interface. Specify an IP address range that is compatible with your
     * network and in CIDR notation (that is, specify the range as an IPv4 CIDR block).
     * The CIDR block size must be /16 (for example, 203.0.113.25/16). It must also be
     * specified as available by the <code>ListAvailableManagementCidrRanges</code>
     * operation.</p>
     */
    inline ModifyAccountRequest& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

  private:

    DedicatedTenancySupportEnum m_dedicatedTenancySupport;
    bool m_dedicatedTenancySupportHasBeenSet;

    Aws::String m_dedicatedTenancyManagementCidrRange;
    bool m_dedicatedTenancyManagementCidrRangeHasBeenSet;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
