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

#include <aws/chime/model/TerminationHealth.h>
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

TerminationHealth::TerminationHealth() : 
    m_timestampHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
}

TerminationHealth::TerminationHealth(JsonView jsonValue) : 
    m_timestampHasBeenSet(false),
    m_sourceHasBeenSet(false)
{
  *this = jsonValue;
}

TerminationHealth& TerminationHealth::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Timestamp"))
  {
    m_timestamp = jsonValue.GetString("Timestamp");

    m_timestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Source"))
  {
    m_source = jsonValue.GetString("Source");

    m_sourceHasBeenSet = true;
  }

  return *this;
}

JsonValue TerminationHealth::Jsonize() const
{
  JsonValue payload;

  if(m_timestampHasBeenSet)
  {
   payload.WithString("Timestamp", m_timestamp.ToGmtString(DateFormat::ISO_8601));
  }

  if(m_sourceHasBeenSet)
  {
   payload.WithString("Source", m_source);

  }

  return payload;
}

} // namespace Model
} // namespace Chime
} // namespace Aws
