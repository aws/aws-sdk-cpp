/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/BatchRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/CEType.h>
#include <aws/batch/model/CEState.h>
#include <aws/batch/model/ComputeResource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/batch/model/EksConfiguration.h>
#include <utility>

namespace Aws
{
namespace Batch
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * <code>CreateComputeEnvironment</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/CreateComputeEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class CreateComputeEnvironmentRequest : public BatchRequest
  {
  public:
    AWS_BATCH_API CreateComputeEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComputeEnvironment"; }

    AWS_BATCH_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for your compute environment. It can be up to 128 characters long.
     * It can contain uppercase and lowercase letters, numbers, hyphens (-), and
     * underscores (_).</p>
     */
    inline const Aws::String& GetComputeEnvironmentName() const { return m_computeEnvironmentName; }
    inline bool ComputeEnvironmentNameHasBeenSet() const { return m_computeEnvironmentNameHasBeenSet; }
    template<typename ComputeEnvironmentNameT = Aws::String>
    void SetComputeEnvironmentName(ComputeEnvironmentNameT&& value) { m_computeEnvironmentNameHasBeenSet = true; m_computeEnvironmentName = std::forward<ComputeEnvironmentNameT>(value); }
    template<typename ComputeEnvironmentNameT = Aws::String>
    CreateComputeEnvironmentRequest& WithComputeEnvironmentName(ComputeEnvironmentNameT&& value) { SetComputeEnvironmentName(std::forward<ComputeEnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the compute environment: <code>MANAGED</code> or
     * <code>UNMANAGED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline CEType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(CEType value) { m_typeHasBeenSet = true; m_type = value; }
    inline CreateComputeEnvironmentRequest& WithType(CEType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the compute environment. If the state is <code>ENABLED</code>,
     * then the compute environment accepts jobs from a queue and can scale out
     * automatically based on queues.</p> <p>If the state is <code>ENABLED</code>, then
     * the Batch scheduler can attempt to place jobs from an associated job queue on
     * the compute resources within the environment. If the compute environment is
     * managed, then it can scale its instances out or in automatically, based on the
     * job queue demand.</p> <p>If the state is <code>DISABLED</code>, then the Batch
     * scheduler doesn't attempt to place jobs within the environment. Jobs in a
     * <code>STARTING</code> or <code>RUNNING</code> state continue to progress
     * normally. Managed compute environments in the <code>DISABLED</code> state don't
     * scale out. </p>  <p>Compute environments in a <code>DISABLED</code> state
     * may continue to incur billing charges. To prevent additional charges, turn off
     * and then delete the compute environment. For more information, see <a
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
    inline CreateComputeEnvironmentRequest& WithState(CEState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of vCPUs for an unmanaged compute environment. This
     * parameter is only used for fair-share scheduling to reserve vCPU capacity for
     * new share identifiers. If this parameter isn't provided for a fair-share job
     * queue, no vCPU capacity is reserved.</p>  <p>This parameter is only
     * supported when the <code>type</code> parameter is set to
     * <code>UNMANAGED</code>.</p> 
     */
    inline int GetUnmanagedvCpus() const { return m_unmanagedvCpus; }
    inline bool UnmanagedvCpusHasBeenSet() const { return m_unmanagedvCpusHasBeenSet; }
    inline void SetUnmanagedvCpus(int value) { m_unmanagedvCpusHasBeenSet = true; m_unmanagedvCpus = value; }
    inline CreateComputeEnvironmentRequest& WithUnmanagedvCpus(int value) { SetUnmanagedvCpus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about the compute resources managed by the compute environment. This
     * parameter is required for managed compute environments. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/compute_environments.html">Compute
     * Environments</a> in the <i>Batch User Guide</i>.</p>
     */
    inline const ComputeResource& GetComputeResources() const { return m_computeResources; }
    inline bool ComputeResourcesHasBeenSet() const { return m_computeResourcesHasBeenSet; }
    template<typename ComputeResourcesT = ComputeResource>
    void SetComputeResources(ComputeResourcesT&& value) { m_computeResourcesHasBeenSet = true; m_computeResources = std::forward<ComputeResourcesT>(value); }
    template<typename ComputeResourcesT = ComputeResource>
    CreateComputeEnvironmentRequest& WithComputeResources(ComputeResourcesT&& value) { SetComputeResources(std::forward<ComputeResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The full Amazon Resource Name (ARN) of the IAM role that allows Batch to make
     * calls to other Amazon Web Services services on your behalf. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/service_IAM_role.html">Batch
     * service IAM role</a> in the <i>Batch User Guide</i>.</p>  <p>If your
     * account already created the Batch service-linked role, that role is used by
     * default for your compute environment unless you specify a different role here.
     * If the Batch service-linked role doesn't exist in your account, and no role is
     * specified here, the service attempts to create the Batch service-linked role in
     * your account.</p>  <p>If your specified role has a path other than
     * <code>/</code>, then you must specify either the full role ARN (recommended) or
     * prefix the role name with the path. For example, if a role with the name
     * <code>bar</code> has a path of <code>/foo/</code>, specify <code>/foo/bar</code>
     * as the role name. For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html#identifiers-friendly-names">Friendly
     * names and paths</a> in the <i>IAM User Guide</i>.</p>  <p>Depending on how
     * you created your Batch service role, its ARN might contain the
     * <code>service-role</code> path prefix. When you only specify the name of the
     * service role, Batch assumes that your ARN doesn't use the
     * <code>service-role</code> path prefix. Because of this, we recommend that you
     * specify the full ARN of your service role when you create compute
     * environments.</p> 
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    inline bool ServiceRoleHasBeenSet() const { return m_serviceRoleHasBeenSet; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    CreateComputeEnvironmentRequest& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags that you apply to the compute environment to help you categorize and
     * organize your resources. Each tag consists of a key and an optional value. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
     * Amazon Web Services Resources</a> in <i>Amazon Web Services General
     * Reference</i>.</p> <p>These tags can be updated or removed using the <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_TagResource.html">TagResource</a>
     * and <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_UntagResource.html">UntagResource</a>
     * API operations. These tags don't propagate to the underlying compute
     * resources.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComputeEnvironmentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComputeEnvironmentRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The details for the Amazon EKS cluster that supports the compute
     * environment.</p>  <p>To create a compute environment that uses EKS
     * resources, the caller must have permissions to call
     * <code>eks:DescribeCluster</code>.</p> 
     */
    inline const EksConfiguration& GetEksConfiguration() const { return m_eksConfiguration; }
    inline bool EksConfigurationHasBeenSet() const { return m_eksConfigurationHasBeenSet; }
    template<typename EksConfigurationT = EksConfiguration>
    void SetEksConfiguration(EksConfigurationT&& value) { m_eksConfigurationHasBeenSet = true; m_eksConfiguration = std::forward<EksConfigurationT>(value); }
    template<typename EksConfigurationT = EksConfiguration>
    CreateComputeEnvironmentRequest& WithEksConfiguration(EksConfigurationT&& value) { SetEksConfiguration(std::forward<EksConfigurationT>(value)); return *this;}
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
    CreateComputeEnvironmentRequest& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_computeEnvironmentName;
    bool m_computeEnvironmentNameHasBeenSet = false;

    CEType m_type{CEType::NOT_SET};
    bool m_typeHasBeenSet = false;

    CEState m_state{CEState::NOT_SET};
    bool m_stateHasBeenSet = false;

    int m_unmanagedvCpus{0};
    bool m_unmanagedvCpusHasBeenSet = false;

    ComputeResource m_computeResources;
    bool m_computeResourcesHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    EksConfiguration m_eksConfiguration;
    bool m_eksConfigurationHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
