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


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline StopContactStreamingRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline StopContactStreamingRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline StopContactStreamingRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the contact. This is the identifier of the contact that is
     * associated with the first interaction with the contact center.</p>
     */
    inline const Aws::String& GetContactId() const{ return m_contactId; }
    inline bool ContactIdHasBeenSet() const { return m_contactIdHasBeenSet; }
    inline void SetContactId(const Aws::String& value) { m_contactIdHasBeenSet = true; m_contactId = value; }
    inline void SetContactId(Aws::String&& value) { m_contactIdHasBeenSet = true; m_contactId = std::move(value); }
    inline void SetContactId(const char* value) { m_contactIdHasBeenSet = true; m_contactId.assign(value); }
    inline StopContactStreamingRequest& WithContactId(const Aws::String& value) { SetContactId(value); return *this;}
    inline StopContactStreamingRequest& WithContactId(Aws::String&& value) { SetContactId(std::move(value)); return *this;}
    inline StopContactStreamingRequest& WithContactId(const char* value) { SetContactId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the streaming configuration enabled. </p>
     */
    inline const Aws::String& GetStreamingId() const{ return m_streamingId; }
    inline bool StreamingIdHasBeenSet() const { return m_streamingIdHasBeenSet; }
    inline void SetStreamingId(const Aws::String& value) { m_streamingIdHasBeenSet = true; m_streamingId = value; }
    inline void SetStreamingId(Aws::String&& value) { m_streamingIdHasBeenSet = true; m_streamingId = std::move(value); }
    inline void SetStreamingId(const char* value) { m_streamingIdHasBeenSet = true; m_streamingId.assign(value); }
    inline StopContactStreamingRequest& WithStreamingId(const Aws::String& value) { SetStreamingId(value); return *this;}
    inline StopContactStreamingRequest& WithStreamingId(Aws::String&& value) { SetStreamingId(std::move(value)); return *this;}
    inline StopContactStreamingRequest& WithStreamingId(const char* value) { SetStreamingId(value); return *this;}
    ///@}
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
