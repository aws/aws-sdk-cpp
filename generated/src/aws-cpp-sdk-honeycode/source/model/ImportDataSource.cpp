/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/honeycode/model/ImportDataSource.h>
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

ImportDataSource::ImportDataSource() : 
    m_dataSourceConfigHasBeenSet(false)
{
}

ImportDataSource::ImportDataSource(JsonView jsonValue) : 
    m_dataSourceConfigHasBeenSet(false)
{
  *this = jsonValue;
}

ImportDataSource& ImportDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSourceConfig"))
  {
    m_dataSourceConfig = jsonValue.GetObject("dataSourceConfig");

    m_dataSourceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ImportDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceConfigHasBeenSet)
  {
   payload.WithObject("dataSourceConfig", m_dataSourceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Honeycode
} // namespace Aws
