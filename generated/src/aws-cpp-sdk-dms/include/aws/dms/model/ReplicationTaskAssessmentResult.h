/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ReplicationTaskAssessmentResult
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult();
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const{ return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    inline void SetReplicationTaskIdentifier(const Aws::String& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = value; }
    inline void SetReplicationTaskIdentifier(Aws::String&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::move(value); }
    inline void SetReplicationTaskIdentifier(const char* value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier.assign(value); }
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(const Aws::String& value) { SetReplicationTaskIdentifier(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(Aws::String&& value) { SetReplicationTaskIdentifier(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(const char* value) { SetReplicationTaskIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskLastAssessmentDate() const{ return m_replicationTaskLastAssessmentDate; }
    inline bool ReplicationTaskLastAssessmentDateHasBeenSet() const { return m_replicationTaskLastAssessmentDateHasBeenSet; }
    inline void SetReplicationTaskLastAssessmentDate(const Aws::Utils::DateTime& value) { m_replicationTaskLastAssessmentDateHasBeenSet = true; m_replicationTaskLastAssessmentDate = value; }
    inline void SetReplicationTaskLastAssessmentDate(Aws::Utils::DateTime&& value) { m_replicationTaskLastAssessmentDateHasBeenSet = true; m_replicationTaskLastAssessmentDate = std::move(value); }
    inline ReplicationTaskAssessmentResult& WithReplicationTaskLastAssessmentDate(const Aws::Utils::DateTime& value) { SetReplicationTaskLastAssessmentDate(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithReplicationTaskLastAssessmentDate(Aws::Utils::DateTime&& value) { SetReplicationTaskLastAssessmentDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentStatus() const{ return m_assessmentStatus; }
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
    inline void SetAssessmentStatus(const Aws::String& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = value; }
    inline void SetAssessmentStatus(Aws::String&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::move(value); }
    inline void SetAssessmentStatus(const char* value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus.assign(value); }
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(const Aws::String& value) { SetAssessmentStatus(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(Aws::String&& value) { SetAssessmentStatus(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentStatus(const char* value) { SetAssessmentStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentResultsFile() const{ return m_assessmentResultsFile; }
    inline bool AssessmentResultsFileHasBeenSet() const { return m_assessmentResultsFileHasBeenSet; }
    inline void SetAssessmentResultsFile(const Aws::String& value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile = value; }
    inline void SetAssessmentResultsFile(Aws::String&& value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile = std::move(value); }
    inline void SetAssessmentResultsFile(const char* value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile.assign(value); }
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(const Aws::String& value) { SetAssessmentResultsFile(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(Aws::String&& value) { SetAssessmentResultsFile(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentResultsFile(const char* value) { SetAssessmentResultsFile(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task assessment results in JSON format. </p> <p>The response object only
     * contains this field if you provide
     * <a>DescribeReplicationTaskAssessmentResultsMessage$ReplicationTaskArn</a> in the
     * request.</p>
     */
    inline const Aws::String& GetAssessmentResults() const{ return m_assessmentResults; }
    inline bool AssessmentResultsHasBeenSet() const { return m_assessmentResultsHasBeenSet; }
    inline void SetAssessmentResults(const Aws::String& value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults = value; }
    inline void SetAssessmentResults(Aws::String&& value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults = std::move(value); }
    inline void SetAssessmentResults(const char* value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults.assign(value); }
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(const Aws::String& value) { SetAssessmentResults(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(Aws::String&& value) { SetAssessmentResults(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithAssessmentResults(const char* value) { SetAssessmentResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL of the S3 object containing the task assessment results. </p> <p>The
     * response object only contains this field if you provide
     * <a>DescribeReplicationTaskAssessmentResultsMessage$ReplicationTaskArn</a> in the
     * request.</p>
     */
    inline const Aws::String& GetS3ObjectUrl() const{ return m_s3ObjectUrl; }
    inline bool S3ObjectUrlHasBeenSet() const { return m_s3ObjectUrlHasBeenSet; }
    inline void SetS3ObjectUrl(const Aws::String& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = value; }
    inline void SetS3ObjectUrl(Aws::String&& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = std::move(value); }
    inline void SetS3ObjectUrl(const char* value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl.assign(value); }
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(const Aws::String& value) { SetS3ObjectUrl(value); return *this;}
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(Aws::String&& value) { SetS3ObjectUrl(std::move(value)); return *this;}
    inline ReplicationTaskAssessmentResult& WithS3ObjectUrl(const char* value) { SetS3ObjectUrl(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskLastAssessmentDate;
    bool m_replicationTaskLastAssessmentDateHasBeenSet = false;

    Aws::String m_assessmentStatus;
    bool m_assessmentStatusHasBeenSet = false;

    Aws::String m_assessmentResultsFile;
    bool m_assessmentResultsFileHasBeenSet = false;

    Aws::String m_assessmentResults;
    bool m_assessmentResultsHasBeenSet = false;

    Aws::String m_s3ObjectUrl;
    bool m_s3ObjectUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
