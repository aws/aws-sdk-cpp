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
  class AWS_EC2_API ModifyInstanceEventStartTimeRequest : public EC2Request
  {
  public:
    ModifyInstanceEventStartTimeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyInstanceEventStartTime"; }

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
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

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
    inline ModifyInstanceEventStartTimeRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance with the scheduled event.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline const Aws::String& GetInstanceEventId() const{ return m_instanceEventId; }

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline bool InstanceEventIdHasBeenSet() const { return m_instanceEventIdHasBeenSet; }

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline void SetInstanceEventId(const Aws::String& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = value; }

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline void SetInstanceEventId(Aws::String&& value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId = std::move(value); }

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline void SetInstanceEventId(const char* value) { m_instanceEventIdHasBeenSet = true; m_instanceEventId.assign(value); }

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceEventId(const Aws::String& value) { SetInstanceEventId(value); return *this;}

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceEventId(Aws::String&& value) { SetInstanceEventId(std::move(value)); return *this;}

    /**
     * <p>The ID of the event whose date and time you are modifying.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithInstanceEventId(const char* value) { SetInstanceEventId(value); return *this;}


    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline const Aws::Utils::DateTime& GetNotBefore() const{ return m_notBefore; }

    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }

    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline void SetNotBefore(const Aws::Utils::DateTime& value) { m_notBeforeHasBeenSet = true; m_notBefore = value; }

    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline void SetNotBefore(Aws::Utils::DateTime&& value) { m_notBeforeHasBeenSet = true; m_notBefore = std::move(value); }

    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithNotBefore(const Aws::Utils::DateTime& value) { SetNotBefore(value); return *this;}

    /**
     * <p>The new date and time when the event will take place.</p>
     */
    inline ModifyInstanceEventStartTimeRequest& WithNotBefore(Aws::Utils::DateTime&& value) { SetNotBefore(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceEventId;
    bool m_instanceEventIdHasBeenSet;

    Aws::Utils::DateTime m_notBefore;
    bool m_notBeforeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
