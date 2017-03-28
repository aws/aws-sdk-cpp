/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing the details of a container that is part of a job
   * attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptContainerDetail">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API AttemptContainerDetail
  {
  public:
    AttemptContainerDetail();
    AttemptContainerDetail(const Aws::Utils::Json::JsonValue& jsonValue);
    AttemptContainerDetail& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline AttemptContainerDetail& WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline AttemptContainerDetail& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline AttemptContainerDetail& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline AttemptContainerDetail& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline AttemptContainerDetail& WithTaskArn(Aws::String&& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt.</p>
     */
    inline AttemptContainerDetail& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}

    /**
     * <p>The exit code for the job attempt. A non-zero exit code is considered a
     * failure.</p>
     */
    inline int GetExitCode() const{ return m_exitCode; }

    /**
     * <p>The exit code for the job attempt. A non-zero exit code is considered a
     * failure.</p>
     */
    inline void SetExitCode(int value) { m_exitCodeHasBeenSet = true; m_exitCode = value; }

    /**
     * <p>The exit code for the job attempt. A non-zero exit code is considered a
     * failure.</p>
     */
    inline AttemptContainerDetail& WithExitCode(int value) { SetExitCode(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline AttemptContainerDetail& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline AttemptContainerDetail& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline AttemptContainerDetail& WithReason(const char* value) { SetReason(value); return *this;}

  private:
    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;
    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;
    int m_exitCode;
    bool m_exitCodeHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
