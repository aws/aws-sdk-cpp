/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class UpdateContactScheduleRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API UpdateContactScheduleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContactSchedule"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactScheduleRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactScheduleRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline UpdateContactScheduleRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact.</p>
     */
    inline UpdateContactScheduleRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline UpdateContactScheduleRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline UpdateContactScheduleRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline const Aws::Utils::DateTime& GetScheduledTime() const{ return m_scheduledTime; }

    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline bool ScheduledTimeHasBeenSet() const { return m_scheduledTimeHasBeenSet; }

    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline void SetScheduledTime(const Aws::Utils::DateTime& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = value; }

    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline void SetScheduledTime(Aws::Utils::DateTime&& value) { m_scheduledTimeHasBeenSet = true; m_scheduledTime = std::move(value); }

    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline UpdateContactScheduleRequest& WithScheduledTime(const Aws::Utils::DateTime& value) { SetScheduledTime(value); return *this;}

    /**
     * <p>The timestamp, in Unix Epoch seconds format, at which to start running the
     * inbound flow. The scheduled time cannot be in the past. It must be within up to
     * 6 days in future. </p>
     */
    inline UpdateContactScheduleRequest& WithScheduledTime(Aws::Utils::DateTime&& value) { SetScheduledTime(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::Utils::DateTime m_scheduledTime;
    bool m_scheduledTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
