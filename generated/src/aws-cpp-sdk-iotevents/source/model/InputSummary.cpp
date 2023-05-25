/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/InputSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEvents
{
namespace Model
{

InputSummary::InputSummary() : 
    m_inputNameHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false),
    m_inputArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(InputStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

InputSummary::InputSummary(JsonView jsonValue) : 
    m_inputNameHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false),
    m_inputArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(InputStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = jsonValue;
}

InputSummary& InputSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("inputName"))
  {
    m_inputName = jsonValue.GetString("inputName");

    m_inputNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputDescription"))
  {
    m_inputDescription = jsonValue.GetString("inputDescription");

    m_inputDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("inputArn"))
  {
    m_inputArn = jsonValue.GetString("inputArn");

    m_inputArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdateTime"))
  {
    m_lastUpdateTime = jsonValue.GetDouble("lastUpdateTime");

    m_lastUpdateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InputStatusMapper::GetInputStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  return *this;
}

JsonValue InputSummary::Jsonize() const
{
  JsonValue payload;

  if(m_inputNameHasBeenSet)
  {
   payload.WithString("inputName", m_inputName);

  }

  if(m_inputDescriptionHasBeenSet)
  {
   payload.WithString("inputDescription", m_inputDescription);

  }

  if(m_inputArnHasBeenSet)
  {
   payload.WithString("inputArn", m_inputArn);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithDouble("creationTime", m_creationTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdateTime", m_lastUpdateTime.SecondsWithMSPrecision());
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InputStatusMapper::GetNameForInputStatus(m_status));
  }

  return payload;
}

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
