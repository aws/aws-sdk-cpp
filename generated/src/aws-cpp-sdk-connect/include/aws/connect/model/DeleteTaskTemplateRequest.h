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
  class DeleteTaskTemplateRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteTaskTemplateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTaskTemplate"; }

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
    inline DeleteTaskTemplateRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteTaskTemplateRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteTaskTemplateRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier for the task template.</p>
     */
    inline const Aws::String& GetTaskTemplateId() const{ return m_taskTemplateId; }
    inline bool TaskTemplateIdHasBeenSet() const { return m_taskTemplateIdHasBeenSet; }
    inline void SetTaskTemplateId(const Aws::String& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = value; }
    inline void SetTaskTemplateId(Aws::String&& value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId = std::move(value); }
    inline void SetTaskTemplateId(const char* value) { m_taskTemplateIdHasBeenSet = true; m_taskTemplateId.assign(value); }
    inline DeleteTaskTemplateRequest& WithTaskTemplateId(const Aws::String& value) { SetTaskTemplateId(value); return *this;}
    inline DeleteTaskTemplateRequest& WithTaskTemplateId(Aws::String&& value) { SetTaskTemplateId(std::move(value)); return *this;}
    inline DeleteTaskTemplateRequest& WithTaskTemplateId(const char* value) { SetTaskTemplateId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_taskTemplateId;
    bool m_taskTemplateIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
