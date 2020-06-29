/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/BulkDeployment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Greengrass
{
namespace Model
{

BulkDeployment::BulkDeployment() : 
    m_bulkDeploymentArnHasBeenSet(false),
    m_bulkDeploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
}

BulkDeployment::BulkDeployment(JsonView jsonValue) : 
    m_bulkDeploymentArnHasBeenSet(false),
    m_bulkDeploymentIdHasBeenSet(false),
    m_createdAtHasBeenSet(false)
{
  *this = jsonValue;
}

BulkDeployment& BulkDeployment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BulkDeploymentArn"))
  {
    m_bulkDeploymentArn = jsonValue.GetString("BulkDeploymentArn");

    m_bulkDeploymentArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BulkDeploymentId"))
  {
    m_bulkDeploymentId = jsonValue.GetString("BulkDeploymentId");

    m_bulkDeploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetString("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  return *this;
}

JsonValue BulkDeployment::Jsonize() const
{
  JsonValue payload;

  if(m_bulkDeploymentArnHasBeenSet)
  {
   payload.WithString("BulkDeploymentArn", m_bulkDeploymentArn);

  }

  if(m_bulkDeploymentIdHasBeenSet)
  {
   payload.WithString("BulkDeploymentId", m_bulkDeploymentId);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("CreatedAt", m_createdAt);

  }

  return payload;
}

} // namespace Model
} // namespace Greengrass
} // namespace Aws
