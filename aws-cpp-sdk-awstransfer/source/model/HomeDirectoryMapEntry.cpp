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

#include <aws/awstransfer/model/HomeDirectoryMapEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Transfer
{
namespace Model
{

HomeDirectoryMapEntry::HomeDirectoryMapEntry() : 
    m_entryHasBeenSet(false),
    m_targetHasBeenSet(false)
{
}

HomeDirectoryMapEntry::HomeDirectoryMapEntry(JsonView jsonValue) : 
    m_entryHasBeenSet(false),
    m_targetHasBeenSet(false)
{
  *this = jsonValue;
}

HomeDirectoryMapEntry& HomeDirectoryMapEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Entry"))
  {
    m_entry = jsonValue.GetString("Entry");

    m_entryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Target"))
  {
    m_target = jsonValue.GetString("Target");

    m_targetHasBeenSet = true;
  }

  return *this;
}

JsonValue HomeDirectoryMapEntry::Jsonize() const
{
  JsonValue payload;

  if(m_entryHasBeenSet)
  {
   payload.WithString("Entry", m_entry);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithString("Target", m_target);

  }

  return payload;
}

} // namespace Model
} // namespace Transfer
} // namespace Aws
