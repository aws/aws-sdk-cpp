/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTaskIndividualAssessment.h>
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

ReplicationTaskIndividualAssessment::ReplicationTaskIndividualAssessment() : 
    m_replicationTaskIndividualAssessmentArnHasBeenSet(false),
    m_replicationTaskAssessmentRunArnHasBeenSet(false),
    m_individualAssessmentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_replicationTaskIndividualAssessmentStartDateHasBeenSet(false)
{
}

ReplicationTaskIndividualAssessment::ReplicationTaskIndividualAssessment(JsonView jsonValue) : 
    m_replicationTaskIndividualAssessmentArnHasBeenSet(false),
    m_replicationTaskAssessmentRunArnHasBeenSet(false),
    m_individualAssessmentNameHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_replicationTaskIndividualAssessmentStartDateHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskIndividualAssessment& ReplicationTaskIndividualAssessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReplicationTaskIndividualAssessmentArn"))
  {
    m_replicationTaskIndividualAssessmentArn = jsonValue.GetString("ReplicationTaskIndividualAssessmentArn");

    m_replicationTaskIndividualAssessmentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskAssessmentRunArn"))
  {
    m_replicationTaskAssessmentRunArn = jsonValue.GetString("ReplicationTaskAssessmentRunArn");

    m_replicationTaskAssessmentRunArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndividualAssessmentName"))
  {
    m_individualAssessmentName = jsonValue.GetString("IndividualAssessmentName");

    m_individualAssessmentNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReplicationTaskIndividualAssessmentStartDate"))
  {
    m_replicationTaskIndividualAssessmentStartDate = jsonValue.GetDouble("ReplicationTaskIndividualAssessmentStartDate");

    m_replicationTaskIndividualAssessmentStartDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTaskIndividualAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_replicationTaskIndividualAssessmentArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskIndividualAssessmentArn", m_replicationTaskIndividualAssessmentArn);

  }

  if(m_replicationTaskAssessmentRunArnHasBeenSet)
  {
   payload.WithString("ReplicationTaskAssessmentRunArn", m_replicationTaskAssessmentRunArn);

  }

  if(m_individualAssessmentNameHasBeenSet)
  {
   payload.WithString("IndividualAssessmentName", m_individualAssessmentName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", m_status);

  }

  if(m_replicationTaskIndividualAssessmentStartDateHasBeenSet)
  {
   payload.WithDouble("ReplicationTaskIndividualAssessmentStartDate", m_replicationTaskIndividualAssessmentStartDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
