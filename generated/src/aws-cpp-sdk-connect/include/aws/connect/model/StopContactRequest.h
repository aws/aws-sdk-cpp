/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/DisconnectReason.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class StopContactRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StopContactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopContact"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the contact.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The ID of the contact.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The ID of the contact.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The ID of the contact.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The ID of the contact.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The ID of the contact.</p>
     */
    inline StopContactRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The ID of the contact.</p>
     */
    inline StopContactRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The ID of the contact.</p>
     */
    inline StopContactRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StopContactRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StopContactRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline StopContactRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline const DisconnectReason& GetDisconnectReason() const{ return m_disconnectReason; }

    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline bool DisconnectReasonHasBeenSet() const { return m_disconnectReasonHasBeenSet; }

    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline void SetDisconnectReason(const DisconnectReason& value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = value; }

    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline void SetDisconnectReason(DisconnectReason&& value) { m_disconnectReasonHasBeenSet = true; m_disconnectReason = std::move(value); }

    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline StopContactRequest& WithDisconnectReason(const DisconnectReason& value) { SetDisconnectReason(value); return *this;}

    /**
     * <p>The reason a contact can be disconnected. Only Amazon Connect outbound
     * campaigns can provide this field.</p>
     */
    inline StopContactRequest& WithDisconnectReason(DisconnectReason&& value) { SetDisconnectReason(std::move(value)); return *this;}

  private:

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    DisconnectReason m_disconnectReason;
    bool m_disconnectReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
