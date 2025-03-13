/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fms/model/NetworkAclEntrySet.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FMS
{
namespace Model
{

NetworkAclEntrySet::NetworkAclEntrySet(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkAclEntrySet& NetworkAclEntrySet::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FirstEntries"))
  {
    Aws::Utils::Array<JsonView> firstEntriesJsonList = jsonValue.GetArray("FirstEntries");
    for(unsigned firstEntriesIndex = 0; firstEntriesIndex < firstEntriesJsonList.GetLength(); ++firstEntriesIndex)
    {
      m_firstEntries.push_back(firstEntriesJsonList[firstEntriesIndex].AsObject());
    }
    m_firstEntriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForceRemediateForFirstEntries"))
  {
    m_forceRemediateForFirstEntries = jsonValue.GetBool("ForceRemediateForFirstEntries");
    m_forceRemediateForFirstEntriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastEntries"))
  {
    Aws::Utils::Array<JsonView> lastEntriesJsonList = jsonValue.GetArray("LastEntries");
    for(unsigned lastEntriesIndex = 0; lastEntriesIndex < lastEntriesJsonList.GetLength(); ++lastEntriesIndex)
    {
      m_lastEntries.push_back(lastEntriesJsonList[lastEntriesIndex].AsObject());
    }
    m_lastEntriesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForceRemediateForLastEntries"))
  {
    m_forceRemediateForLastEntries = jsonValue.GetBool("ForceRemediateForLastEntries");
    m_forceRemediateForLastEntriesHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkAclEntrySet::Jsonize() const
{
  JsonValue payload;

  if(m_firstEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> firstEntriesJsonList(m_firstEntries.size());
   for(unsigned firstEntriesIndex = 0; firstEntriesIndex < firstEntriesJsonList.GetLength(); ++firstEntriesIndex)
   {
     firstEntriesJsonList[firstEntriesIndex].AsObject(m_firstEntries[firstEntriesIndex].Jsonize());
   }
   payload.WithArray("FirstEntries", std::move(firstEntriesJsonList));

  }

  if(m_forceRemediateForFirstEntriesHasBeenSet)
  {
   payload.WithBool("ForceRemediateForFirstEntries", m_forceRemediateForFirstEntries);

  }

  if(m_lastEntriesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastEntriesJsonList(m_lastEntries.size());
   for(unsigned lastEntriesIndex = 0; lastEntriesIndex < lastEntriesJsonList.GetLength(); ++lastEntriesIndex)
   {
     lastEntriesJsonList[lastEntriesIndex].AsObject(m_lastEntries[lastEntriesIndex].Jsonize());
   }
   payload.WithArray("LastEntries", std::move(lastEntriesJsonList));

  }

  if(m_forceRemediateForLastEntriesHasBeenSet)
  {
   payload.WithBool("ForceRemediateForLastEntries", m_forceRemediateForLastEntries);

  }

  return payload;
}

} // namespace Model
} // namespace FMS
} // namespace Aws
