/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dms/DatabaseMigrationService_EXPORTS.h>
#include <aws/dms/DatabaseMigrationServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dms/model/MigrationTypeValue.h>
#include <utility>

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dms-2016-01-01/DescribeApplicableIndividualAssessmentsMessage">AWS
   * API Reference</a></p>
   */
  class DescribeApplicableIndividualAssessmentsRequest : public DatabaseMigrationServiceRequest
  {
  public:
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeApplicableIndividualAssessments"; }

    AWS_DATABASEMIGRATIONSERVICE_API Aws::String SerializePayload() const override;

    AWS_DATABASEMIGRATIONSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of a migration task on which you want to base the
     * default list of individual assessments.</p>
     */
    inline const Aws::String& GetReplicationTaskArn() const { return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    template<typename ReplicationTaskArnT = Aws::String>
    void SetReplicationTaskArn(ReplicationTaskArnT&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::forward<ReplicationTaskArnT>(value); }
    template<typename ReplicationTaskArnT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithReplicationTaskArn(ReplicationTaskArnT&& value) { SetReplicationTaskArn(std::forward<ReplicationTaskArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a replication instance on which you want to base the default list of
     * individual assessments.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const { return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    template<typename ReplicationInstanceArnT = Aws::String>
    void SetReplicationInstanceArn(ReplicationInstanceArnT&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::forward<ReplicationInstanceArnT>(value); }
    template<typename ReplicationInstanceArnT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithReplicationInstanceArn(ReplicationInstanceArnT&& value) { SetReplicationInstanceArn(std::forward<ReplicationInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) of a serverless replication on which you want to
     * base the default list of individual assessments.</p>
     */
    inline const Aws::String& GetReplicationConfigArn() const { return m_replicationConfigArn; }
    inline bool ReplicationConfigArnHasBeenSet() const { return m_replicationConfigArnHasBeenSet; }
    template<typename ReplicationConfigArnT = Aws::String>
    void SetReplicationConfigArn(ReplicationConfigArnT&& value) { m_replicationConfigArnHasBeenSet = true; m_replicationConfigArn = std::forward<ReplicationConfigArnT>(value); }
    template<typename ReplicationConfigArnT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithReplicationConfigArn(ReplicationConfigArnT&& value) { SetReplicationConfigArn(std::forward<ReplicationConfigArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a database engine that the specified replication instance supports as
     * a source.</p>
     */
    inline const Aws::String& GetSourceEngineName() const { return m_sourceEngineName; }
    inline bool SourceEngineNameHasBeenSet() const { return m_sourceEngineNameHasBeenSet; }
    template<typename SourceEngineNameT = Aws::String>
    void SetSourceEngineName(SourceEngineNameT&& value) { m_sourceEngineNameHasBeenSet = true; m_sourceEngineName = std::forward<SourceEngineNameT>(value); }
    template<typename SourceEngineNameT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithSourceEngineName(SourceEngineNameT&& value) { SetSourceEngineName(std::forward<SourceEngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a database engine that the specified replication instance supports as
     * a target.</p>
     */
    inline const Aws::String& GetTargetEngineName() const { return m_targetEngineName; }
    inline bool TargetEngineNameHasBeenSet() const { return m_targetEngineNameHasBeenSet; }
    template<typename TargetEngineNameT = Aws::String>
    void SetTargetEngineName(TargetEngineNameT&& value) { m_targetEngineNameHasBeenSet = true; m_targetEngineName = std::forward<TargetEngineNameT>(value); }
    template<typename TargetEngineNameT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithTargetEngineName(TargetEngineNameT&& value) { SetTargetEngineName(std::forward<TargetEngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the migration type that each provided individual assessment must
     * support.</p>
     */
    inline MigrationTypeValue GetMigrationType() const { return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    inline void SetMigrationType(MigrationTypeValue value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }
    inline DescribeApplicableIndividualAssessmentsRequest& WithMigrationType(MigrationTypeValue value) { SetMigrationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of records to include in the response. If more records exist
     * than the specified <code>MaxRecords</code> value, a pagination token called a
     * marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline int GetMaxRecords() const { return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeApplicableIndividualAssessmentsRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional pagination token provided by a previous request. If this parameter
     * is specified, the response includes only records beyond the marker, up to the
     * value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    DescribeApplicableIndividualAssessmentsRequest& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::String m_replicationConfigArn;
    bool m_replicationConfigArnHasBeenSet = false;

    Aws::String m_sourceEngineName;
    bool m_sourceEngineNameHasBeenSet = false;

    Aws::String m_targetEngineName;
    bool m_targetEngineNameHasBeenSet = false;

    MigrationTypeValue m_migrationType{MigrationTypeValue::NOT_SET};
    bool m_migrationTypeHasBeenSet = false;

    int m_maxRecords{0};
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
