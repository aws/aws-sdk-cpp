﻿/**
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
    AWS_DEADLINE_API UpdateMonitorRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMonitor"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The new value to use for the monitor's display name.</p>
     */
    inline const Aws::String& GetDisplayName() const{ return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    inline void SetDisplayName(const Aws::String& value) { m_displayNameHasBeenSet = true; m_displayName = value; }
    inline void SetDisplayName(Aws::String&& value) { m_displayNameHasBeenSet = true; m_displayName = std::move(value); }
    inline void SetDisplayName(const char* value) { m_displayNameHasBeenSet = true; m_displayName.assign(value); }
    inline UpdateMonitorRequest& WithDisplayName(const Aws::String& value) { SetDisplayName(value); return *this;}
    inline UpdateMonitorRequest& WithDisplayName(Aws::String&& value) { SetDisplayName(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithDisplayName(const char* value) { SetDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the monitor to update.</p>
     */
    inline const Aws::String& GetMonitorId() const{ return m_monitorId; }
    inline bool MonitorIdHasBeenSet() const { return m_monitorIdHasBeenSet; }
    inline void SetMonitorId(const Aws::String& value) { m_monitorIdHasBeenSet = true; m_monitorId = value; }
    inline void SetMonitorId(Aws::String&& value) { m_monitorIdHasBeenSet = true; m_monitorId = std::move(value); }
    inline void SetMonitorId(const char* value) { m_monitorIdHasBeenSet = true; m_monitorId.assign(value); }
    inline UpdateMonitorRequest& WithMonitorId(const Aws::String& value) { SetMonitorId(value); return *this;}
    inline UpdateMonitorRequest& WithMonitorId(Aws::String&& value) { SetMonitorId(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithMonitorId(const char* value) { SetMonitorId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the new IAM role to use with the
     * monitor.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateMonitorRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateMonitorRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value of the subdomain to use when forming the monitor URL.</p>
     */
    inline const Aws::String& GetSubdomain() const{ return m_subdomain; }
    inline bool SubdomainHasBeenSet() const { return m_subdomainHasBeenSet; }
    inline void SetSubdomain(const Aws::String& value) { m_subdomainHasBeenSet = true; m_subdomain = value; }
    inline void SetSubdomain(Aws::String&& value) { m_subdomainHasBeenSet = true; m_subdomain = std::move(value); }
    inline void SetSubdomain(const char* value) { m_subdomainHasBeenSet = true; m_subdomain.assign(value); }
    inline UpdateMonitorRequest& WithSubdomain(const Aws::String& value) { SetSubdomain(value); return *this;}
    inline UpdateMonitorRequest& WithSubdomain(Aws::String&& value) { SetSubdomain(std::move(value)); return *this;}
    inline UpdateMonitorRequest& WithSubdomain(const char* value) { SetSubdomain(value); return *this;}
    ///@}
  private:

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::String m_monitorId;
    bool m_monitorIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_subdomain;
    bool m_subdomainHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
