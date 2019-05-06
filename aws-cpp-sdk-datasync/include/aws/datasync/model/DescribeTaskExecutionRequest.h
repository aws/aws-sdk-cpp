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
   * <p>DescribeTaskExecutionRequest</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeTaskExecutionRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DescribeTaskExecutionRequest : public DataSyncRequest
  {
  public:
    DescribeTaskExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskExecution"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline const Aws::String& GetTaskExecutionArn() const{ return m_taskExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline bool TaskExecutionArnHasBeenSet() const { return m_taskExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline void SetTaskExecutionArn(const Aws::String& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline void SetTaskExecutionArn(Aws::String&& value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline void SetTaskExecutionArn(const char* value) { m_taskExecutionArnHasBeenSet = true; m_taskExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline DescribeTaskExecutionRequest& WithTaskExecutionArn(const Aws::String& value) { SetTaskExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline DescribeTaskExecutionRequest& WithTaskExecutionArn(Aws::String&& value) { SetTaskExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the task that is being executed.</p>
     */
    inline DescribeTaskExecutionRequest& WithTaskExecutionArn(const char* value) { SetTaskExecutionArn(value); return *this;}

  private:

    Aws::String m_taskExecutionArn;
    bool m_taskExecutionArnHasBeenSet;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
