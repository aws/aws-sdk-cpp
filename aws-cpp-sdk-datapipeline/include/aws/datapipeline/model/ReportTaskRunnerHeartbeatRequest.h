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
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for ReportTaskRunnerHeartbeat.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/ReportTaskRunnerHeartbeatInput">AWS
   * API Reference</a></p>
   */
  class AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatRequest : public DataPipelineRequest
  {
  public:
    ReportTaskRunnerHeartbeatRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReportTaskRunnerHeartbeat"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline const Aws::String& GetTaskrunnerId() const{ return m_taskrunnerId; }

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline bool TaskrunnerIdHasBeenSet() const { return m_taskrunnerIdHasBeenSet; }

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline void SetTaskrunnerId(const Aws::String& value) { m_taskrunnerIdHasBeenSet = true; m_taskrunnerId = value; }

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline void SetTaskrunnerId(Aws::String&& value) { m_taskrunnerIdHasBeenSet = true; m_taskrunnerId = std::move(value); }

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline void SetTaskrunnerId(const char* value) { m_taskrunnerIdHasBeenSet = true; m_taskrunnerId.assign(value); }

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithTaskrunnerId(const Aws::String& value) { SetTaskrunnerId(value); return *this;}

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithTaskrunnerId(Aws::String&& value) { SetTaskrunnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithTaskrunnerId(const char* value) { SetTaskrunnerId(value); return *this;}


    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline const Aws::String& GetWorkerGroup() const{ return m_workerGroup; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline bool WorkerGroupHasBeenSet() const { return m_workerGroupHasBeenSet; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline void SetWorkerGroup(const Aws::String& value) { m_workerGroupHasBeenSet = true; m_workerGroup = value; }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline void SetWorkerGroup(Aws::String&& value) { m_workerGroupHasBeenSet = true; m_workerGroup = std::move(value); }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline void SetWorkerGroup(const char* value) { m_workerGroupHasBeenSet = true; m_workerGroup.assign(value); }

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithWorkerGroup(const Aws::String& value) { SetWorkerGroup(value); return *this;}

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithWorkerGroup(Aws::String&& value) { SetWorkerGroup(std::move(value)); return *this;}

    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithWorkerGroup(const char* value) { SetWorkerGroup(value); return *this;}


    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline ReportTaskRunnerHeartbeatRequest& WithHostname(const char* value) { SetHostname(value); return *this;}

  private:

    Aws::String m_taskrunnerId;
    bool m_taskrunnerIdHasBeenSet;

    Aws::String m_workerGroup;
    bool m_workerGroupHasBeenSet;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
