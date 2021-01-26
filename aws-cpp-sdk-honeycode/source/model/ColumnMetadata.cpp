/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ColumnMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Honeycode
{
namespace Model
{

ColumnMetadata::ColumnMetadata() : 
    m_nameHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
}

ColumnMetadata::ColumnMetadata(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_format(Format::NOT_SET),
    m_formatHasBeenSet(false)
{
  *this = jsonValue;
}

ColumnMetadata& ColumnMetadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  return *this;
}

JsonValue ColumnMetadata::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", FormatMapper::GetNameForFormat(m_format));
  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
