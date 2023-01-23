/**
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
  class StopContactStreamingRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API StopContactStreamingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopContactStreaming"; }

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
    inline StopContactStreamingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StopContactStreamingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline StopContactStreamingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactStreamingRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactStreamingRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline StopContactStreamingRequest& WithContactId(const char* value) { SetContactId(value); return *this;}


    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline const Aws::String& GetStreamingId() const{ return m_streamingId; }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline bool StreamingIdHasBeenSet() const { return m_streamingIdHasBeenSet; }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(const Aws::String& value) { m_streamingIdHasBeenSet = true; m_streamingId = value; }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(Aws::String&& value) { m_streamingIdHasBeenSet = true; m_streamingId = std::move(value); }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline void SetStreamingId(const char* value) { m_streamingIdHasBeenSet = true; m_streamingId.assign(value); }

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StopContactStreamingRequest& WithStreamingId(const Aws::String& value) { SetStreamingId(value); return *this;}

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StopContactStreamingRequest& WithStreamingId(Aws::String&& value) { SetStreamingId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline StopContactStreamingRequest& WithStreamingId(const char* value) { SetStreamingId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_contactId;
    bool m_contactIdHasBeenSet = false;

    Aws::String m_streamingId;
    bool m_streamingIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
