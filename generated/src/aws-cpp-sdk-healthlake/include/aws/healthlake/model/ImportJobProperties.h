﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/JobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/healthlake/model/InputDataConfig.h>
#include <aws/healthlake/model/OutputDataConfig.h>
#include <aws/healthlake/model/JobProgressReport.h>
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
namespace HealthLake
{
namespace Model
{

  /**
   * <p>Displays the properties of the import job, including the ID, Arn, Name, the
   * status of the job, and the progress report of the job.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ImportJobProperties">AWS
   * API Reference</a></p>
   */
  class ImportJobProperties
  {
  public:
    AWS_HEALTHLAKE_API ImportJobProperties();
    AWS_HEALTHLAKE_API ImportJobProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API ImportJobProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_HEALTHLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS-generated id number for the Import job.</p>
     */
    inline const Aws::String& GetJobId() const{ return m_jobId; }
    inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
    inline void SetJobId(const Aws::String& value) { m_jobIdHasBeenSet = true; m_jobId = value; }
    inline void SetJobId(Aws::String&& value) { m_jobIdHasBeenSet = true; m_jobId = std::move(value); }
    inline void SetJobId(const char* value) { m_jobIdHasBeenSet = true; m_jobId.assign(value); }
    inline ImportJobProperties& WithJobId(const Aws::String& value) { SetJobId(value); return *this;}
    inline ImportJobProperties& WithJobId(Aws::String&& value) { SetJobId(std::move(value)); return *this;}
    inline ImportJobProperties& WithJobId(const char* value) { SetJobId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user-generated name for an Import job.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }
    inline ImportJobProperties& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}
    inline ImportJobProperties& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}
    inline ImportJobProperties& WithJobName(const char* value) { SetJobName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job status for an Import job. Possible statuses are SUBMITTED,
     * IN_PROGRESS, COMPLETED_WITH_ERRORS, COMPLETED, FAILED.</p>
     */
    inline const JobStatus& GetJobStatus() const{ return m_jobStatus; }
    inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
    inline void SetJobStatus(const JobStatus& value) { m_jobStatusHasBeenSet = true; m_jobStatus = value; }
    inline void SetJobStatus(JobStatus&& value) { m_jobStatusHasBeenSet = true; m_jobStatus = std::move(value); }
    inline ImportJobProperties& WithJobStatus(const JobStatus& value) { SetJobStatus(value); return *this;}
    inline ImportJobProperties& WithJobStatus(JobStatus&& value) { SetJobStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Import job was submitted for processing.</p>
     */
    inline const Aws::Utils::DateTime& GetSubmitTime() const{ return m_submitTime; }
    inline bool SubmitTimeHasBeenSet() const { return m_submitTimeHasBeenSet; }
    inline void SetSubmitTime(const Aws::Utils::DateTime& value) { m_submitTimeHasBeenSet = true; m_submitTime = value; }
    inline void SetSubmitTime(Aws::Utils::DateTime&& value) { m_submitTimeHasBeenSet = true; m_submitTime = std::move(value); }
    inline ImportJobProperties& WithSubmitTime(const Aws::Utils::DateTime& value) { SetSubmitTime(value); return *this;}
    inline ImportJobProperties& WithSubmitTime(Aws::Utils::DateTime&& value) { SetSubmitTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the Import job was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline ImportJobProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline ImportJobProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The datastore id used when the Import job was created. </p>
     */
    inline const Aws::String& GetDatastoreId() const{ return m_datastoreId; }
    inline bool DatastoreIdHasBeenSet() const { return m_datastoreIdHasBeenSet; }
    inline void SetDatastoreId(const Aws::String& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = value; }
    inline void SetDatastoreId(Aws::String&& value) { m_datastoreIdHasBeenSet = true; m_datastoreId = std::move(value); }
    inline void SetDatastoreId(const char* value) { m_datastoreIdHasBeenSet = true; m_datastoreId.assign(value); }
    inline ImportJobProperties& WithDatastoreId(const Aws::String& value) { SetDatastoreId(value); return *this;}
    inline ImportJobProperties& WithDatastoreId(Aws::String&& value) { SetDatastoreId(std::move(value)); return *this;}
    inline ImportJobProperties& WithDatastoreId(const char* value) { SetDatastoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input data configuration that was supplied when the Import job was
     * created.</p>
     */
    inline const InputDataConfig& GetInputDataConfig() const{ return m_inputDataConfig; }
    inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
    inline void SetInputDataConfig(const InputDataConfig& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = value; }
    inline void SetInputDataConfig(InputDataConfig&& value) { m_inputDataConfigHasBeenSet = true; m_inputDataConfig = std::move(value); }
    inline ImportJobProperties& WithInputDataConfig(const InputDataConfig& value) { SetInputDataConfig(value); return *this;}
    inline ImportJobProperties& WithInputDataConfig(InputDataConfig&& value) { SetInputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OutputDataConfig& GetJobOutputDataConfig() const{ return m_jobOutputDataConfig; }
    inline bool JobOutputDataConfigHasBeenSet() const { return m_jobOutputDataConfigHasBeenSet; }
    inline void SetJobOutputDataConfig(const OutputDataConfig& value) { m_jobOutputDataConfigHasBeenSet = true; m_jobOutputDataConfig = value; }
    inline void SetJobOutputDataConfig(OutputDataConfig&& value) { m_jobOutputDataConfigHasBeenSet = true; m_jobOutputDataConfig = std::move(value); }
    inline ImportJobProperties& WithJobOutputDataConfig(const OutputDataConfig& value) { SetJobOutputDataConfig(value); return *this;}
    inline ImportJobProperties& WithJobOutputDataConfig(OutputDataConfig&& value) { SetJobOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Displays the progress of the import job, including total resources scanned,
     * total resources ingested, and total size of data ingested.</p>
     */
    inline const JobProgressReport& GetJobProgressReport() const{ return m_jobProgressReport; }
    inline bool JobProgressReportHasBeenSet() const { return m_jobProgressReportHasBeenSet; }
    inline void SetJobProgressReport(const JobProgressReport& value) { m_jobProgressReportHasBeenSet = true; m_jobProgressReport = value; }
    inline void SetJobProgressReport(JobProgressReport&& value) { m_jobProgressReportHasBeenSet = true; m_jobProgressReport = std::move(value); }
    inline ImportJobProperties& WithJobProgressReport(const JobProgressReport& value) { SetJobProgressReport(value); return *this;}
    inline ImportJobProperties& WithJobProgressReport(JobProgressReport&& value) { SetJobProgressReport(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that gives AWS HealthLake access to your input
     * data.</p>
     */
    inline const Aws::String& GetDataAccessRoleArn() const{ return m_dataAccessRoleArn; }
    inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
    inline void SetDataAccessRoleArn(const Aws::String& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = value; }
    inline void SetDataAccessRoleArn(Aws::String&& value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn = std::move(value); }
    inline void SetDataAccessRoleArn(const char* value) { m_dataAccessRoleArnHasBeenSet = true; m_dataAccessRoleArn.assign(value); }
    inline ImportJobProperties& WithDataAccessRoleArn(const Aws::String& value) { SetDataAccessRoleArn(value); return *this;}
    inline ImportJobProperties& WithDataAccessRoleArn(Aws::String&& value) { SetDataAccessRoleArn(std::move(value)); return *this;}
    inline ImportJobProperties& WithDataAccessRoleArn(const char* value) { SetDataAccessRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation of any errors that may have occurred during the FHIR import
     * job. </p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ImportJobProperties& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ImportJobProperties& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ImportJobProperties& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_jobId;
    bool m_jobIdHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    JobStatus m_jobStatus;
    bool m_jobStatusHasBeenSet = false;

    Aws::Utils::DateTime m_submitTime;
    bool m_submitTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_datastoreId;
    bool m_datastoreIdHasBeenSet = false;

    InputDataConfig m_inputDataConfig;
    bool m_inputDataConfigHasBeenSet = false;

    OutputDataConfig m_jobOutputDataConfig;
    bool m_jobOutputDataConfigHasBeenSet = false;

    JobProgressReport m_jobProgressReport;
    bool m_jobProgressReportHasBeenSet = false;

    Aws::String m_dataAccessRoleArn;
    bool m_dataAccessRoleArnHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
