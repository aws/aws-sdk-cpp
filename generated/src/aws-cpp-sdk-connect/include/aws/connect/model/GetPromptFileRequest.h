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
  class GetPromptFileRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API GetPromptFileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetPromptFile"; }

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
    inline GetPromptFileRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline GetPromptFileRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline GetPromptFileRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the prompt.</p>
     */
    inline const Aws::String& GetPromptId() const{ return m_promptId; }
    inline bool PromptIdHasBeenSet() const { return m_promptIdHasBeenSet; }
    inline void SetPromptId(const Aws::String& value) { m_promptIdHasBeenSet = true; m_promptId = value; }
    inline void SetPromptId(Aws::String&& value) { m_promptIdHasBeenSet = true; m_promptId = std::move(value); }
    inline void SetPromptId(const char* value) { m_promptIdHasBeenSet = true; m_promptId.assign(value); }
    inline GetPromptFileRequest& WithPromptId(const Aws::String& value) { SetPromptId(value); return *this;}
    inline GetPromptFileRequest& WithPromptId(Aws::String&& value) { SetPromptId(std::move(value)); return *this;}
    inline GetPromptFileRequest& WithPromptId(const char* value) { SetPromptId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_promptId;
    bool m_promptIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
