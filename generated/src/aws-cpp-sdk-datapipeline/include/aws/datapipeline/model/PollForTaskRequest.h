/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datapipeline/DataPipeline_EXPORTS.h>
#include <aws/datapipeline/DataPipelineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datapipeline/model/InstanceIdentity.h>
#include <utility>

namespace Aws
{
namespace DataPipeline
{
namespace Model
{

  /**
   * <p>Contains the parameters for PollForTask.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datapipeline-2012-10-29/PollForTaskInput">AWS
   * API Reference</a></p>
   */
  class PollForTaskRequest : public DataPipelineRequest
  {
  public:
    AWS_DATAPIPELINE_API PollForTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PollForTask"; }

    AWS_DATAPIPELINE_API Aws::String SerializePayload() const override;

    AWS_DATAPIPELINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of task the task runner is configured to accept and process. The
     * worker group is set as a field on objects in the pipeline when they are created.
     * You can only specify a single value for <code>workerGroup</code> in the call to
     * <code>PollForTask</code>. There are no wildcard values permitted in
     * <code>workerGroup</code>; the string must be an exact, case-sensitive,
     * match.</p>
     */
    inline const Aws::String& GetWorkerGroup() const { return m_workerGroup; }
    inline bool WorkerGroupHasBeenSet() const { return m_workerGroupHasBeenSet; }
    template<typename WorkerGroupT = Aws::String>
    void SetWorkerGroup(WorkerGroupT&& value) { m_workerGroupHasBeenSet = true; m_workerGroup = std::forward<WorkerGroupT>(value); }
    template<typename WorkerGroupT = Aws::String>
    PollForTaskRequest& WithWorkerGroup(WorkerGroupT&& value) { SetWorkerGroup(std::forward<WorkerGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The public DNS name of the calling task runner.</p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    PollForTaskRequest& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const InstanceIdentity& GetInstanceIdentity() const { return m_instanceIdentity; }
    inline bool InstanceIdentityHasBeenSet() const { return m_instanceIdentityHasBeenSet; }
    template<typename InstanceIdentityT = InstanceIdentity>
    void SetInstanceIdentity(InstanceIdentityT&& value) { m_instanceIdentityHasBeenSet = true; m_instanceIdentity = std::forward<InstanceIdentityT>(value); }
    template<typename InstanceIdentityT = InstanceIdentity>
    PollForTaskRequest& WithInstanceIdentity(InstanceIdentityT&& value) { SetInstanceIdentity(std::forward<InstanceIdentityT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workerGroup;
    bool m_workerGroupHasBeenSet = false;

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    InstanceIdentity m_instanceIdentity;
    bool m_instanceIdentityHasBeenSet = false;
  };

} // namespace Model
} // namespace DataPipeline
} // namespace Aws
