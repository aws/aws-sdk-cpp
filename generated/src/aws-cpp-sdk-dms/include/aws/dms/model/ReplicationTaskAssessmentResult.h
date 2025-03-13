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
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult() = default;
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API ReplicationTaskAssessmentResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATABASEMIGRATIONSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The replication task identifier of the task on which the task assessment was
     * run. </p>
     */
    inline const Aws::String& GetReplicationTaskIdentifier() const { return m_replicationTaskIdentifier; }
    inline bool ReplicationTaskIdentifierHasBeenSet() const { return m_replicationTaskIdentifierHasBeenSet; }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    void SetReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { m_replicationTaskIdentifierHasBeenSet = true; m_replicationTaskIdentifier = std::forward<ReplicationTaskIdentifierT>(value); }
    template<typename ReplicationTaskIdentifierT = Aws::String>
    ReplicationTaskAssessmentResult& WithReplicationTaskIdentifier(ReplicationTaskIdentifierT&& value) { SetReplicationTaskIdentifier(std::forward<ReplicationTaskIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the replication task. </p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    ReplicationTaskAssessmentResult& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the task assessment was completed. </p>
     */
    inline const Aws::Utils::DateTime& GetReplicationTaskLastAssessmentDate() const { return m_replicationTaskLastAssessmentDate; }
    inline bool ReplicationTaskLastAssessmentDateHasBeenSet() const { return m_replicationTaskLastAssessmentDateHasBeenSet; }
    template<typename ReplicationTaskLastAssessmentDateT = Aws::Utils::DateTime>
    void SetReplicationTaskLastAssessmentDate(ReplicationTaskLastAssessmentDateT&& value) { m_replicationTaskLastAssessmentDateHasBeenSet = true; m_replicationTaskLastAssessmentDate = std::forward<ReplicationTaskLastAssessmentDateT>(value); }
    template<typename ReplicationTaskLastAssessmentDateT = Aws::Utils::DateTime>
    ReplicationTaskAssessmentResult& WithReplicationTaskLastAssessmentDate(ReplicationTaskLastAssessmentDateT&& value) { SetReplicationTaskLastAssessmentDate(std::forward<ReplicationTaskLastAssessmentDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentStatus() const { return m_assessmentStatus; }
    inline bool AssessmentStatusHasBeenSet() const { return m_assessmentStatusHasBeenSet; }
    template<typename AssessmentStatusT = Aws::String>
    void SetAssessmentStatus(AssessmentStatusT&& value) { m_assessmentStatusHasBeenSet = true; m_assessmentStatus = std::forward<AssessmentStatusT>(value); }
    template<typename AssessmentStatusT = Aws::String>
    ReplicationTaskAssessmentResult& WithAssessmentStatus(AssessmentStatusT&& value) { SetAssessmentStatus(std::forward<AssessmentStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The file containing the results of the task assessment. </p>
     */
    inline const Aws::String& GetAssessmentResultsFile() const { return m_assessmentResultsFile; }
    inline bool AssessmentResultsFileHasBeenSet() const { return m_assessmentResultsFileHasBeenSet; }
    template<typename AssessmentResultsFileT = Aws::String>
    void SetAssessmentResultsFile(AssessmentResultsFileT&& value) { m_assessmentResultsFileHasBeenSet = true; m_assessmentResultsFile = std::forward<AssessmentResultsFileT>(value); }
    template<typename AssessmentResultsFileT = Aws::String>
    ReplicationTaskAssessmentResult& WithAssessmentResultsFile(AssessmentResultsFileT&& value) { SetAssessmentResultsFile(std::forward<AssessmentResultsFileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The task assessment results in JSON format. </p> <p>The response object only
     * contains this field if you provide
     * <a>DescribeReplicationTaskAssessmentResultsMessage$ReplicationTaskArn</a> in the
     * request.</p>
     */
    inline const Aws::String& GetAssessmentResults() const { return m_assessmentResults; }
    inline bool AssessmentResultsHasBeenSet() const { return m_assessmentResultsHasBeenSet; }
    template<typename AssessmentResultsT = Aws::String>
    void SetAssessmentResults(AssessmentResultsT&& value) { m_assessmentResultsHasBeenSet = true; m_assessmentResults = std::forward<AssessmentResultsT>(value); }
    template<typename AssessmentResultsT = Aws::String>
    ReplicationTaskAssessmentResult& WithAssessmentResults(AssessmentResultsT&& value) { SetAssessmentResults(std::forward<AssessmentResultsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The URL of the S3 object containing the task assessment results. </p> <p>The
     * response object only contains this field if you provide
     * <a>DescribeReplicationTaskAssessmentResultsMessage$ReplicationTaskArn</a> in the
     * request.</p>
     */
    inline const Aws::String& GetS3ObjectUrl() const { return m_s3ObjectUrl; }
    inline bool S3ObjectUrlHasBeenSet() const { return m_s3ObjectUrlHasBeenSet; }
    template<typename S3ObjectUrlT = Aws::String>
    void SetS3ObjectUrl(S3ObjectUrlT&& value) { m_s3ObjectUrlHasBeenSet = true; m_s3ObjectUrl = std::forward<S3ObjectUrlT>(value); }
    template<typename S3ObjectUrlT = Aws::String>
    ReplicationTaskAssessmentResult& WithS3ObjectUrl(S3ObjectUrlT&& value) { SetS3ObjectUrl(std::forward<S3ObjectUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskIdentifier;
    bool m_replicationTaskIdentifierHasBeenSet = false;

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::Utils::DateTime m_replicationTaskLastAssessmentDate{};
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
