/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/ReplicationTaskAssessmentRunResultStatistic.h>
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

ReplicationTaskAssessmentRunResultStatistic::ReplicationTaskAssessmentRunResultStatistic(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationTaskAssessmentRunResultStatistic& ReplicationTaskAssessmentRunResultStatistic::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Passed"))
  {
    m_passed = jsonValue.GetInteger("Passed");
    m_passedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Failed"))
  {
    m_failed = jsonValue.GetInteger("Failed");
    m_failedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetInteger("Error");
    m_errorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Warning"))
  {
    m_warning = jsonValue.GetInteger("Warning");
    m_warningHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Cancelled"))
  {
    m_cancelled = jsonValue.GetInteger("Cancelled");
    m_cancelledHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Skipped"))
  {
    m_skipped = jsonValue.GetInteger("Skipped");
    m_skippedHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationTaskAssessmentRunResultStatistic::Jsonize() const
{
  JsonValue payload;

  if(m_passedHasBeenSet)
  {
   payload.WithInteger("Passed", m_passed);

  }

  if(m_failedHasBeenSet)
  {
   payload.WithInteger("Failed", m_failed);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithInteger("Error", m_error);

  }

  if(m_warningHasBeenSet)
  {
   payload.WithInteger("Warning", m_warning);

  }

  if(m_cancelledHasBeenSet)
  {
   payload.WithInteger("Cancelled", m_cancelled);

  }

  if(m_skippedHasBeenSet)
  {
   payload.WithInteger("Skipped", m_skipped);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
