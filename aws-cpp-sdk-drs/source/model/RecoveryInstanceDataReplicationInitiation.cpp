/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/RecoveryInstanceDataReplicationInitiation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

RecoveryInstanceDataReplicationInitiation::RecoveryInstanceDataReplicationInitiation() : 
    m_startDateTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
}

RecoveryInstanceDataReplicationInitiation::RecoveryInstanceDataReplicationInitiation(JsonView jsonValue) : 
    m_startDateTimeHasBeenSet(false),
    m_stepsHasBeenSet(false)
{
  *this = jsonValue;
}

RecoveryInstanceDataReplicationInitiation& RecoveryInstanceDataReplicationInitiation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("startDateTime"))
  {
    m_startDateTime = jsonValue.GetString("startDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("steps"))
  {
    Aws::Utils::Array<JsonView> stepsJsonList = jsonValue.GetArray("steps");
    for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
    {
      m_steps.push_back(stepsJsonList[stepsIndex].AsObject());
    }
    m_stepsHasBeenSet = true;
  }

  return *this;
}

JsonValue RecoveryInstanceDataReplicationInitiation::Jsonize() const
{
  JsonValue payload;

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithString("startDateTime", m_startDateTime);

  }

  if(m_stepsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> stepsJsonList(m_steps.size());
   for(unsigned stepsIndex = 0; stepsIndex < stepsJsonList.GetLength(); ++stepsIndex)
   {
     stepsJsonList[stepsIndex].AsObject(m_steps[stepsIndex].Jsonize());
   }
   payload.WithArray("steps", std::move(stepsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
