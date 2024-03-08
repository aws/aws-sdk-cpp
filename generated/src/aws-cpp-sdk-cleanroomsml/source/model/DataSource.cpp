/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/DataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

DataSource::DataSource() : 
    m_glueDataSourceHasBeenSet(false)
{
}

DataSource::DataSource(JsonView jsonValue) : 
    m_glueDataSourceHasBeenSet(false)
{
  *this = jsonValue;
}

DataSource& DataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("glueDataSource"))
  {
    m_glueDataSource = jsonValue.GetObject("glueDataSource");

    m_glueDataSourceHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSource::Jsonize() const
{
  JsonValue payload;

  if(m_glueDataSourceHasBeenSet)
  {
   payload.WithObject("glueDataSource", m_glueDataSource.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
