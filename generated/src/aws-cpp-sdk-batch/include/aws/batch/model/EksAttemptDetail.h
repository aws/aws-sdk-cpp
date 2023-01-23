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


    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline const Aws::Vector<EksAttemptContainerDetail>& GetContainers() const{ return m_containers; }

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline bool ContainersHasBeenSet() const { return m_containersHasBeenSet; }

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline void SetContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline void SetContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { m_containersHasBeenSet = true; m_containers = std::move(value); }

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline EksAttemptDetail& WithContainers(const Aws::Vector<EksAttemptContainerDetail>& value) { SetContainers(value); return *this;}

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline EksAttemptDetail& WithContainers(Aws::Vector<EksAttemptContainerDetail>&& value) { SetContainers(std::move(value)); return *this;}

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline EksAttemptDetail& AddContainers(const EksAttemptContainerDetail& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /**
     * <p>The details for the final status of the containers for this job attempt.</p>
     */
    inline EksAttemptDetail& AddContainers(EksAttemptContainerDetail&& value) { m_containersHasBeenSet = true; m_containers.push_back(std::move(value)); return *this; }


    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline const Aws::String& GetPodName() const{ return m_podName; }

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline bool PodNameHasBeenSet() const { return m_podNameHasBeenSet; }

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline void SetPodName(const Aws::String& value) { m_podNameHasBeenSet = true; m_podName = value; }

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline void SetPodName(Aws::String&& value) { m_podNameHasBeenSet = true; m_podName = std::move(value); }

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline void SetPodName(const char* value) { m_podNameHasBeenSet = true; m_podName.assign(value); }

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline EksAttemptDetail& WithPodName(const Aws::String& value) { SetPodName(value); return *this;}

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline EksAttemptDetail& WithPodName(Aws::String&& value) { SetPodName(std::move(value)); return *this;}

    /**
     * <p>The name of the pod for this job attempt.</p>
     */
    inline EksAttemptDetail& WithPodName(const char* value) { SetPodName(value); return *this;}


    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline const Aws::String& GetNodeName() const{ return m_nodeName; }

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline bool NodeNameHasBeenSet() const { return m_nodeNameHasBeenSet; }

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline void SetNodeName(const Aws::String& value) { m_nodeNameHasBeenSet = true; m_nodeName = value; }

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline void SetNodeName(Aws::String&& value) { m_nodeNameHasBeenSet = true; m_nodeName = std::move(value); }

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline void SetNodeName(const char* value) { m_nodeNameHasBeenSet = true; m_nodeName.assign(value); }

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline EksAttemptDetail& WithNodeName(const Aws::String& value) { SetNodeName(value); return *this;}

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline EksAttemptDetail& WithNodeName(Aws::String&& value) { SetNodeName(std::move(value)); return *this;}

    /**
     * <p>The name of the node for this job attempt.</p>
     */
    inline EksAttemptDetail& WithNodeName(const char* value) { SetNodeName(value); return *this;}


    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was started (when
     * the attempt transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state).</p>
     */
    inline EksAttemptDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped. This
     * happens when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped. This
     * happens when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped. This
     * happens when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped. This
     * happens when the attempt transitioned from the <code>RUNNING</code> state to a
     * terminal state, such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline EksAttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}


    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline EksAttemptDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline EksAttemptDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details for the current
     * status of the job attempt.</p>
     */
    inline EksAttemptDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}

  private:

    Aws::Vector<EksAttemptContainerDetail> m_containers;
    bool m_containersHasBeenSet = false;

    Aws::String m_podName;
    bool m_podNameHasBeenSet = false;

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
