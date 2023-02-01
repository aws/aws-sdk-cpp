/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchUpdatePartitionRequestEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

BatchUpdatePartitionRequestEntry::BatchUpdatePartitionRequestEntry() : 
    m_partitionValueListHasBeenSet(false),
    m_partitionInputHasBeenSet(false)
{
}

BatchUpdatePartitionRequestEntry::BatchUpdatePartitionRequestEntry(JsonView jsonValue) : 
    m_partitionValueListHasBeenSet(false),
    m_partitionInputHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdatePartitionRequestEntry& BatchUpdatePartitionRequestEntry::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionValueList"))
  {
    Aws::Utils::Array<JsonView> partitionValueListJsonList = jsonValue.GetArray("PartitionValueList");
    for(unsigned partitionValueListIndex = 0; partitionValueListIndex < partitionValueListJsonList.GetLength(); ++partitionValueListIndex)
    {
      m_partitionValueList.push_back(partitionValueListJsonList[partitionValueListIndex].AsString());
    }
    m_partitionValueListHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionInput"))
  {
    m_partitionInput = jsonValue.GetObject("PartitionInput");

    m_partitionInputHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdatePartitionRequestEntry::Jsonize() const
{
  JsonValue payload;

  if(m_partitionValueListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValueListJsonList(m_partitionValueList.size());
   for(unsigned partitionValueListIndex = 0; partitionValueListIndex < partitionValueListJsonList.GetLength(); ++partitionValueListIndex)
   {
     partitionValueListJsonList[partitionValueListIndex].AsString(m_partitionValueList[partitionValueListIndex]);
   }
   payload.WithArray("PartitionValueList", std::move(partitionValueListJsonList));

  }

  if(m_partitionInputHasBeenSet)
  {
   payload.WithObject("PartitionInput", m_partitionInput.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
