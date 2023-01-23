/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/RelationalDatabaseBundle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

RelationalDatabaseBundle::RelationalDatabaseBundle() : 
    m_bundleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_transferPerMonthInGb(0),
    m_transferPerMonthInGbHasBeenSet(false),
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_isEncrypted(false),
    m_isEncryptedHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
}

RelationalDatabaseBundle::RelationalDatabaseBundle(JsonView jsonValue) : 
    m_bundleIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_price(0.0),
    m_priceHasBeenSet(false),
    m_ramSizeInGb(0.0),
    m_ramSizeInGbHasBeenSet(false),
    m_diskSizeInGb(0),
    m_diskSizeInGbHasBeenSet(false),
    m_transferPerMonthInGb(0),
    m_transferPerMonthInGbHasBeenSet(false),
    m_cpuCount(0),
    m_cpuCountHasBeenSet(false),
    m_isEncrypted(false),
    m_isEncryptedHasBeenSet(false),
    m_isActive(false),
    m_isActiveHasBeenSet(false)
{
  *this = jsonValue;
}

RelationalDatabaseBundle& RelationalDatabaseBundle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bundleId"))
  {
    m_bundleId = jsonValue.GetString("bundleId");

    m_bundleIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("price"))
  {
    m_price = jsonValue.GetDouble("price");

    m_priceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ramSizeInGb"))
  {
    m_ramSizeInGb = jsonValue.GetDouble("ramSizeInGb");

    m_ramSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("diskSizeInGb"))
  {
    m_diskSizeInGb = jsonValue.GetInteger("diskSizeInGb");

    m_diskSizeInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("transferPerMonthInGb"))
  {
    m_transferPerMonthInGb = jsonValue.GetInteger("transferPerMonthInGb");

    m_transferPerMonthInGbHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpuCount"))
  {
    m_cpuCount = jsonValue.GetInteger("cpuCount");

    m_cpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isEncrypted"))
  {
    m_isEncrypted = jsonValue.GetBool("isEncrypted");

    m_isEncryptedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isActive"))
  {
    m_isActive = jsonValue.GetBool("isActive");

    m_isActiveHasBeenSet = true;
  }

  return *this;
}

JsonValue RelationalDatabaseBundle::Jsonize() const
{
  JsonValue payload;

  if(m_bundleIdHasBeenSet)
  {
   payload.WithString("bundleId", m_bundleId);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_priceHasBeenSet)
  {
   payload.WithDouble("price", m_price);

  }

  if(m_ramSizeInGbHasBeenSet)
  {
   payload.WithDouble("ramSizeInGb", m_ramSizeInGb);

  }

  if(m_diskSizeInGbHasBeenSet)
  {
   payload.WithInteger("diskSizeInGb", m_diskSizeInGb);

  }

  if(m_transferPerMonthInGbHasBeenSet)
  {
   payload.WithInteger("transferPerMonthInGb", m_transferPerMonthInGb);

  }

  if(m_cpuCountHasBeenSet)
  {
   payload.WithInteger("cpuCount", m_cpuCount);

  }

  if(m_isEncryptedHasBeenSet)
  {
   payload.WithBool("isEncrypted", m_isEncrypted);

  }

  if(m_isActiveHasBeenSet)
  {
   payload.WithBool("isActive", m_isActive);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
