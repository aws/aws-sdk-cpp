/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TargetTableConfig.h>
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

TargetTableConfig::TargetTableConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

TargetTableConfig& TargetTableConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("UnnestSpec"))
  {
    m_unnestSpec = UnnestSpecMapper::GetUnnestSpecForName(jsonValue.GetString("UnnestSpec"));
    m_unnestSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PartitionSpec"))
  {
    Aws::Utils::Array<JsonView> partitionSpecJsonList = jsonValue.GetArray("PartitionSpec");
    for(unsigned partitionSpecIndex = 0; partitionSpecIndex < partitionSpecJsonList.GetLength(); ++partitionSpecIndex)
    {
      m_partitionSpec.push_back(partitionSpecJsonList[partitionSpecIndex].AsObject());
    }
    m_partitionSpecHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TargetTableName"))
  {
    m_targetTableName = jsonValue.GetString("TargetTableName");
    m_targetTableNameHasBeenSet = true;
  }
  return *this;
}

JsonValue TargetTableConfig::Jsonize() const
{
  JsonValue payload;

  if(m_unnestSpecHasBeenSet)
  {
   payload.WithString("UnnestSpec", UnnestSpecMapper::GetNameForUnnestSpec(m_unnestSpec));
  }

  if(m_partitionSpecHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> partitionSpecJsonList(m_partitionSpec.size());
   for(unsigned partitionSpecIndex = 0; partitionSpecIndex < partitionSpecJsonList.GetLength(); ++partitionSpecIndex)
   {
     partitionSpecJsonList[partitionSpecIndex].AsObject(m_partitionSpec[partitionSpecIndex].Jsonize());
   }
   payload.WithArray("PartitionSpec", std::move(partitionSpecJsonList));

  }

  if(m_targetTableNameHasBeenSet)
  {
   payload.WithString("TargetTableName", m_targetTableName);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
