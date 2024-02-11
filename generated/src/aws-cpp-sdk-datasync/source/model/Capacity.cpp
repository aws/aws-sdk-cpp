/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/Capacity.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

Capacity::Capacity() : 
    m_used(0),
    m_usedHasBeenSet(false),
    m_provisioned(0),
    m_provisionedHasBeenSet(false),
    m_logicalUsed(0),
    m_logicalUsedHasBeenSet(false),
    m_clusterCloudStorageUsed(0),
    m_clusterCloudStorageUsedHasBeenSet(false)
{
}

Capacity::Capacity(JsonView jsonValue) : 
    m_used(0),
    m_usedHasBeenSet(false),
    m_provisioned(0),
    m_provisionedHasBeenSet(false),
    m_logicalUsed(0),
    m_logicalUsedHasBeenSet(false),
    m_clusterCloudStorageUsed(0),
    m_clusterCloudStorageUsedHasBeenSet(false)
{
  *this = jsonValue;
}

Capacity& Capacity::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Used"))
  {
    m_used = jsonValue.GetInt64("Used");

    m_usedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Provisioned"))
  {
    m_provisioned = jsonValue.GetInt64("Provisioned");

    m_provisionedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogicalUsed"))
  {
    m_logicalUsed = jsonValue.GetInt64("LogicalUsed");

    m_logicalUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterCloudStorageUsed"))
  {
    m_clusterCloudStorageUsed = jsonValue.GetInt64("ClusterCloudStorageUsed");

    m_clusterCloudStorageUsedHasBeenSet = true;
  }

  return *this;
}

JsonValue Capacity::Jsonize() const
{
  JsonValue payload;

  if(m_usedHasBeenSet)
  {
   payload.WithInt64("Used", m_used);

  }

  if(m_provisionedHasBeenSet)
  {
   payload.WithInt64("Provisioned", m_provisioned);

  }

  if(m_logicalUsedHasBeenSet)
  {
   payload.WithInt64("LogicalUsed", m_logicalUsed);

  }

  if(m_clusterCloudStorageUsedHasBeenSet)
  {
   payload.WithInt64("ClusterCloudStorageUsed", m_clusterCloudStorageUsed);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
