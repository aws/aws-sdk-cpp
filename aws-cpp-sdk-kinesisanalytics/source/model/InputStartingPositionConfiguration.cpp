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
#include <aws/kinesisanalytics/model/InputStartingPositionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

InputStartingPositionConfiguration::InputStartingPositionConfiguration() : 
    m_inputStartingPosition(InputStartingPosition::NOT_SET),
    m_inputStartingPositionHasBeenSet(false)
{
}

InputStartingPositionConfiguration::InputStartingPositionConfiguration(const JsonValue& jsonValue) : 
    m_inputStartingPosition(InputStartingPosition::NOT_SET),
    m_inputStartingPositionHasBeenSet(false)
{
  *this = jsonValue;
}

InputStartingPositionConfiguration& InputStartingPositionConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("InputStartingPosition"))
  {
    m_inputStartingPosition = InputStartingPositionMapper::GetInputStartingPositionForName(jsonValue.GetString("InputStartingPosition"));

    m_inputStartingPositionHasBeenSet = true;
  }

  return *this;
}

JsonValue InputStartingPositionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputStartingPositionHasBeenSet)
  {
   payload.WithString("InputStartingPosition", InputStartingPositionMapper::GetNameForInputStartingPosition(m_inputStartingPosition));
  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws