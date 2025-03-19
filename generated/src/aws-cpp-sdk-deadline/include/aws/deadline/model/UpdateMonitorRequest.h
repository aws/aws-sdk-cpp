/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateMonitorRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateMonitorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitor"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the monitor to update.</p>
     */
    inline const Aws::String& GetMonitorId() const { return m_monitorId; }
    inline bool MonitorIdHasBeenSet() const { return m_monitorIdHasBeenSet; }
    template<typename MonitorIdT = Aws::String>
    void SetMonitorId(MonitorIdT&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::forward<MonitorIdT>(value); }
    template<typename MonitorIdT = Aws::String>
    UpdateMonitorRequest& WithMonitorId(MonitorIdT&& value) { SetMonitorId(std::forward<MonitorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the subdomain to use when forming the monitor URL.</p>
     */
    inline const Aws::String& GetSubdomain() const { return m_subdomain; }
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
    template<typename SubdomainT = Aws::String>
    void SetSubdomain(SubdomainT&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::forward<SubdomainT>(value); }
    template<typename SubdomainT = Aws::String>
    UpdateMonitorRequest& WithSubdomain(SubdomainT&& value) { SetSubdomain(std::forward<SubdomainT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value to use for the monitor's display name.</p>  <p>This
     * field can store any content. Escape or encode this content before displaying it
     * on a webpage or any other system that might interpret the content of this
     * field.</p> 
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateMonitorRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM role to use with the
     * monitor.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateMonitorRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
