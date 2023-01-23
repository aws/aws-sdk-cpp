/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/DescribeApplicableIndividualAssessmentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeApplicableIndividualAssessmentsRequest::DescribeApplicableIndividualAssessmentsRequest() : 
    m_replicationTaskArnHasBeenSet(false),
    m_replicationInstanceArnHasBeenSet(false),
    m_sourceEngineNameHasBeenSet(false),
    m_targetEngineNameHasBeenSet(false),
    m_migrationType(MigrationTypeValue::NOT_SET),
    m_migrationTypeHasBeenSet(false),
    m_maxRecords(0),
    m_maxRecordsHasBeenSet(false),
    m_markerHasBeenSet(false)
{
}

Aws::String DescribeApplicableIndividualAssessmentsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_replicationInstanceArnHasBeenSet)
  {
   payload.WithString("ReplicationInstanceArn", m_replicationInstanceArn);

  }

  if(m_sourceEngineNameHasBeenSet)
  {
   payload.WithString("SourceEngineName", m_sourceEngineName);

  }

  if(m_targetEngineNameHasBeenSet)
  {
   payload.WithString("TargetEngineName", m_targetEngineName);

  }

  if(m_migrationTypeHasBeenSet)
  {
   payload.WithString("MigrationType", MigrationTypeValueMapper::GetNameForMigrationTypeValue(m_migrationType));
  }

  if(m_maxRecordsHasBeenSet)
  {
   payload.WithInteger("MaxRecords", m_maxRecords);

  }

  if(m_markerHasBeenSet)
  {
   payload.WithString("Marker", m_marker);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeApplicableIndividualAssessmentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.DescribeApplicableIndividualAssessments"));
  return headers;

}




