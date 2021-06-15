/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/es/model/AutoTuneStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

AutoTuneStatus::AutoTuneStatus() : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(AutoTuneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
}

AutoTuneStatus::AutoTuneStatus(JsonView jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(AutoTuneState::NOT_SET),
    m_stateHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
  *this = jsonValue;
}

AutoTuneStatus& AutoTuneStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CreationDate"))
  {
    m_creationDate = jsonValue.GetDouble("CreationDate");

    m_creationDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateDate"))
  {
    m_updateDate = jsonValue.GetDouble("UpdateDate");

    m_updateDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdateVersion"))
  {
    m_updateVersion = jsonValue.GetInteger("UpdateVersion");

    m_updateVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = AutoTuneStateMapper::GetAutoTuneStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

    m_errorMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingDeletion"))
  {
    m_pendingDeletion = jsonValue.GetBool("PendingDeletion");

    m_pendingDeletionHasBeenSet = true;
  }

  return *this;
}

JsonValue AutoTuneStatus::Jsonize() const
{
  JsonValue payload;

  if(m_creationDateHasBeenSet)
  {
   payload.WithDouble("CreationDate", m_creationDate.SecondsWithMSPrecision());
  }

  if(m_updateDateHasBeenSet)
  {
   payload.WithDouble("UpdateDate", m_updateDate.SecondsWithMSPrecision());
  }

  if(m_updateVersionHasBeenSet)
  {
   payload.WithInteger("UpdateVersion", m_updateVersion);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", AutoTuneStateMapper::GetNameForAutoTuneState(m_state));
  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("ErrorMessage", m_errorMessage);

  }

  if(m_pendingDeletionHasBeenSet)
  {
   payload.WithBool("PendingDeletion", m_pendingDeletion);

  }

  return payload;
}

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
