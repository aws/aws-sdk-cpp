/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/PremigrationAssessmentStatus.h>
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

PremigrationAssessmentStatus::PremigrationAssessmentStatus(JsonView jsonValue)
{
  *this = jsonValue;
}

PremigrationAssessmentStatus& PremigrationAssessmentStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PremigrationAssessmentRunArn"))
  {
    m_premigrationAssessmentRunArn = jsonValue.GetString("PremigrationAssessmentRunArn");
    m_premigrationAssessmentRunArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailOnAssessmentFailure"))
  {
    m_failOnAssessmentFailure = jsonValue.GetBool("FailOnAssessmentFailure");
    m_failOnAssessmentFailureHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PremigrationAssessmentRunCreationDate"))
  {
    m_premigrationAssessmentRunCreationDate = jsonValue.GetDouble("PremigrationAssessmentRunCreationDate");
    m_premigrationAssessmentRunCreationDateHasBeenSet = true;
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
  if(jsonValue.ValueExists("ResultStatistic"))
  {
    m_resultStatistic = jsonValue.GetObject("ResultStatistic");
    m_resultStatisticHasBeenSet = true;
  }
  return *this;
}

JsonValue PremigrationAssessmentStatus::Jsonize() const
{
  JsonValue payload;

  if(m_premigrationAssessmentRunArnHasBeenSet)
  {
   payload.WithString("PremigrationAssessmentRunArn", m_premigrationAssessmentRunArn);

  }

  if(m_failOnAssessmentFailureHasBeenSet)
  {
   payload.WithBool("FailOnAssessmentFailure", m_failOnAssessmentFailure);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_premigrationAssessmentRunCreationDateHasBeenSet)
  {
   payload.WithDouble("PremigrationAssessmentRunCreationDate", m_premigrationAssessmentRunCreationDate.SecondsWithMSPrecision());
  }

  if(m_assessmentProgressHasBeenSet)
  {
   payload.WithObject("AssessmentProgress", m_assessmentProgress.Jsonize());

  }

  if(m_lastFailureMessageHasBeenSet)
  {
   payload.WithString("LastFailureMessage", m_lastFailureMessage);

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

  if(m_resultStatisticHasBeenSet)
  {
   payload.WithObject("ResultStatistic", m_resultStatistic.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
