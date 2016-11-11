/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/es/model/OptionStatus.h>
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

OptionStatus::OptionStatus() : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(OptionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
}

OptionStatus::OptionStatus(const JsonValue& jsonValue) : 
    m_creationDateHasBeenSet(false),
    m_updateDateHasBeenSet(false),
    m_updateVersion(0),
    m_updateVersionHasBeenSet(false),
    m_state(OptionState::NOT_SET),
    m_stateHasBeenSet(false),
    m_pendingDeletion(false),
    m_pendingDeletionHasBeenSet(false)
{
  *this = jsonValue;
}

OptionStatus& OptionStatus::operator =(const JsonValue& jsonValue)
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
    m_state = OptionStateMapper::GetOptionStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingDeletion"))
  {
    m_pendingDeletion = jsonValue.GetBool("PendingDeletion");

    m_pendingDeletionHasBeenSet = true;
  }

  return *this;
}

JsonValue OptionStatus::Jsonize() const
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
   payload.WithString("State", OptionStateMapper::GetNameForOptionState(m_state));
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