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
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p> The task assessment report in JSON format. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/ReplicationTaskAssessmentResult">AWS
   * API Reference</a></p>
   */
  class AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult
  {
  public:
    ReplicationTaskAssessmentResult();
    ReplicationTaskAssessmentResult(Aws::Utils::Json::JsonView jsonValue);
    ReplicationTaskAssessmentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}

    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}


    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskLastAssessmentDate() const{ return m_replicationTaskLastAssessmentDate; }

    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline bool ReplicationTaskLastAssessmentDateHasBeenSet() const { return m_replicationTaskLastAssessmentDateHasBeenSet; }

    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline void SetReplicationTaskLastAssessmentDate(const Aws::Utils::DateTime& value) { m_replicationTaskLastAssessmentDateHasBeenSet = true; m_replicationTaskLastAssessmentDate = value; }

    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline void SetReplicationTaskLastAssessmentDate(Aws::Utils::DateTime&& value) { m_replicationTaskLastAssessmentDateHasBeenSet = true; m_replicationTaskLastAssessmentDate = std::move(value); }

    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskLastAssessmentDate(const Aws::Utils::DateTime& value) { SetReplicationTaskLastAssessmentDate(value); return *this;}

    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline ReplicationTaskAssessmentResult& WithReplicationTaskLastAssessmentDate(Aws::Utils::DateTime&& value) { SetReplicationTaskLastAssessmentDate(std::move(value)); return *this;}


    /**
     * <p> The status of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentStatus() const{ return m_assessmentStatus; }

    /**
     * <p> The status of the task assessment. </p>
     */
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }

    /**
     * <p> The status of the task assessment. </p>
     */
    inline void SetAssessmentStatus(const Aws::String& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }

    /**
     * <p> The status of the task assessment. </p>
     */
    inline void SetAssessmentStatus(Aws::String&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::move(value); }

    /**
     * <p> The status of the task assessment. </p>
     */
    inline void SetAssessmentStatus(const char* value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus.assign(value); }

    /**
     * <p> The status of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(const Aws::String& value) { SetAssessmentStatus(value); return *this;}

    /**
     * <p> The status of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(Aws::String&& value) { SetAssessmentStatus(std::move(value)); return *this;}

    /**
     * <p> The status of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(const char* value) { SetAssessmentStatus(value); return *this;}


    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentResultsFile() const{ return m_assessmentResultsFile; }

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline bool AssessmentResultsFileHasBeenSet() const { return m_assessmentResultsFileHasBeenSet; }

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline void SetAssessmentResultsFile(const Aws::String& value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile = value; }

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline void SetAssessmentResultsFile(Aws::String&& value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile = std::move(value); }

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline void SetAssessmentResultsFile(const char* value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile.assign(value); }

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(const Aws::String& value) { SetAssessmentResultsFile(value); return *this;}

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(Aws::String&& value) { SetAssessmentResultsFile(std::move(value)); return *this;}

    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(const char* value) { SetAssessmentResultsFile(value); return *this;}


    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline const Aws::String& GetAssessmentResults() const{ return m_assessmentResults; }

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline bool AssessmentResultsHasBeenSet() const { return m_assessmentResultsHasBeenSet; }

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline void SetAssessmentResults(const Aws::String& value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults = value; }

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline void SetAssessmentResults(Aws::String&& value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults = std::move(value); }

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline void SetAssessmentResults(const char* value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults.assign(value); }

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(const Aws::String& value) { SetAssessmentResults(value); return *this;}

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(Aws::String&& value) { SetAssessmentResults(std::move(value)); return *this;}

    /**
     * <p> The task assessment results in JSON format. </p>
     */
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(const char* value) { SetAssessmentResults(value); return *this;}


    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline const Aws::String& GetS3ObjectUrl() const{ return m_s3ObjectUrl; }

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline bool S3ObjectUrlHasBeenSet() const { return m_s3ObjectUrlHasBeenSet; }

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline void SetS3ObjectUrl(const Aws::String& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = value; }

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline void SetS3ObjectUrl(Aws::String&& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = std::move(value); }

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline void SetS3ObjectUrl(const char* value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl.assign(value); }

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(const Aws::String& value) { SetS3ObjectUrl(value); return *this;}

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(Aws::String&& value) { SetS3ObjectUrl(std::move(value)); return *this;}

    /**
     * <p> The URL of the S3 object containing the task assessment results. </p>
     */
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(const char* value) { SetS3ObjectUrl(value); return *this;}

  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet;

    Aws::Utils::DateTime m_replicationTaskLastAssessmentDate;
    bool m_replicationTaskLastAssessmentDateHasBeenSet;

    Aws::String m_assessmentStatus;
    bool m_assessmentStatusHasBeenSet;

    Aws::String m_assessmentResultsFile;
    bool m_assessmentResultsFileHasBeenSet;

    Aws::String m_assessmentResults;
    bool m_assessmentResultsHasBeenSet;

    Aws::String m_s3ObjectUrl;
    bool m_s3ObjectUrlHasBeenSet;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
