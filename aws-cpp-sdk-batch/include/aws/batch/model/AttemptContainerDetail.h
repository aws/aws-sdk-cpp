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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/NetworkInterface.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
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
    AttemptContainerDetail(Aws::Utils::Json::JsonView jsonValue);
    AttemptContainerDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline bool ContainerInstanceArnHasBeenSet() const { return m_containerInstanceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline void SetContainerInstanceArn(Aws::String&& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = std::move(value); }

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
    inline AttemptContainerDetail& WithContainerInstanceArn(Aws::String&& value) { SetContainerInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS container instance that
     * hosts the job attempt.</p>
     */
    inline AttemptContainerDetail& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline AttemptContainerDetail& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
     */
    inline AttemptContainerDetail& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon ECS task that is associated with
     * the job attempt. Each container attempt receives a task ARN when they reach the
     * <code>STARTING</code> status.</p>
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
    inline bool ExitCodeHasBeenSet() const { return m_exitCodeHasBeenSet; }

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
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

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
    inline AttemptContainerDetail& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>A short (255 max characters) human-readable string to provide additional
     * details about a running or stopped container.</p>
     */
    inline AttemptContainerDetail& WithReason(const char* value) { SetReason(value); return *this;}


    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline const Aws::String& GetLogStreamName() const{ return m_logStreamName; }

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline void SetLogStreamName(const Aws::String& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = value; }

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline void SetLogStreamName(Aws::String&& value) { m_logStreamNameHasBeenSet = true; m_logStreamName = std::move(value); }

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline void SetLogStreamName(const char* value) { m_logStreamNameHasBeenSet = true; m_logStreamName.assign(value); }

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline AttemptContainerDetail& WithLogStreamName(const Aws::String& value) { SetLogStreamName(value); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline AttemptContainerDetail& WithLogStreamName(Aws::String&& value) { SetLogStreamName(std::move(value)); return *this;}

    /**
     * <p>The name of the CloudWatch Logs log stream associated with the container. The
     * log group for AWS Batch jobs is <code>/aws/batch/job</code>. Each container
     * attempt receives a log stream name when they reach the <code>RUNNING</code>
     * status.</p>
     */
    inline AttemptContainerDetail& WithLogStreamName(const char* value) { SetLogStreamName(value); return *this;}


    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline const Aws::Vector<NetworkInterface>& GetNetworkInterfaces() const{ return m_networkInterfaces; }

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline bool NetworkInterfacesHasBeenSet() const { return m_networkInterfacesHasBeenSet; }

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline void SetNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = value; }

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline void SetNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces = std::move(value); }

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline AttemptContainerDetail& WithNetworkInterfaces(const Aws::Vector<NetworkInterface>& value) { SetNetworkInterfaces(value); return *this;}

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline AttemptContainerDetail& WithNetworkInterfaces(Aws::Vector<NetworkInterface>&& value) { SetNetworkInterfaces(std::move(value)); return *this;}

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline AttemptContainerDetail& AddNetworkInterfaces(const NetworkInterface& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(value); return *this; }

    /**
     * <p>The network interfaces associated with the job attempt.</p>
     */
    inline AttemptContainerDetail& AddNetworkInterfaces(NetworkInterface&& value) { m_networkInterfacesHasBeenSet = true; m_networkInterfaces.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;

    int m_exitCode;
    bool m_exitCodeHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;

    Aws::String m_logStreamName;
    bool m_logStreamNameHasBeenSet;

    Aws::Vector<NetworkInterface> m_networkInterfaces;
    bool m_networkInterfacesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
