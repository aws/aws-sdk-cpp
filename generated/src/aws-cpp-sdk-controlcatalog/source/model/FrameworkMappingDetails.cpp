/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controlcatalog/model/FrameworkMappingDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ControlCatalog
{
namespace Model
{

FrameworkMappingDetails::FrameworkMappingDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

FrameworkMappingDetails& FrameworkMappingDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Item"))
  {
    m_item = jsonValue.GetString("Item");
    m_itemHasBeenSet = true;
  }
  return *this;
}

JsonValue FrameworkMappingDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_itemHasBeenSet)
  {
   payload.WithString("Item", m_item);

  }

  return payload;
}

} // namespace Model
} // namespace ControlCatalog
} // namespace Aws
