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

#include <aws/chime/model/StreamingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Chime
{
namespace Model
{

StreamingConfiguration::StreamingConfiguration() : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
}

StreamingConfiguration::StreamingConfiguration(JsonView jsonValue) : 
    m_dataRetentionInHours(0),
    m_dataRetentionInHoursHasBeenSet(false),
    m_disabled(false),
    m_disabledHasBeenSet(false)
{
  *this = jsonValue;
}

StreamingConfiguration& StreamingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("DataRetentionInHours"))
  {
    m_dataRetentionInHours = jsonValue.GetInteger("DataRetentionInHours");

    m_dataRetentionInHoursHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Disabled"))
  {
    m_disabled = jsonValue.GetBool("Disabled");

    m_disabledHasBeenSet = true;
  }

  return *this;
}

JsonValue StreamingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataRetentionInHoursHasBeenSet)
  {
   payload.WithInteger("DataRetentionInHours", m_dataRetentionInHours);

  }

  if(m_disabledHasBeenSet)
  {
   payload.WithBool("Disabled", m_disabled);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
