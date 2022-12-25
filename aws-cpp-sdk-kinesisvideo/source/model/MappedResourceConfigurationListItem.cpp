/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/MappedResourceConfigurationListItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

MappedResourceConfigurationListItem::MappedResourceConfigurationListItem() : 
    m_typeHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
}

MappedResourceConfigurationListItem::MappedResourceConfigurationListItem(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_aRNHasBeenSet(false)
{
  *this = jsonValue;
}

MappedResourceConfigurationListItem& MappedResourceConfigurationListItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ARN"))
  {
    m_aRN = jsonValue.GetString("ARN");

    m_aRNHasBeenSet = true;
  }

  return *this;
}

JsonValue MappedResourceConfigurationListItem::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_aRNHasBeenSet)
  {
   payload.WithString("ARN", m_aRN);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
