/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ModifyAvailabilityZoneOptInStatus.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyAvailabilityZoneGroupRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyAvailabilityZoneGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyAvailabilityZoneGroup"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Availability Zone group, Local Zone group, or Wavelength Zone
     * group.</p>
     */
    inline const Aws::String& GetGroupName() const{ return m_groupName; }
    inline bool GroupNameHasBeenSet() const { return m_groupNameHasBeenSet; }
    inline void SetGroupName(const Aws::String& value) { m_groupNameHasBeenSet = true; m_groupName = value; }
    inline void SetGroupName(Aws::String&& value) { m_groupNameHasBeenSet = true; m_groupName = std::move(value); }
    inline void SetGroupName(const char* value) { m_groupNameHasBeenSet = true; m_groupName.assign(value); }
    inline ModifyAvailabilityZoneGroupRequest& WithGroupName(const Aws::String& value) { SetGroupName(value); return *this;}
    inline ModifyAvailabilityZoneGroupRequest& WithGroupName(Aws::String&& value) { SetGroupName(std::move(value)); return *this;}
    inline ModifyAvailabilityZoneGroupRequest& WithGroupName(const char* value) { SetGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to opt in to the zone group. The only valid value is
     * <code>opted-in</code>. You must contact Amazon Web Services Support to opt out
     * of a Local Zone or Wavelength Zone group.</p>
     */
    inline const ModifyAvailabilityZoneOptInStatus& GetOptInStatus() const{ return m_optInStatus; }
    inline bool OptInStatusHasBeenSet() const { return m_optInStatusHasBeenSet; }
    inline void SetOptInStatus(const ModifyAvailabilityZoneOptInStatus& value) { m_optInStatusHasBeenSet = true; m_optInStatus = value; }
    inline void SetOptInStatus(ModifyAvailabilityZoneOptInStatus&& value) { m_optInStatusHasBeenSet = true; m_optInStatus = std::move(value); }
    inline ModifyAvailabilityZoneGroupRequest& WithOptInStatus(const ModifyAvailabilityZoneOptInStatus& value) { SetOptInStatus(value); return *this;}
    inline ModifyAvailabilityZoneGroupRequest& WithOptInStatus(ModifyAvailabilityZoneOptInStatus&& value) { SetOptInStatus(std::move(value)); return *this;}
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
    inline ModifyAvailabilityZoneGroupRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_groupName;
    bool m_groupNameHasBeenSet = false;

    ModifyAvailabilityZoneOptInStatus m_optInStatus;
    bool m_optInStatusHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
