/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyInstanceEventStartTimeRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyInstanceEventStartTimeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceEventStartTime"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyInstanceEventStartTimeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    ModifyInstanceEventStartTimeRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline const Aws::String& GetInstanceEventId() const { return m_instanceEventId; }
    inline bool InstanceEventIdHasBeenSet() const { return m_instanceEventIdHasBeenSet; }
    template<typename InstanceEventIdT = Aws::String>
    void SetInstanceEventId(InstanceEventIdT&& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = std::forward<InstanceEventIdT>(value); }
    template<typename InstanceEventIdT = Aws::String>
    ModifyInstanceEventStartTimeRequest& WithInstanceEventId(InstanceEventIdT&& value) { SetInstanceEventId(std::forward<InstanceEventIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const { return m_notBefore; }
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    void SetNotBefore(NotBeforeT&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::forward<NotBeforeT>(value); }
    template<typename NotBeforeT = Aws::Utils::DateTime>
    ModifyInstanceEventStartTimeRequest& WithNotBefore(NotBeforeT&& value) { SetNotBefore(std::forward<NotBeforeT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceEventId;
    bool m_instanceEventIdHasBeenSet = false;

    Aws::Utils::DateTime m_notBefore{};
    bool m_notBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
