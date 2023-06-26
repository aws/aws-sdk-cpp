/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ContinuousBackupsDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

ContinuousBackupsDescription::ContinuousBackupsDescription() : 
    m_continuousBackupsStatus(ContinuousBackupsStatus::NOT_SET),
    m_continuousBackupsStatusHasBeenSet(false),
    m_pointInTimeRecoveryDescriptionHasBeenSet(false)
{
}

ContinuousBackupsDescription::ContinuousBackupsDescription(JsonView jsonValue) : 
    m_continuousBackupsStatus(ContinuousBackupsStatus::NOT_SET),
    m_continuousBackupsStatusHasBeenSet(false),
    m_pointInTimeRecoveryDescriptionHasBeenSet(false)
{
  *this = jsonValue;
}

ContinuousBackupsDescription& ContinuousBackupsDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ContinuousBackupsStatus"))
  {
    m_continuousBackupsStatus = ContinuousBackupsStatusMapper::GetContinuousBackupsStatusForName(jsonValue.GetString("ContinuousBackupsStatus"));

    m_continuousBackupsStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PointInTimeRecoveryDescription"))
  {
    m_pointInTimeRecoveryDescription = jsonValue.GetObject("PointInTimeRecoveryDescription");

    m_pointInTimeRecoveryDescriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue ContinuousBackupsDescription::Jsonize() const
{
  JsonValue payload;

  if(m_continuousBackupsStatusHasBeenSet)
  {
   payload.WithString("ContinuousBackupsStatus", ContinuousBackupsStatusMapper::GetNameForContinuousBackupsStatus(m_continuousBackupsStatus));
  }

  if(m_pointInTimeRecoveryDescriptionHasBeenSet)
  {
   payload.WithObject("PointInTimeRecoveryDescription", m_pointInTimeRecoveryDescription.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
