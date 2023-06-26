/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/AddObjectInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

AddObjectInput::AddObjectInput() : 
    m_uriHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_partitionValuesHasBeenSet(false)
{
}

AddObjectInput::AddObjectInput(JsonView jsonValue) : 
    m_uriHasBeenSet(false),
    m_eTagHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_partitionValuesHasBeenSet(false)
{
  *this = jsonValue;
}

AddObjectInput& AddObjectInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ETag"))
  {
    m_eTag = jsonValue.GetString("ETag");

    m_eTagHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Size"))
  {
    m_size = jsonValue.GetInt64("Size");

    m_sizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PartitionValues"))
  {
    Aws::Utils::Array<JsonView> partitionValuesJsonList = jsonValue.GetArray("PartitionValues");
    for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
    {
      m_partitionValues.push_back(partitionValuesJsonList[partitionValuesIndex].AsString());
    }
    m_partitionValuesHasBeenSet = true;
  }

  return *this;
}

JsonValue AddObjectInput::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  if(m_eTagHasBeenSet)
  {
   payload.WithString("ETag", m_eTag);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithInt64("Size", m_size);

  }

  if(m_partitionValuesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionValuesJsonList(m_partitionValues.size());
   for(unsigned partitionValuesIndex = 0; partitionValuesIndex < partitionValuesJsonList.GetLength(); ++partitionValuesIndex)
   {
     partitionValuesJsonList[partitionValuesIndex].AsString(m_partitionValues[partitionValuesIndex]);
   }
   payload.WithArray("PartitionValues", std::move(partitionValuesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
