/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BatchUpdatePartitionFailureEntry.h>
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

BatchUpdatePartitionFailureEntry::BatchUpdatePartitionFailureEntry() : 
    m_partitionValueListHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
}

BatchUpdatePartitionFailureEntry::BatchUpdatePartitionFailureEntry(JsonView jsonValue) : 
    m_partitionValueListHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
  *this = jsonValue;
}

BatchUpdatePartitionFailureEntry& BatchUpdatePartitionFailureEntry::operator =(JsonView jsonValue)
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

  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetObject("ErrorDetail");

    m_errorDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue BatchUpdatePartitionFailureEntry::Jsonize() const
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

  if(m_errorDetailHasBeenSet)
  {
   payload.WithObject("ErrorDetail", m_errorDetail.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
