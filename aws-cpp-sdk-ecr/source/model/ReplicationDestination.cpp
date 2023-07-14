/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ReplicationDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ReplicationDestination::ReplicationDestination() : 
    m_regionHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
}

ReplicationDestination::ReplicationDestination(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_registryIdHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationDestination& ReplicationDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationDestination::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
