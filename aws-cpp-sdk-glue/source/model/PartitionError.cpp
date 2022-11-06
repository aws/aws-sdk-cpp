/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/PartitionError.h>
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

PartitionError::PartitionError() : 
    m_partitionValuesHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
}

PartitionError::PartitionError(JsonView jsonValue) : 
    m_partitionValuesHasBeenSet(false),
    m_errorDetailHasBeenSet(false)
{
  *this = jsonValue;
}

PartitionError& PartitionError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PartitionValues"))
  {
    Aws::Utils::Array<JsonView> partitionValuesJsonList = jsonValue.GetArray("PartitionValues");
    for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
    {
      m_partitionValues.push_back(partitionValuesJsonList[partitionValuesIndex].AsString());
    }
    m_partitionValuesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetail"))
  {
    m_errorDetail = jsonValue.GetObject("ErrorDetail");

    m_errorDetailHasBeenSet = true;
  }

  return *this;
}

JsonValue PartitionError::Jsonize() const
{
  JsonValue payload;

  if(m_partitionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

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
