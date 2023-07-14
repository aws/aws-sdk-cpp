/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

InputConfiguration::InputConfiguration(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_inputStartingPositionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

InputConfiguration& InputConfiguration::operator =(JsonView jsonValue)
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
