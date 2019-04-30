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
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/OperationName.h>
#include <aws/s3control/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/s3control/model/JobProgressSummary.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{

  /**
   * <p>Contains the configuration and status information for a single job retrieved
   * as part of a job list.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3control-2018-08-20/JobListDescriptor">AWS
   * API Reference</a></p>
   */
  class AWS_S3CONTROL_API JobListDescriptor
  {
  public:
    JobListDescriptor();
    JobListDescriptor(const Aws::Utils::Xml::XmlNode& xmlNode);
    JobListDescriptor& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    /**
     * <p>The ID for the specified job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }

    /**
     * <p>The ID for the specified job.</p>
     */
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }

    /**
     * <p>The ID for the specified job.</p>
     */
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }

    /**
     * <p>The ID for the specified job.</p>
     */
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }

    /**
     * <p>The ID for the specified job.</p>
     */
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }

    /**
     * <p>The ID for the specified job.</p>
     */
    inline JobListDescriptor& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}

    /**
     * <p>The ID for the specified job.</p>
     */
    inline JobListDescriptor& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}

    /**
     * <p>The ID for the specified job.</p>
     */
    inline JobListDescriptor& WithJobId(const char* value) { SetJobId(value); return *this;}


    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline JobListDescriptor& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline JobListDescriptor& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The user-specified description that was included in the specified job's
     * <code>Create Job</code> request.</p>
     */
    inline JobListDescriptor& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline const OperationName& GetOperation() const{ return m_operation; }

    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }

    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline void SetOperation(const OperationName& value) { m_operationHasBeenSet = true; m_operation = value; }

    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline void SetOperation(OperationName&& value) { m_operationHasBeenSet = true; m_operation = std::move(value); }

    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline JobListDescriptor& WithOperation(const OperationName& value) { SetOperation(value); return *this;}

    /**
     * <p>The operation that the specified job is configured to run on each object
     * listed in the manifest.</p>
     */
    inline JobListDescriptor& WithOperation(OperationName&& value) { SetOperation(std::move(value)); return *this;}


    /**
     * <p>The current priority for the specified job.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The current priority for the specified job.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The current priority for the specified job.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The current priority for the specified job.</p>
     */
    inline JobListDescriptor& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The specified job's current status.</p>
     */
    inline const JobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The specified job's current status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The specified job's current status.</p>
     */
    inline void SetStatus(const JobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The specified job's current status.</p>
     */
    inline void SetStatus(JobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The specified job's current status.</p>
     */
    inline JobListDescriptor& WithStatus(const JobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The specified job's current status.</p>
     */
    inline JobListDescriptor& WithStatus(JobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline JobListDescriptor& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>A timestamp indicating when the specified job was created.</p>
     */
    inline JobListDescriptor& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline const Aws::Utils::DateTime& GetTerminationDate() const{ return m_terminationDate; }

    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline bool TerminationDateHasBeenSet() const { return m_terminationDateHasBeenSet; }

    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline void SetTerminationDate(const Aws::Utils::DateTime& value) { m_terminationDateHasBeenSet = true; m_terminationDate = value; }

    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline void SetTerminationDate(Aws::Utils::DateTime&& value) { m_terminationDateHasBeenSet = true; m_terminationDate = std::move(value); }

    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline JobListDescriptor& WithTerminationDate(const Aws::Utils::DateTime& value) { SetTerminationDate(value); return *this;}

    /**
     * <p>A timestamp indicating when the specified job terminated. A job's termination
     * date is the date and time when it succeeded, failed, or was canceled.</p>
     */
    inline JobListDescriptor& WithTerminationDate(Aws::Utils::DateTime&& value) { SetTerminationDate(std::move(value)); return *this;}


    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline const JobProgressSummary& GetProgressSummary() const{ return m_progressSummary; }

    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline bool ProgressSummaryHasBeenSet() const { return m_progressSummaryHasBeenSet; }

    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline void SetProgressSummary(const JobProgressSummary& value) { m_progressSummaryHasBeenSet = true; m_progressSummary = value; }

    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline void SetProgressSummary(JobProgressSummary&& value) { m_progressSummaryHasBeenSet = true; m_progressSummary = std::move(value); }

    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline JobListDescriptor& WithProgressSummary(const JobProgressSummary& value) { SetProgressSummary(value); return *this;}

    /**
     * <p>Describes the total number of tasks that the specified job has executed, the
     * number of tasks that succeeded, and the number of tasks that failed.</p>
     */
    inline JobListDescriptor& WithProgressSummary(JobProgressSummary&& value) { SetProgressSummary(std::move(value)); return *this;}

  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    OperationName m_operation;
    bool m_operationHasBeenSet;

    int m_priority;
    bool m_priorityHasBeenSet;

    JobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_terminationDate;
    bool m_terminationDateHasBeenSet;

    JobProgressSummary m_progressSummary;
    bool m_progressSummaryHasBeenSet;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
