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

#include <aws/kinesisanalyticsv2/model/SqlRunConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

SqlRunConfiguration::SqlRunConfiguration() : 
    m_inputIdHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
}

SqlRunConfiguration::SqlRunConfiguration(JsonView jsonValue) : 
    m_inputIdHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SqlRunConfiguration& SqlRunConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InputId"))
  {
    m_inputId = jsonValue.GetString("InputId");

    m_inputIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InputStartingPositionConfiguration"))
  {
    m_inputStartingPositionConfiguration = jsonValue.GetObject("InputStartingPositionConfiguration");

    m_inputStartingPositionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SqlRunConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_inputIdHasBeenSet)
  {
   payload.WithString("InputId", m_inputId);

  }

  if(m_inputStartingPositionConfigurationHasBeenSet)
  {
   payload.WithObject("InputStartingPositionConfiguration", m_inputStartingPositionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
