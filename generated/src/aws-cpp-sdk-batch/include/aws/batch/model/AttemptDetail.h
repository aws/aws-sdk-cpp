/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/batch/model/AttemptContainerDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/AttemptEcsTaskDetails.h>
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
   * <p>An object that represents a job attempt.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/AttemptDetail">AWS
   * API Reference</a></p>
   */
  class AttemptDetail
  {
  public:
    AWS_BATCH_API AttemptDetail();
    AWS_BATCH_API AttemptDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API AttemptDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details for the container in this job attempt.</p>
     */
    inline const AttemptContainerDetail& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const AttemptContainerDetail& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(AttemptContainerDetail&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline AttemptDetail& WithContainer(const AttemptContainerDetail& value) { SetContainer(value); return *this;}
    inline AttemptDetail& WithContainer(AttemptContainerDetail&& value) { SetContainer(std::move(value)); return *this;}
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
    inline AttemptDetail& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the attempt was stopped (when
     * the attempt transitioned from the <code>RUNNING</code> state to a terminal
     * state, such as <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline AttemptDetail& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
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
    inline AttemptDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline AttemptDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline AttemptDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties for a task definition that describes the container and volume
     * definitions of an Amazon ECS task.</p>
     */
    inline const Aws::Vector<AttemptEcsTaskDetails>& GetTaskProperties() const{ return m_taskProperties; }
    inline bool TaskPropertiesHasBeenSet() const { return m_taskPropertiesHasBeenSet; }
    inline void SetTaskProperties(const Aws::Vector<AttemptEcsTaskDetails>& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = value; }
    inline void SetTaskProperties(Aws::Vector<AttemptEcsTaskDetails>&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties = std::move(value); }
    inline AttemptDetail& WithTaskProperties(const Aws::Vector<AttemptEcsTaskDetails>& value) { SetTaskProperties(value); return *this;}
    inline AttemptDetail& WithTaskProperties(Aws::Vector<AttemptEcsTaskDetails>&& value) { SetTaskProperties(std::move(value)); return *this;}
    inline AttemptDetail& AddTaskProperties(const AttemptEcsTaskDetails& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(value); return *this; }
    inline AttemptDetail& AddTaskProperties(AttemptEcsTaskDetails&& value) { m_taskPropertiesHasBeenSet = true; m_taskProperties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    AttemptContainerDetail m_container;
    bool m_containerHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Vector<AttemptEcsTaskDetails> m_taskProperties;
    bool m_taskPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
