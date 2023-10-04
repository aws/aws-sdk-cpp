/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/RedshiftClusterStorage.h>
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

RedshiftClusterStorage::RedshiftClusterStorage() : 
    m_clusterNameHasBeenSet(false)
{
}

RedshiftClusterStorage::RedshiftClusterStorage(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false)
{
  *this = jsonValue;
}

RedshiftClusterStorage& RedshiftClusterStorage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  return *this;
}

JsonValue RedshiftClusterStorage::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
