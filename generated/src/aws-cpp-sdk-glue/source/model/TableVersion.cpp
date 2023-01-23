/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/TableVersion.h>
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

TableVersion::TableVersion() : 
    m_tableHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
}

TableVersion::TableVersion(JsonView jsonValue) : 
    m_tableHasBeenSet(false),
    m_versionIdHasBeenSet(false)
{
  *this = jsonValue;
}

TableVersion& TableVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Table"))
  {
    m_table = jsonValue.GetObject("Table");

    m_tableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VersionId"))
  {
    m_versionId = jsonValue.GetString("VersionId");

    m_versionIdHasBeenSet = true;
  }

  return *this;
}

JsonValue TableVersion::Jsonize() const
{
  JsonValue payload;

  if(m_tableHasBeenSet)
  {
   payload.WithObject("Table", m_table.Jsonize());

  }

  if(m_versionIdHasBeenSet)
  {
   payload.WithString("VersionId", m_versionId);

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
