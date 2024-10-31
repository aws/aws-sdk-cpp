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
    AWS_BATCH_API EksAttemptDetail();
    AWS_BATCH_API EksAttemptDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API EksAttemptDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline const Aws::Vector<EksAttemptContainerDetail>& GetContainers() const{ return m_containers; }
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }
    inline void SetContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { m_containersHasBeenSet = true; m_containers = value; }
    inline void SetContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }
    inline EksAttemptDetail& WithContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { SetContainers(value); return *this;}
    inline EksAttemptDetail& WithContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { SetContainers(std::move(value)); return *this;}
    inline EksAttemptDetail& AddContainers(const EksAttemptContainerDetail& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }
    inline EksAttemptDetail& AddContainers(EksAttemptContainerDetail&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details for the init containers.</p>
     */
    inline const Aws::Vector<EksAttemptContainerDetail>& GetInitContainers() const{ return m_initContainers; }
    inline bool InitContainersHasBeenSet() const { return m_initContainersHasBeenSet; }
    inline void SetInitContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { m_initContainersHasBeenSet = true; m_initContainers = value; }
    inline void SetInitContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { m_initContainersHasBeenSet = true; m_initContainers = std::move(value); }
    inline EksAttemptDetail& WithInitContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { SetInitContainers(value); return *this;}
    inline EksAttemptDetail& WithInitContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { SetInitContainers(std::move(value)); return *this;}
    inline EksAttemptDetail& AddInitContainers(const EksAttemptContainerDetail& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(value); return *this; }
    inline EksAttemptDetail& AddInitContainers(EksAttemptContainerDetail&& value) { m_initContainersHasBeenSet = true; m_initContainers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon EKS cluster.</p>
     */
    inline const Aws::String& GetEksClusterArn() const{ return m_eksClusterArn; }
    inline bool EksClusterArnHasBeenSet() const { return m_eksClusterArnHasBeenSet; }
    inline void SetEksClusterArn(const Aws::String& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = value; }
    inline void SetEksClusterArn(Aws::String&& value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn = std::move(value); }
    inline void SetEksClusterArn(const char* value) { m_eksClusterArnHasBeenSet = true; m_eksClusterArn.assign(value); }
    inline EksAttemptDetail& WithEksClusterArn(const Aws::String& value) { SetEksClusterArn(value); return *this;}
    inline EksAttemptDetail& WithEksClusterArn(Aws::String&& value) { SetEksClusterArn(std::move(value)); return *this;}
    inline EksAttemptDetail& WithEksClusterArn(const char* value) { SetEksClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline const Aws::String& GetPodName() const{ return m_podName; }
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }
    inline void SetPodName(const Aws::String& value) { m_podNameHasBeenSet = true; m_podName = value; }
    inline void SetPodName(Aws::String&& value) { m_podNameHasBeenSet = true; m_podName = std::move(value); }
    inline void SetPodName(const char* value) { m_podNameHasBeenSet = true; m_podName.assign(value); }
    inline EksAttemptDetail& WithPodName(const Aws::String& value) { SetPodName(value); return *this;}
    inline EksAttemptDetail& WithPodName(Aws::String&& value) { SetPodName(std::move(value)); return *this;}
    inline EksAttemptDetail& WithPodName(const char* value) { SetPodName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The namespace of the Amazon EKS cluster that the pod exists in.</p>
     */
    inline const Aws::String& GetPodNamespace() const{ return m_podNamespace; }
    inline bool PodNamespaceHasBeenSet() const { return m_podNamespaceHasBeenSet; }
    inline void SetPodNamespace(const Aws::String& value) { m_podNamespaceHasBeenSet = true; m_podNamespace = value; }
    inline void SetPodNamespace(Aws::String&& value) { m_podNamespaceHasBeenSet = true; m_podNamespace = std::move(value); }
    inline void SetPodNamespace(const char* value) { m_podNamespaceHasBeenSet = true; m_podNamespace.assign(value); }
    inline EksAttemptDetail& WithPodNamespace(const Aws::String& value) { SetPodNamespace(value); return *this;}
    inline EksAttemptDetail& WithPodNamespace(Aws::String&& value) { SetPodNamespace(std::move(value)); return *this;}
    inline EksAttemptDetail& WithPodNamespace(const char* value) { SetPodNamespace(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }
    inline EksAttemptDetail& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}
    inline EksAttemptDetail& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}
    inline EksAttemptDetail& WithNodeName(const char* value) { SetNodeName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }
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
    inline long long GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline EksAttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline EksAttemptDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline EksAttemptDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline EksAttemptDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
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

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
