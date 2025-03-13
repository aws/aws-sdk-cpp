/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftStorageProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

RedshiftStorageProperties::RedshiftStorageProperties(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftStorageProperties& RedshiftStorageProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");
    m_clusterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workgroupName"))
  {
    m_workgroupName = jsonValue.GetString("workgroupName");
    m_workgroupNameHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftStorageProperties::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_workgroupNameHasBeenSet)
  {
   payload.WithString("workgroupName", m_workgroupName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
