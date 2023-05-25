/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTaskAssessmentRun.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ReplicationTaskAssessmentRun::ReplicationTaskAssessmentRun() : 
    m_replicationTaskAssessmentRunArnHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_replicationTaskAssessmentRunCreationDateHasBeenSet(false),
    m_assessmentProgressHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_resultLocationBucketHasBeenSet(false),
    m_resultLocationFolderHasBeenSet(false),
    m_resultEncryptionModeHasBeenSet(false),
    m_resultKmsKeyArnHasBeenSet(false),
    m_assessmentRunNameHasBeenSet(false)
{
}

ReplicationTaskAssessmentRun::ReplicationTaskAssessmentRun(JsonView jsonValue) : 
    m_replicationTaskAssessmentRunArnHasBeenSet(false),
    m_replicationTaskArnHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_replicationTaskAssessmentRunCreationDateHasBeenSet(false),
    m_assessmentProgressHasBeenSet(false),
    m_lastFailureMessageHasBeenSet(false),
    m_serviceAccessRoleArnHasBeenSet(false),
    m_resultLocationBucketHasBeenSet(false),
    m_resultLocationFolderHasBeenSet(false),
    m_resultEncryptionModeHasBeenSet(false),
    m_resultKmsKeyArnHasBeenSet(false),
    m_assessmentRunNameHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskAssessmentRun& ReplicationTaskAssessmentRun::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationTaskAssessmentRunArn"))
  {
    m_replicationTaskAssessmentRunArn = jsonValue.GetString("ReplicationTaskAssessmentRunArn");

    m_replicationTaskAssessmentRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskArn"))
  {
    m_replicationTaskArn = jsonValue.GetString("ReplicationTaskArn");

    m_replicationTaskArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskAssessmentRunCreationDate"))
  {
    m_replicationTaskAssessmentRunCreationDate = jsonValue.GetDouble("ReplicationTaskAssessmentRunCreationDate");

    m_replicationTaskAssessmentRunCreationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssessmentProgress"))
  {
    m_assessmentProgress = jsonValue.GetObject("AssessmentProgress");

    m_assessmentProgressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastFailureMessage"))
  {
    m_lastFailureMessage = jsonValue.GetString("LastFailureMessage");

    m_lastFailureMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceAccessRoleArn"))
  {
    m_serviceAccessRoleArn = jsonValue.GetString("ServiceAccessRoleArn");

    m_serviceAccessRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultLocationBucket"))
  {
    m_resultLocationBucket = jsonValue.GetString("ResultLocationBucket");

    m_resultLocationBucketHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultLocationFolder"))
  {
    m_resultLocationFolder = jsonValue.GetString("ResultLocationFolder");

    m_resultLocationFolderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultEncryptionMode"))
  {
    m_resultEncryptionMode = jsonValue.GetString("ResultEncryptionMode");

    m_resultEncryptionModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResultKmsKeyArn"))
  {
    m_resultKmsKeyArn = jsonValue.GetString("ResultKmsKeyArn");

    m_resultKmsKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssessmentRunName"))
  {
    m_assessmentRunName = jsonValue.GetString("AssessmentRunName");

    m_assessmentRunNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTaskAssessmentRun::Jsonize() const
{
  JsonValue payload;

  if(m_replicationTaskAssessmentRunArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskAssessmentRunArn", m_replicationTaskAssessmentRunArn);

  }

  if(m_replicationTaskArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskArn", m_replicationTaskArn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_replicationTaskAssessmentRunCreationDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskAssessmentRunCreationDate", m_replicationTaskAssessmentRunCreationDate.SecondsWithMSPrecision());
  }

  if(m_assessmentProgressHasBeenSet)
  {
   payload.WithObject("AssessmentProgress", m_assessmentProgress.Jsonize());

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

  }

  if(m_serviceAccessRoleArnHasBeenSet)
  {
   payload.WithString("ServiceAccessRoleArn", m_serviceAccessRoleArn);

  }

  if(m_resultLocationBucketHasBeenSet)
  {
   payload.WithString("ResultLocationBucket", m_resultLocationBucket);

  }

  if(m_resultLocationFolderHasBeenSet)
  {
   payload.WithString("ResultLocationFolder", m_resultLocationFolder);

  }

  if(m_resultEncryptionModeHasBeenSet)
  {
   payload.WithString("ResultEncryptionMode", m_resultEncryptionMode);

  }

  if(m_resultKmsKeyArnHasBeenSet)
  {
   payload.WithString("ResultKmsKeyArn", m_resultKmsKeyArn);

  }

  if(m_assessmentRunNameHasBeenSet)
  {
   payload.WithString("AssessmentRunName", m_assessmentRunName);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
