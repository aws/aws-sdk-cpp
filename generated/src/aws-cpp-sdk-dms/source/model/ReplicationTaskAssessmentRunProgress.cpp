/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTaskAssessmentRunProgress.h>
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

ReplicationTaskAssessmentRunProgress::ReplicationTaskAssessmentRunProgress() : 
    m_individualAssessmentCount(0),
    m_individualAssessmentCountHasBeenSet(false),
    m_individualAssessmentCompletedCount(0),
    m_individualAssessmentCompletedCountHasBeenSet(false)
{
}

ReplicationTaskAssessmentRunProgress::ReplicationTaskAssessmentRunProgress(JsonView jsonValue) : 
    m_individualAssessmentCount(0),
    m_individualAssessmentCountHasBeenSet(false),
    m_individualAssessmentCompletedCount(0),
    m_individualAssessmentCompletedCountHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationTaskAssessmentRunProgress& ReplicationTaskAssessmentRunProgress::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndividualAssessmentCount"))
  {
    m_individualAssessmentCount = jsonValue.GetInteger("IndividualAssessmentCount");

    m_individualAssessmentCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IndividualAssessmentCompletedCount"))
  {
    m_individualAssessmentCompletedCount = jsonValue.GetInteger("IndividualAssessmentCompletedCount");

    m_individualAssessmentCompletedCountHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationTaskAssessmentRunProgress::Jsonize() const
{
  JsonValue payload;

  if(m_individualAssessmentCountHasBeenSet)
  {
   payload.WithInteger("IndividualAssessmentCount", m_individualAssessmentCount);

  }

  if(m_individualAssessmentCompletedCountHasBeenSet)
  {
   payload.WithInteger("IndividualAssessmentCompletedCount", m_individualAssessmentCompletedCount);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
