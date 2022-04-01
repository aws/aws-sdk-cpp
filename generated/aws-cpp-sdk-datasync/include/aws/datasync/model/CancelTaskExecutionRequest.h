﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   * <p>CancelTaskExecutionRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/CancelTaskExecutionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API CancelTaskExecutionRequest : public DataSyncRequest
  {
  public:
    CancelTaskExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelTaskExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline CancelTaskExecutionRequest& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline CancelTaskExecutionRequest& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task execution to cancel.</p>
     */
    inline CancelTaskExecutionRequest& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}

  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
