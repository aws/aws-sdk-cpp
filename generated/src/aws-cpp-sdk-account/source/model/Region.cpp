/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/Region.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Account
{
namespace Model
{

Region::Region() : 
    m_regionNameHasBeenSet(false),
    m_regionOptStatus(RegionOptStatus::NOT_SET),
    m_regionOptStatusHasBeenSet(false)
{
}

Region::Region(JsonView jsonValue) : 
    m_regionNameHasBeenSet(false),
    m_regionOptStatus(RegionOptStatus::NOT_SET),
    m_regionOptStatusHasBeenSet(false)
{
  *this = jsonValue;
}

Region& Region::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RegionName"))
  {
    m_regionName = jsonValue.GetString("RegionName");

    m_regionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RegionOptStatus"))
  {
    m_regionOptStatus = RegionOptStatusMapper::GetRegionOptStatusForName(jsonValue.GetString("RegionOptStatus"));

    m_regionOptStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue Region::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("RegionName", m_regionName);

  }

  if(m_regionOptStatusHasBeenSet)
  {
   payload.WithString("RegionOptStatus", RegionOptStatusMapper::GetNameForRegionOptStatus(m_regionOptStatus));
  }

  return payload;
}

} // namespace Model
} // namespace Account
} // namespace Aws
