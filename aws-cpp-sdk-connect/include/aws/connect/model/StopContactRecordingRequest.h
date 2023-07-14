﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class AWS_CONNECT_API StopContactRecordingRequest : public ConnectRequest
  {
  public:
    StopContactRecordingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopContactRecording"; }

    Aws::String SerializePayload() const override;


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
    inline StopContactRecordingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StopContactRecordingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StopContactRecordingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline StopContactRecordingRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline StopContactRecordingRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact.</p>
     */
    inline StopContactRecordingRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetInitialContactId() const{ return m_initialContactId; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline bool InitialContactIdHasBeenSet() const { return m_initialContactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetInitialContactId(const Aws::String& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = value; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetInitialContactId(Aws::String&& value) { m_initialContactIdHasBeenSet = true; m_initialContactId = std::move(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetInitialContactId(const char* value) { m_initialContactIdHasBeenSet = true; m_initialContactId.assign(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactRecordingRequest& WithInitialContactId(const Aws::String& value) { SetInitialContactId(value); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactRecordingRequest& WithInitialContactId(Aws::String&& value) { SetInitialContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactRecordingRequest& WithInitialContactId(const char* value) { SetInitialContactId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet;

    Aws::String m_initialContactId;
    bool m_initialContactIdHasBeenSet;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
