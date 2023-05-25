/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/DataSource.h>
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

DataSource::DataSource() : 
    m_glueTableHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_glueTableHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("GlueTable"))
  {
    m_glueTable = jsonValue.GetObject("GlueTable");

    m_glueTableHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_glueTableHasBeenSet)
  {
   payload.WithObject("GlueTable", m_glueTable.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
