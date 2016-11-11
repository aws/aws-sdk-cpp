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
#include <aws/kinesisanalytics/model/InputConfiguration.h>
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

InputConfiguration::InputConfiguration() : 
    m_idHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
}

InputConfiguration::InputConfiguration(const JsonValue& jsonValue) : 
    m_idHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfiguration& InputConfiguration::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputStartingPositionConfiguration"))
  {
    m_inputStartingPositionConfiguration = jsonValue.GetObject("InputStartingPositionConfiguration");

    m_inputStartingPositionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue InputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_inputStartingPositionConfigurationHasBeenSet)
  {
   payload.WithObject("InputStartingPositionConfiguration", m_inputStartingPositionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws