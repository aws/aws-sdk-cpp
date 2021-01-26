/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/AutoMLJobSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

AutoMLJobSummary::AutoMLJobSummary() : 
    m_autoMLJobNameHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobStatusHasBeenSet(false),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET),
    m_autoMLJobSecondaryStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
}

AutoMLJobSummary::AutoMLJobSummary(JsonView jsonValue) : 
    m_autoMLJobNameHasBeenSet(false),
    m_autoMLJobArnHasBeenSet(false),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobStatusHasBeenSet(false),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET),
    m_autoMLJobSecondaryStatusHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_endTimeHasBeenSet(false),
    m_lastModifiedTimeHasBeenSet(false),
    m_failureReasonHasBeenSet(false)
{
  *this = jsonValue;
}

AutoMLJobSummary& AutoMLJobSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AutoMLJobName"))
  {
    m_autoMLJobName = jsonValue.GetString("AutoMLJobName");

    m_autoMLJobNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

    m_autoMLJobArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJobStatus"))
  {
    m_autoMLJobStatus = AutoMLJobStatusMapper::GetAutoMLJobStatusForName(jsonValue.GetString("AutoMLJobStatus"));

    m_autoMLJobStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoMLJobSecondaryStatus"))
  {
    m_autoMLJobSecondaryStatus = AutoMLJobSecondaryStatusMapper::GetAutoMLJobSecondaryStatusForName(jsonValue.GetString("AutoMLJobSecondaryStatus"));

    m_autoMLJobSecondaryStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

    m_endTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

    m_lastModifiedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

    m_failureReasonHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoMLJobSummary::Jsonize() const
{
  JsonValue payload;

  if(m_autoMLJobNameHasBeenSet)
  {
   payload.WithString("AutoMLJobName", m_autoMLJobName);

  }

  if(m_autoMLJobArnHasBeenSet)
  {
   payload.WithString("AutoMLJobArn", m_autoMLJobArn);

  }

  if(m_autoMLJobStatusHasBeenSet)
  {
   payload.WithString("AutoMLJobStatus", AutoMLJobStatusMapper::GetNameForAutoMLJobStatus(m_autoMLJobStatus));
  }

  if(m_autoMLJobSecondaryStatusHasBeenSet)
  {
   payload.WithString("AutoMLJobSecondaryStatus", AutoMLJobSecondaryStatusMapper::GetNameForAutoMLJobSecondaryStatus(m_autoMLJobSecondaryStatus));
  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("CreationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithDouble("EndTime", m_endTime.SecondsWithMSPrecision());
  }

  if(m_lastModifiedTimeHasBeenSet)
  {
   payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("FailureReason", m_failureReason);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
