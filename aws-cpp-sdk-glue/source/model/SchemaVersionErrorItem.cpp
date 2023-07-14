/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/SchemaVersionErrorItem.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

SchemaVersionErrorItem::SchemaVersionErrorItem() : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
}

SchemaVersionErrorItem::SchemaVersionErrorItem(JsonView jsonValue) : 
    m_versionNumber(0),
    m_versionNumberHasBeenSet(false),
    m_errorDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaVersionErrorItem& SchemaVersionErrorItem::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VersionNumber"))
  {
    m_versionNumber = jsonValue.GetInt64("VersionNumber");

    m_versionNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ErrorDetails"))
  {
    m_errorDetails = jsonValue.GetObject("ErrorDetails");

    m_errorDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaVersionErrorItem::Jsonize() const
{
  JsonValue payload;

  if(m_versionNumberHasBeenSet)
  {
   payload.WithInt64("VersionNumber", m_versionNumber);

  }

  if(m_errorDetailsHasBeenSet)
  {
   payload.WithObject("ErrorDetails", m_errorDetails.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
