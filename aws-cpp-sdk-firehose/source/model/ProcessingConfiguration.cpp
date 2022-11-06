/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/firehose/model/ProcessingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Firehose
{
namespace Model
{

ProcessingConfiguration::ProcessingConfiguration() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_processorsHasBeenSet(false)
{
}

ProcessingConfiguration::ProcessingConfiguration(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_processorsHasBeenSet(false)
{
  *this = jsonValue;
}

ProcessingConfiguration& ProcessingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Enabled"))
  {
    m_enabled = jsonValue.GetBool("Enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Processors"))
  {
    Aws::Utils::Array<JsonView> processorsJsonList = jsonValue.GetArray("Processors");
    for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
    {
      m_processors.push_back(processorsJsonList[processorsIndex].AsObject());
    }
    m_processorsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProcessingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_processorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> processorsJsonList(m_processors.size());
   for(unsigned processorsIndex = 0; processorsIndex < processorsJsonList.GetLength(); ++processorsIndex)
   {
     processorsJsonList[processorsIndex].AsObject(m_processors[processorsIndex].Jsonize());
   }
   payload.WithArray("Processors", std::move(processorsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Firehose
} // namespace Aws
