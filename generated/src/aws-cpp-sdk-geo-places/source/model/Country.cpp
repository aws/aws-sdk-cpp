/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-places/model/Country.h>
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

Country::Country(JsonView jsonValue)
{
  *this = jsonValue;
}

Country& Country::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code2"))
  {
    m_code2 = jsonValue.GetString("Code2");
    m_code2HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Code3"))
  {
    m_code3 = jsonValue.GetString("Code3");
    m_code3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  return *this;
}

JsonValue Country::Jsonize() const
{
  JsonValue payload;

  if(m_code2HasBeenSet)
  {
   payload.WithString("Code2", m_code2);

  }

  if(m_code3HasBeenSet)
  {
   payload.WithString("Code3", m_code3);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace GeoPlaces
} // namespace Aws
