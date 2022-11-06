/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/BackfillError.h>
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

BackfillError::BackfillError() : 
    m_code(BackfillErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
}

BackfillError::BackfillError(JsonView jsonValue) : 
    m_code(BackfillErrorCode::NOT_SET),
    m_codeHasBeenSet(false),
    m_partitionsHasBeenSet(false)
{
  *this = jsonValue;
}

BackfillError& BackfillError::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = BackfillErrorCodeMapper::GetBackfillErrorCodeForName(jsonValue.GetString("Code"));

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Partitions"))
  {
    Aws::Utils::Array<JsonView> partitionsJsonList = jsonValue.GetArray("Partitions");
    for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
    {
      m_partitions.push_back(partitionsJsonList[partitionsIndex].AsObject());
    }
    m_partitionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BackfillError::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", BackfillErrorCodeMapper::GetNameForBackfillErrorCode(m_code));
  }

  if(m_partitionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionsJsonList(m_partitions.size());
   for(unsigned partitionsIndex = 0; partitionsIndex < partitionsJsonList.GetLength(); ++partitionsIndex)
   {
     partitionsJsonList[partitionsIndex].AsObject(m_partitions[partitionsIndex].Jsonize());
   }
   payload.WithArray("Partitions", std::move(partitionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
