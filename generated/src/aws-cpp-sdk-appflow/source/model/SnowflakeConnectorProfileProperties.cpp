/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/SnowflakeConnectorProfileProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

SnowflakeConnectorProfileProperties::SnowflakeConnectorProfileProperties() : 
    m_warehouseHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_privateLinkServiceNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
}

SnowflakeConnectorProfileProperties::SnowflakeConnectorProfileProperties(JsonView jsonValue) : 
    m_warehouseHasBeenSet(false),
    m_stageHasBeenSet(false),
    m_bucketNameHasBeenSet(false),
    m_bucketPrefixHasBeenSet(false),
    m_privateLinkServiceNameHasBeenSet(false),
    m_accountNameHasBeenSet(false),
    m_regionHasBeenSet(false)
{
  *this = jsonValue;
}

SnowflakeConnectorProfileProperties& SnowflakeConnectorProfileProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("warehouse"))
  {
    m_warehouse = jsonValue.GetString("warehouse");

    m_warehouseHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stage"))
  {
    m_stage = jsonValue.GetString("stage");

    m_stageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketName"))
  {
    m_bucketName = jsonValue.GetString("bucketName");

    m_bucketNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketPrefix"))
  {
    m_bucketPrefix = jsonValue.GetString("bucketPrefix");

    m_bucketPrefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("privateLinkServiceName"))
  {
    m_privateLinkServiceName = jsonValue.GetString("privateLinkServiceName");

    m_privateLinkServiceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountName"))
  {
    m_accountName = jsonValue.GetString("accountName");

    m_accountNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  return *this;
}

JsonValue SnowflakeConnectorProfileProperties::Jsonize() const
{
  JsonValue payload;

  if(m_warehouseHasBeenSet)
  {
   payload.WithString("warehouse", m_warehouse);

  }

  if(m_stageHasBeenSet)
  {
   payload.WithString("stage", m_stage);

  }

  if(m_bucketNameHasBeenSet)
  {
   payload.WithString("bucketName", m_bucketName);

  }

  if(m_bucketPrefixHasBeenSet)
  {
   payload.WithString("bucketPrefix", m_bucketPrefix);

  }

  if(m_privateLinkServiceNameHasBeenSet)
  {
   payload.WithString("privateLinkServiceName", m_privateLinkServiceName);

  }

  if(m_accountNameHasBeenSet)
  {
   payload.WithString("accountName", m_accountName);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
