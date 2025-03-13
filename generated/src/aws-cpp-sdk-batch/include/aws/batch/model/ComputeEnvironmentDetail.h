/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/CEStatus.h>
#include <aws/batch/model/ComputeResource.h>
#include <aws/batch/model/UpdatePolicy.h>
#include <aws/batch/model/EksConfiguration.h>
#include <aws/batch/model/OrchestrationType.h>
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
   * <p>An object that represents an Batch compute environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/ComputeEnvironmentDetail">AWS
   * API Reference</a></p>
   */
  class ComputeEnvironmentDetail
  {
  public:
    AWS_BATCH_API ComputeEnvironmentDetail() = default;
    AWS_BATCH_API ComputeEnvironmentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API ComputeEnvironmentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the compute environment. It can be up to 128 characters long. It
     * can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const { return m_computeEnvironmentName; }
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }
    template<typename ComputeEnvironmentNameT = Aws::String>
    void SetComputeEnvironmentName(ComputeEnvironmentNameT&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::forward<ComputeEnvironmentNameT>(value); }
    template<typename ComputeEnvironmentNameT = Aws::String>
    ComputeEnvironmentDetail& WithComputeEnvironmentName(ComputeEnvironmentNameT&& value) { SetComputeEnvironmentName(std::forward<ComputeEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the compute environment.</p>
     */
    inline const Aws::String& GetComputeEnvironmentArn() const { return m_computeEnvironmentArn; }
    inline bool ComputeEnvironmentArnHasBeenSet() const { return m_computeEnvironmentArnHasBeenSet; }
    template<typename ComputeEnvironmentArnT = Aws::String>
    void SetComputeEnvironmentArn(ComputeEnvironmentArnT&& value) { m_computeEnvironmentArnHasBeenSet = true; m_computeEnvironmentArn = std::forward<ComputeEnvironmentArnT>(value); }
    template<typename ComputeEnvironmentArnT = Aws::String>
    ComputeEnvironmentDetail& WithComputeEnvironmentArn(ComputeEnvironmentArnT&& value) { SetComputeEnvironmentArn(std::forward<ComputeEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of VCPUs expected to be used for an unmanaged compute
     * environment.</p>
     */
    inline int GetUnmanagedvCpus() const { return m_unmanagedvCpus; }
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }
    inline ComputeEnvironmentDetail& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the underlying Amazon ECS cluster that the
     * compute environment uses.</p>
     */
    inline const Aws::String& GetEcsClusterArn() const { return m_ecsClusterArn; }
    inline bool EcsClusterArnHasBeenSet() const { return m_ecsClusterArnHasBeenSet; }
    template<typename EcsClusterArnT = Aws::String>
    void SetEcsClusterArn(EcsClusterArnT&& value) { m_ecsClusterArnHasBeenSet = true; m_ecsClusterArn = std::forward<EcsClusterArnT>(value); }
    template<typename EcsClusterArnT = Aws::String>
    ComputeEnvironmentDetail& WithEcsClusterArn(EcsClusterArnT&& value) { SetEcsClusterArn(std::forward<EcsClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags applied to the compute environment.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    ComputeEnvironmentDetail& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    ComputeEnvironmentDetail& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CEType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CEType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ComputeEnvironmentDetail& WithType(CEType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute environment. The valid values are
     * <code>ENABLED</code> or <code>DISABLED</code>.</p> <p>If the state is
     * <code>ENABLED</code>, then the Batch scheduler can attempt to place jobs from an
     * associated job queue on the compute resources within the environment. If the
     * compute environment is managed, then it can scale its instances out or in
     * automatically based on the job queue demand.</p> <p>If the state is
     * <code>DISABLED</code>, then the Batch scheduler doesn't attempt to place jobs
     * within the environment. Jobs in a <code>STARTING</code> or <code>RUNNING</code>
     * state continue to progress normally. Managed compute environments in the
     * <code>DISABLED</code> state don't scale out. </p>  <p>Compute environments
     * in a <code>DISABLED</code> state may continue to incur billing charges. To
     * prevent additional charges, turn off and then delete the compute environment.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environment_parameters.html#compute_environment_state">State</a>
     * in the <i>Batch User Guide</i>.</p>  <p>When an instance is idle, the
     * instance scales down to the <code>minvCpus</code> value. However, the instance
     * size doesn't change. For example, consider a <code>c5.8xlarge</code> instance
     * with a <code>minvCpus</code> value of <code>4</code> and a
     * <code>desiredvCpus</code> value of <code>36</code>. This instance doesn't scale
     * down to a <code>c5.large</code> instance.</p>
     */
    inline CEState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(CEState value) { m_stateHasBeenSet = true; m_state = value; }
    inline ComputeEnvironmentDetail& WithState(CEState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the compute environment (for example,
     * <code>CREATING</code> or <code>VALID</code>).</p>
     */
    inline CEStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(CEStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ComputeEnvironmentDetail& WithStatus(CEStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the compute environment.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ComputeEnvironmentDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The compute resources defined for the compute environment. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const { return m_computeResources; }
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }
    template<typename ComputeResourcesT = ComputeResource>
    void SetComputeResources(ComputeResourcesT&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::forward<ComputeResourcesT>(value); }
    template<typename ComputeResourcesT = ComputeResource>
    ComputeEnvironmentDetail& WithComputeResources(ComputeResourcesT&& value) { SetComputeResources(std::forward<ComputeResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role that's associated with the compute environment that allows
     * Batch to make calls to Amazon Web Services API operations on your behalf. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    ComputeEnvironmentDetail& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the infrastructure update policy for the compute environment. For
     * more information about infrastructure updates, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/updating-compute-environments.html">Updating
     * compute environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const UpdatePolicy& GetUpdatePolicy() const { return m_updatePolicy; }
    inline bool UpdatePolicyHasBeenSet() const { return m_updatePolicyHasBeenSet; }
    template<typename UpdatePolicyT = UpdatePolicy>
    void SetUpdatePolicy(UpdatePolicyT&& value) { m_updatePolicyHasBeenSet = true; m_updatePolicy = std::forward<UpdatePolicyT>(value); }
    template<typename UpdatePolicyT = UpdatePolicy>
    ComputeEnvironmentDetail& WithUpdatePolicy(UpdatePolicyT&& value) { SetUpdatePolicy(std::forward<UpdatePolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for the Amazon EKS cluster that supports the Batch compute
     * environment. Only specify this parameter if the
     * <code>containerOrchestrationType</code> is <code>EKS</code>.</p>
     */
    inline const EksConfiguration& GetEksConfiguration() const { return m_eksConfiguration; }
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }
    template<typename EksConfigurationT = EksConfiguration>
    void SetEksConfiguration(EksConfigurationT&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::forward<EksConfigurationT>(value); }
    template<typename EksConfigurationT = EksConfiguration>
    ComputeEnvironmentDetail& WithEksConfiguration(EksConfigurationT&& value) { SetEksConfiguration(std::forward<EksConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The orchestration type of the compute environment. The valid values are
     * <code>ECS</code> (default) or <code>EKS</code>.</p>
     */
    inline OrchestrationType GetContainerOrchestrationType() const { return m_containerOrchestrationType; }
    inline bool ContainerOrchestrationTypeHasBeenSet() const { return m_containerOrchestrationTypeHasBeenSet; }
    inline void SetContainerOrchestrationType(OrchestrationType value) { m_containerOrchestrationTypeHasBeenSet = true; m_containerOrchestrationType = value; }
    inline ComputeEnvironmentDetail& WithContainerOrchestrationType(OrchestrationType value) { SetContainerOrchestrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the compute environment.</p>
     */
    inline const Aws::String& GetUuid() const { return m_uuid; }
    inline bool UuidHasBeenSet() const { return m_uuidHasBeenSet; }
    template<typename UuidT = Aws::String>
    void SetUuid(UuidT&& value) { m_uuidHasBeenSet = true; m_uuid = std::forward<UuidT>(value); }
    template<typename UuidT = Aws::String>
    ComputeEnvironmentDetail& WithUuid(UuidT&& value) { SetUuid(std::forward<UuidT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    ComputeEnvironmentDetail& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet = false;

    Aws::String m_computeEnvironmentArn;
    bool m_computeEnvironmentArnHasBeenSet = false;

    int m_unmanagedvCpus{0};
    bool m_unmanagedvCpusHasBeenSet = false;

    Aws::String m_ecsClusterArn;
    bool m_ecsClusterArnHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    CEType m_type{CEType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CEState m_state{CEState::NOT_SET};
    bool m_stateHasBeenSet = false;

    CEStatus m_status{CEStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    UpdatePolicy m_updatePolicy;
    bool m_updatePolicyHasBeenSet = false;

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;

    OrchestrationType m_containerOrchestrationType{OrchestrationType::NOT_SET};
    bool m_containerOrchestrationTypeHasBeenSet = false;

    Aws::String m_uuid;
    bool m_uuidHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
