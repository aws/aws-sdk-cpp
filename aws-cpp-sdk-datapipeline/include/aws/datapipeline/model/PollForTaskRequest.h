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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/InstanceIdentity.h>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for PollForTask.</p>
   */
  class AWS_DATAPIPELINE_API PollForTaskRequest : public DataPipelineRequest
  {
  public:
    PollForTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline const Aws::String& GetWorkerGroup() const{ return m_workerGroup; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline void SetWorkerGroup(const Aws::String& value) { m_workerGroupHasBeenSet = true; m_workerGroup = value; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline void SetWorkerGroup(Aws::String&& value) { m_workerGroupHasBeenSet = true; m_workerGroup = value; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline void SetWorkerGroup(const char* value) { m_workerGroupHasBeenSet = true; m_workerGroup.assign(value); }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline PollForTaskRequest& WithWorkerGroup(const Aws::String& value) { SetWorkerGroup(value); return *this;}

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline PollForTaskRequest& WithWorkerGroup(Aws::String&& value) { SetWorkerGroup(value); return *this;}

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline PollForTaskRequest& WithWorkerGroup(const char* value) { SetWorkerGroup(value); return *this;}

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline PollForTaskRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline PollForTaskRequest& WithHostname(Aws::String&& value) { SetHostname(value); return *this;}

    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline PollForTaskRequest& WithHostname(const char* value) { SetHostname(value); return *this;}

    /**
     * <p>Identity information for the EC2 instance that is hosting the task runner.
     * You can get this value from the instance using
     * <code>http://169.254.169.254/latest/meta-data/instance-id</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
     * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
     * this value proves that your task runner is running on an EC2 instance, and
     * ensures the proper AWS Data Pipeline service charges are applied to your
     * pipeline.</p>
     */
    inline const InstanceIdentity& GetInstanceIdentity() const{ return m_instanceIdentity; }

    /**
     * <p>Identity information for the EC2 instance that is hosting the task runner.
     * You can get this value from the instance using
     * <code>http://169.254.169.254/latest/meta-data/instance-id</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
     * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
     * this value proves that your task runner is running on an EC2 instance, and
     * ensures the proper AWS Data Pipeline service charges are applied to your
     * pipeline.</p>
     */
    inline void SetInstanceIdentity(const InstanceIdentity& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = value; }

    /**
     * <p>Identity information for the EC2 instance that is hosting the task runner.
     * You can get this value from the instance using
     * <code>http://169.254.169.254/latest/meta-data/instance-id</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
     * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
     * this value proves that your task runner is running on an EC2 instance, and
     * ensures the proper AWS Data Pipeline service charges are applied to your
     * pipeline.</p>
     */
    inline void SetInstanceIdentity(InstanceIdentity&& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = value; }

    /**
     * <p>Identity information for the EC2 instance that is hosting the task runner.
     * You can get this value from the instance using
     * <code>http://169.254.169.254/latest/meta-data/instance-id</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
     * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
     * this value proves that your task runner is running on an EC2 instance, and
     * ensures the proper AWS Data Pipeline service charges are applied to your
     * pipeline.</p>
     */
    inline PollForTaskRequest& WithInstanceIdentity(const InstanceIdentity& value) { SetInstanceIdentity(value); return *this;}

    /**
     * <p>Identity information for the EC2 instance that is hosting the task runner.
     * You can get this value from the instance using
     * <code>http://169.254.169.254/latest/meta-data/instance-id</code>. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AESDG-chapter-instancedata.html">Instance
     * Metadata</a> in the <i>Amazon Elastic Compute Cloud User Guide.</i> Passing in
     * this value proves that your task runner is running on an EC2 instance, and
     * ensures the proper AWS Data Pipeline service charges are applied to your
     * pipeline.</p>
     */
    inline PollForTaskRequest& WithInstanceIdentity(InstanceIdentity&& value) { SetInstanceIdentity(value); return *this;}

  private:
    Aws::String m_workerGroup;
    bool m_workerGroupHasBeenSet;
    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;
    InstanceIdentity m_instanceIdentity;
    bool m_instanceIdentityHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
