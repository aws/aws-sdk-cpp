/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Category.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoPlaces
{
namespace Model
{

Category::Category(JsonView jsonValue)
{
  *this = jsonValue;
}

Category& Category::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocalizedName"))
  {
    m_localizedName = jsonValue.GetString("LocalizedName");
    m_localizedNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Primary"))
  {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  return *this;
}

JsonValue Category::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_localizedNameHasBeenSet)
  {
   payload.WithString("LocalizedName", m_localizedName);

  }

  if(m_primaryHasBeenSet)
  {
   payload.WithBool("Primary", m_primary);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
