/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/Region.h>
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

Region::Region(JsonView jsonValue)
{
  *this = jsonValue;
}

Region& Region::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("regionName"))
  {
    m_regionName = jsonValue.GetString("regionName");
    m_regionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regionNamePath"))
  {
    m_regionNamePath = jsonValue.GetString("regionNamePath");
    m_regionNamePathHasBeenSet = true;
  }
  return *this;
}

JsonValue Region::Jsonize() const
{
  JsonValue payload;

  if(m_regionNameHasBeenSet)
  {
   payload.WithString("regionName", m_regionName);

  }

  if(m_regionNamePathHasBeenSet)
  {
   payload.WithString("regionNamePath", m_regionNamePath);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
