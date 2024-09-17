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
    AWS_DATABASEMIGRATIONSERVICE_API DescribeApplicableIndividualAssessmentsRequest();

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
    inline const Aws::String& GetReplicationTaskArn() const{ return m_replicationTaskArn; }
    inline bool ReplicationTaskArnHasBeenSet() const { return m_replicationTaskArnHasBeenSet; }
    inline void SetReplicationTaskArn(const Aws::String& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = value; }
    inline void SetReplicationTaskArn(Aws::String&& value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn = std::move(value); }
    inline void SetReplicationTaskArn(const char* value) { m_replicationTaskArnHasBeenSet = true; m_replicationTaskArn.assign(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationTaskArn(const Aws::String& value) { SetReplicationTaskArn(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationTaskArn(Aws::String&& value) { SetReplicationTaskArn(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationTaskArn(const char* value) { SetReplicationTaskArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>ARN of a replication instance on which you want to base the default list of
     * individual assessments.</p>
     */
    inline const Aws::String& GetReplicationInstanceArn() const{ return m_replicationInstanceArn; }
    inline bool ReplicationInstanceArnHasBeenSet() const { return m_replicationInstanceArnHasBeenSet; }
    inline void SetReplicationInstanceArn(const Aws::String& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = value; }
    inline void SetReplicationInstanceArn(Aws::String&& value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn = std::move(value); }
    inline void SetReplicationInstanceArn(const char* value) { m_replicationInstanceArnHasBeenSet = true; m_replicationInstanceArn.assign(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationInstanceArn(const Aws::String& value) { SetReplicationInstanceArn(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationInstanceArn(Aws::String&& value) { SetReplicationInstanceArn(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithReplicationInstanceArn(const char* value) { SetReplicationInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a database engine that the specified replication instance supports as
     * a source.</p>
     */
    inline const Aws::String& GetSourceEngineName() const{ return m_sourceEngineName; }
    inline bool SourceEngineNameHasBeenSet() const { return m_sourceEngineNameHasBeenSet; }
    inline void SetSourceEngineName(const Aws::String& value) { m_sourceEngineNameHasBeenSet = true; m_sourceEngineName = value; }
    inline void SetSourceEngineName(Aws::String&& value) { m_sourceEngineNameHasBeenSet = true; m_sourceEngineName = std::move(value); }
    inline void SetSourceEngineName(const char* value) { m_sourceEngineNameHasBeenSet = true; m_sourceEngineName.assign(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithSourceEngineName(const Aws::String& value) { SetSourceEngineName(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithSourceEngineName(Aws::String&& value) { SetSourceEngineName(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithSourceEngineName(const char* value) { SetSourceEngineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of a database engine that the specified replication instance supports as
     * a target.</p>
     */
    inline const Aws::String& GetTargetEngineName() const{ return m_targetEngineName; }
    inline bool TargetEngineNameHasBeenSet() const { return m_targetEngineNameHasBeenSet; }
    inline void SetTargetEngineName(const Aws::String& value) { m_targetEngineNameHasBeenSet = true; m_targetEngineName = value; }
    inline void SetTargetEngineName(Aws::String&& value) { m_targetEngineNameHasBeenSet = true; m_targetEngineName = std::move(value); }
    inline void SetTargetEngineName(const char* value) { m_targetEngineNameHasBeenSet = true; m_targetEngineName.assign(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithTargetEngineName(const Aws::String& value) { SetTargetEngineName(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithTargetEngineName(Aws::String&& value) { SetTargetEngineName(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithTargetEngineName(const char* value) { SetTargetEngineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the migration type that each provided individual assessment must
     * support.</p>
     */
    inline const MigrationTypeValue& GetMigrationType() const{ return m_migrationType; }
    inline bool MigrationTypeHasBeenSet() const { return m_migrationTypeHasBeenSet; }
    inline void SetMigrationType(const MigrationTypeValue& value) { m_migrationTypeHasBeenSet = true; m_migrationType = value; }
    inline void SetMigrationType(MigrationTypeValue&& value) { m_migrationTypeHasBeenSet = true; m_migrationType = std::move(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithMigrationType(const MigrationTypeValue& value) { SetMigrationType(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithMigrationType(MigrationTypeValue&& value) { SetMigrationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of records to include in the response. If more records exist
     * than the specified <code>MaxRecords</code> value, a pagination token called a
     * marker is included in the response so that the remaining results can be
     * retrieved.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
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
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeApplicableIndividualAssessmentsRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeApplicableIndividualAssessmentsRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_replicationTaskArn;
    bool m_replicationTaskArnHasBeenSet = false;

    Aws::String m_replicationInstanceArn;
    bool m_replicationInstanceArnHasBeenSet = false;

    Aws::String m_sourceEngineName;
    bool m_sourceEngineNameHasBeenSet = false;

    Aws::String m_targetEngineName;
    bool m_targetEngineNameHasBeenSet = false;

    MigrationTypeValue m_migrationType;
    bool m_migrationTypeHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
