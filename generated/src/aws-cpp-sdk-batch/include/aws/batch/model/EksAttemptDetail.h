/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/EksAttemptContainerDetail.h>
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
   * <p>An object that represents the details of a job attempt for a job attempt by
   * an Amazon EKS container.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/EksAttemptDetail">AWS
   * API Reference</a></p>
   */
  class EksAttemptDetail
  {
  public:
    AWS_BATCH_API EksAttemptDetail() = default;
    AWS_BATCH_API EksAttemptDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksAttemptDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline const Aws::Vector<EksAttemptContainerDetail>& GetContainers() const { return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    template<typename ContainersT = Aws::Vector<EksAttemptContainerDetail>>
    void SetContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers = std::forward<ContainersT>(value); }
    template<typename ContainersT = Aws::Vector<EksAttemptContainerDetail>>
    EksAttemptDetail& WithContainers(ContainersT&& value) { SetContainers(std::forward<ContainersT>(value)); return *this;}
    template<typename ContainersT = EksAttemptContainerDetail>
    EksAttemptDetail& AddContainers(ContainersT&& value) { m_containersHasBeenSet = true; m_containers.emplace_back(std::forward<ContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the init containers.</p>
     */
    inline const Aws::Vector<EksAttemptContainerDetail>& GetInitContainers() const { return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    template<typename InitContainersT = Aws::Vector<EksAttemptContainerDetail>>
    void SetInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::forward<InitContainersT>(value); }
    template<typename InitContainersT = Aws::Vector<EksAttemptContainerDetail>>
    EksAttemptDetail& WithInitContainers(InitContainersT&& value) { SetInitContainers(std::forward<InitContainersT>(value)); return *this;}
    template<typename InitContainersT = EksAttemptContainerDetail>
    EksAttemptDetail& AddInitContainers(InitContainersT&& value) { m_initContainersHasBeenSet = true; m_initContainers.emplace_back(std::forward<InitContainersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EKS cluster.</p>
     */
    inline const Aws::String& GetEksClusterArn() const { return m_eksClusterArn; }
    inline bool EksClusterArnHasBeenSet() const { return m_eksClusterArnHasBeenSet; }
    template<typename EksClusterArnT = Aws::String>
    void SetEksClusterArn(EksClusterArnT&& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = std::forward<EksClusterArnT>(value); }
    template<typename EksClusterArnT = Aws::String>
    EksAttemptDetail& WithEksClusterArn(EksClusterArnT&& value) { SetEksClusterArn(std::forward<EksClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline const Aws::String& GetPodName() const { return m_podName; }
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }
    template<typename PodNameT = Aws::String>
    void SetPodName(PodNameT&& value) { m_podNameHasBeenSet = true; m_podName = std::forward<PodNameT>(value); }
    template<typename PodNameT = Aws::String>
    EksAttemptDetail& WithPodName(PodNameT&& value) { SetPodName(std::forward<PodNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon EKS cluster that the pod exists in.</p>
     */
    inline const Aws::String& GetPodNamespace() const { return m_podNamespace; }
    inline bool PodNamespaceHasBeenSet() const { return m_podNamespaceHasBeenSet; }
    template<typename PodNamespaceT = Aws::String>
    void SetPodNamespace(PodNamespaceT&& value) { m_podNamespaceHasBeenSet = true; m_podNamespace = std::forward<PodNamespaceT>(value); }
    template<typename PodNamespaceT = Aws::String>
    EksAttemptDetail& WithPodNamespace(PodNamespaceT&& value) { SetPodNamespace(std::forward<PodNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline const Aws::String& GetNodeName() const { return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    template<typename NodeNameT = Aws::String>
    void SetNodeName(NodeNameT&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::forward<NodeNameT>(value); }
    template<typename NodeNameT = Aws::String>
    EksAttemptDetail& WithNodeName(NodeNameT&& value) { SetNodeName(std::forward<NodeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline EksAttemptDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped. This
     * happens when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline long long GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline EksAttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    EksAttemptDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EksAttemptContainerDetail> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::Vector<EksAttemptContainerDetail> m_initContainers;
    bool m_initContainersHasBeenSet = false;

    Aws::String m_eksClusterArn;
    bool m_eksClusterArnHasBeenSet = false;

    Aws::String m_podName;
    bool m_podNameHasBeenSet = false;

    Aws::String m_podNamespace;
    bool m_podNamespaceHasBeenSet = false;

    Aws::String m_nodeName;
    bool m_nodeNameHasBeenSet = false;

    long long m_startedAt{0};
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt{0};
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
