/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReportTaskRunnerHeartbeatRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API ReportTaskRunnerHeartbeatRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReportTaskRunnerHeartbeat"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the task runner. This value should be unique across your AWS
     * account. In the case of AWS Data Pipeline Task Runner launched on a resource
     * managed by AWS Data Pipeline, the web service provides a unique identifier when
     * it launches the application. If you have written a custom task runner, you
     * should assign a unique identifier for the task runner.</p>
     */
    inline const Aws::String& GetTaskrunnerId() const { return m_taskrunnerId; }
    inline bool TaskrunnerIdHasBeenSet() const { return m_taskrunnerIdHasBeenSet; }
    template<typename TaskrunnerIdT = Aws::String>
    void SetTaskrunnerId(TaskrunnerIdT&& value) { m_taskrunnerIdHasBeenSet = true; m_taskrunnerId = std::forward<TaskrunnerIdT>(value); }
    template<typename TaskrunnerIdT = Aws::String>
    ReportTaskRunnerHeartbeatRequest& WithTaskrunnerId(TaskrunnerIdT&& value) { SetTaskrunnerId(std::forward<TaskrunnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code>. There are no
     * wildcard values permitted in <code>workerGroup</code>; the string must be an
     * exact, case-sensitive, match.</p>
     */
    inline const Aws::String& GetWorkerGroup() const { return m_workerGroup; }
    inline bool WorkerGroupHasBeenSet() const { return m_workerGroupHasBeenSet; }
    template<typename WorkerGroupT = Aws::String>
    void SetWorkerGroup(WorkerGroupT&& value) { m_workerGroupHasBeenSet = true; m_workerGroup = std::forward<WorkerGroupT>(value); }
    template<typename WorkerGroupT = Aws::String>
    ReportTaskRunnerHeartbeatRequest& WithWorkerGroup(WorkerGroupT&& value) { SetWorkerGroup(std::forward<WorkerGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the task runner.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    ReportTaskRunnerHeartbeatRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_taskrunnerId;
    bool m_taskrunnerIdHasBeenSet = false;

    Aws::String m_workerGroup;
    bool m_workerGroupHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
