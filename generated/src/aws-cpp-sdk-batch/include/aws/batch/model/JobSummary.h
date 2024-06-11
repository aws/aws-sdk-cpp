/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents summary details of a job.</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/JobSummary">AWS
   * API Reference</a></p>
   */
  class JobSummary
  {
  public:
    AWS_BATCH_API JobSummary();
    AWS_BATCH_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job.</p>
     */
    inline const Aws::String& GetJobArn() const{ return m_jobArn; }
    inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
    inline void SetJobArn(const Aws::String& value) { m_jobArnHasBeenSet = true; m_jobArn = value; }
    inline void SetJobArn(Aws::String&& value) { m_jobArnHasBeenSet = true; m_jobArn = std::move(value); }
    inline void SetJobArn(const char* value) { m_jobArnHasBeenSet = true; m_jobArn.assign(value); }
    inline JobSummary& WithJobArn(const Aws::String& value) { SetJobArn(value); return *this;}
    inline JobSummary& WithJobArn(Aws::String&& value) { SetJobArn(std::move(value)); return *this;}
    inline JobSummary& WithJobArn(const char* value) { SetJobArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job ID.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline JobSummary& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline JobSummary& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline JobSummary& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline JobSummary& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline JobSummary& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline JobSummary& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp (in milliseconds) for when the job was created. For
     * non-array jobs and parent array jobs, this is when the job entered the
     * <code>SUBMITTED</code> state (at the time <a
     * href="https://docs.aws.amazon.com/batch/latest/APIReference/API_SubmitJob.html">SubmitJob</a>
     * was called). For array child jobs, this is when the child job was spawned by its
     * parent and entered the <code>PENDING</code> state.</p>
     */
    inline long long GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(long long value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline JobSummary& WithCreatedAt(long long value) { SetCreatedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status for the job.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline JobSummary& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}
    inline JobSummary& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A short, human-readable string to provide more details for the current status
     * of the job.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline JobSummary& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline JobSummary& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline JobSummary& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the job was started. More specifically, it's when
     * the job transitioned from the <code>STARTING</code> state to the
     * <code>RUNNING</code> state.</p>
     */
    inline long long GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(long long value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline JobSummary& WithStartedAt(long long value) { SetStartedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Unix timestamp for when the job was stopped. More specifically, it's when
     * the job transitioned from the <code>RUNNING</code> state to a terminal state,
     * such as <code>SUCCEEDED</code> or <code>FAILED</code>.</p>
     */
    inline long long GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(long long value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline JobSummary& WithStoppedAt(long long value) { SetStoppedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that represents the details of the container that's associated with
     * the job.</p>
     */
    inline const ContainerSummary& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const ContainerSummary& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(ContainerSummary&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline JobSummary& WithContainer(const ContainerSummary& value) { SetContainer(value); return *this;}
    inline JobSummary& WithContainer(ContainerSummary&& value) { SetContainer(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The array properties of the job, if it's an array job.</p>
     */
    inline const ArrayPropertiesSummary& GetArrayProperties() const{ return m_arrayProperties; }
    inline bool ArrayPropertiesHasBeenSet() const { return m_arrayPropertiesHasBeenSet; }
    inline void SetArrayProperties(const ArrayPropertiesSummary& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = value; }
    inline void SetArrayProperties(ArrayPropertiesSummary&& value) { m_arrayPropertiesHasBeenSet = true; m_arrayProperties = std::move(value); }
    inline JobSummary& WithArrayProperties(const ArrayPropertiesSummary& value) { SetArrayProperties(value); return *this;}
    inline JobSummary& WithArrayProperties(ArrayPropertiesSummary&& value) { SetArrayProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node properties for a single node in a job summary list.</p> 
     * <p>This isn't applicable to jobs that are running on Fargate resources.</p>
     * 
     */
    inline const NodePropertiesSummary& GetNodeProperties() const{ return m_nodeProperties; }
    inline bool NodePropertiesHasBeenSet() const { return m_nodePropertiesHasBeenSet; }
    inline void SetNodeProperties(const NodePropertiesSummary& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = value; }
    inline void SetNodeProperties(NodePropertiesSummary&& value) { m_nodePropertiesHasBeenSet = true; m_nodeProperties = std::move(value); }
    inline JobSummary& WithNodeProperties(const NodePropertiesSummary& value) { SetNodeProperties(value); return *this;}
    inline JobSummary& WithNodeProperties(NodePropertiesSummary&& value) { SetNodeProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the job definition.</p>
     */
    inline const Aws::String& GetJobDefinition() const{ return m_jobDefinition; }
    inline bool JobDefinitionHasBeenSet() const { return m_jobDefinitionHasBeenSet; }
    inline void SetJobDefinition(const Aws::String& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = value; }
    inline void SetJobDefinition(Aws::String&& value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition = std::move(value); }
    inline void SetJobDefinition(const char* value) { m_jobDefinitionHasBeenSet = true; m_jobDefinition.assign(value); }
    inline JobSummary& WithJobDefinition(const Aws::String& value) { SetJobDefinition(value); return *this;}
    inline JobSummary& WithJobDefinition(Aws::String&& value) { SetJobDefinition(std::move(value)); return *this;}
    inline JobSummary& WithJobDefinition(const char* value) { SetJobDefinition(value); return *this;}
    ///@}
  private:

    Aws::String m_jobArn;
    bool m_jobArnHasBeenSet = false;

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    long long m_createdAt;
    bool m_createdAtHasBeenSet = false;

    JobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    long long m_startedAt;
    bool m_startedAtHasBeenSet = false;

    long long m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    ContainerSummary m_container;
    bool m_containerHasBeenSet = false;

    ArrayPropertiesSummary m_arrayProperties;
    bool m_arrayPropertiesHasBeenSet = false;

    NodePropertiesSummary m_nodeProperties;
    bool m_nodePropertiesHasBeenSet = false;

    Aws::String m_jobDefinition;
    bool m_jobDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
