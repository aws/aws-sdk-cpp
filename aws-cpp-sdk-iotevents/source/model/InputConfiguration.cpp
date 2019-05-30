/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/iotevents/model/InputConfiguration.h>
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

InputConfiguration::InputConfiguration() : 
    m_inputNameHasBeenSet(false),
    m_inputDescriptionHasBeenSet(false),
    m_inputArnHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_lastUpdateTimeHasBeenSet(false),
    m_status(InputStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

InputConfiguration::InputConfiguration(JsonView jsonValue) : 
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

InputConfiguration& InputConfiguration::operator =(JsonView jsonValue)
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

JsonValue InputConfiguration::Jsonize() const
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
