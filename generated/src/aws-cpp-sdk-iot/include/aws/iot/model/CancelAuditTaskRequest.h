/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CancelAuditTaskRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CancelAuditTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelAuditTask"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskIdHasBeenSet = true; m_taskId = value; }

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskIdHasBeenSet = true; m_taskId = std::move(value); }

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline void SetTaskId(const char* value) { m_taskIdHasBeenSet = true; m_taskId.assign(value); }

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline CancelAuditTaskRequest& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline CancelAuditTaskRequest& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the audit you want to cancel. You can only cancel an audit that is
     * "IN_PROGRESS".</p>
     */
    inline CancelAuditTaskRequest& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_taskId;
    bool m_taskIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
