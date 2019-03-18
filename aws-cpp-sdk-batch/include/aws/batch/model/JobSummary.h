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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/JobStatus.h>
#include <aws/batch/model/ContainerSummary.h>
#include <aws/batch/model/ArrayPropertiesSummary.h>
#include <aws/batch/model/NodePropertiesSummary.h>
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
   * <p>An object representing summary details of a job.</p><p><h3>See Also:</h3>  
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobSummary">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API JobSummary
  {
  public:
    JobSummary();
    JobSummary(Aws::Utils::Json::JsonView jsonValue);
    JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID of the job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job.</p>
     */
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The name of the job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The name of the job.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the job.</p>
     */
    inline JobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The Unix timestamp for when the job was created. For non-array jobs and
     * parent array jobs, this is when the job entered the <code>SUBMITTED</code> state
     * (at the time <a>SubmitJob</a> was called). For array child jobs, this is when
     * the child job was spawned by its parent and entered the <code>PENDING</code>
     * state.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The Unix timestamp for when the job was created. For non-array jobs and
     * parent array jobs, this is when the job entered the <code>SUBMITTED</code> state
     * (at the time <a>SubmitJob</a> was called). For array child jobs, this is when
     * the child job was spawned by its parent and entered the <code>PENDING</code>
     * state.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the job was created. For non-array jobs and
     * parent array jobs, this is when the job entered the <code>SUBMITTED</code> state
     * (at the time <a>SubmitJob</a> was called). For array child jobs, this is when
     * the child job was spawned by its parent and entered the <code>PENDING</code>
     * state.</p>
     */
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The Unix timestamp for when the job was created. For non-array jobs and
     * parent array jobs, this is when the job entered the <code>SUBMITTED</code> state
     * (at the time <a>SubmitJob</a> was called). For array child jobs, this is when
     * the child job was spawned by its parent and entered the <code>PENDING</code>
     * state.</p>
     */
    inline JobSummary& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}


    /**
     * <p>The current status for the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status for the job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status for the job.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status for the job.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status for the job.</p>
     */
    inline JobSummary& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status for the job.</p>
     */
    inline JobSummary& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline JobSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline JobSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}

    /**
     * <p>A short, human-readable string to provide additional details about the
     * current status of the job.</p>
     */
    inline JobSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}


    /**
     * <p>The Unix timestamp for when the job was started (when the job transitioned
     * from the <code>STARTING</code> state to the <code>RUNNING</code> state).</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The Unix timestamp for when the job was started (when the job transitioned
     * from the <code>STARTING</code> state to the <code>RUNNING</code> state).</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the job was started (when the job transitioned
     * from the <code>STARTING</code> state to the <code>RUNNING</code> state).</p>
     */
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The Unix timestamp for when the job was started (when the job transitioned
     * from the <code>STARTING</code> state to the <code>RUNNING</code> state).</p>
     */
    inline JobSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}


    /**
     * <p>The Unix timestamp for when the job was stopped (when the job transitioned
     * from the <code>RUNNING</code> state to a terminal state, such as
     * <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The Unix timestamp for when the job was stopped (when the job transitioned
     * from the <code>RUNNING</code> state to a terminal state, such as
     * <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The Unix timestamp for when the job was stopped (when the job transitioned
     * from the <code>RUNNING</code> state to a terminal state, such as
     * <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The Unix timestamp for when the job was stopped (when the job transitioned
     * from the <code>RUNNING</code> state to a terminal state, such as
     * <code>SUCCEEDED</code> or <code>FAILED</code>).</p>
     */
    inline JobSummary& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}


    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline const ContainerSummary& GetContainer() const{ return m_container; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(const ContainerSummary& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline void SetContainer(ContainerSummary&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobSummary& WithContainer(const ContainerSummary& value) { SetContainer(value); return *this;}

    /**
     * <p>An object representing the details of the container that is associated with
     * the job.</p>
     */
    inline JobSummary& WithContainer(ContainerSummary&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline const ArrayPropertiesSummary& GetArrayProperties() const{ return m_arrayProperties; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline void SetArrayProperties(const ArrayPropertiesSummary& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline void SetArrayProperties(ArrayPropertiesSummary&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline JobSummary& WithArrayProperties(const ArrayPropertiesSummary& value) { SetArrayProperties(value); return *this;}

    /**
     * <p>The array properties of the job, if it is an array job.</p>
     */
    inline JobSummary& WithArrayProperties(ArrayPropertiesSummary&& value) { SetArrayProperties(std::move(value)); return *this;}


    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline const NodePropertiesSummary& GetNodeProperties() const{ return m_nodeProperties; }

    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }

    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline void SetNodeProperties(const NodePropertiesSummary& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }

    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline void SetNodeProperties(NodePropertiesSummary&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }

    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline JobSummary& WithNodeProperties(const NodePropertiesSummary& value) { SetNodeProperties(value); return *this;}

    /**
     * <p>The node properties for a single node in a job summary list.</p>
     */
    inline JobSummary& WithNodeProperties(NodePropertiesSummary&& value) { SetNodeProperties(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet;

    long long m_createdAt;
    bool m_createdAtHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet;

    long long m_startedAt;
    bool m_startedAtHasBeenSet;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet;

    ContainerSummary m_container;
    bool m_containerHasBeenSet;

    ArrayPropertiesSummary m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet;

    NodePropertiesSummary m_nodeProperties;
    bool m_nodePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
