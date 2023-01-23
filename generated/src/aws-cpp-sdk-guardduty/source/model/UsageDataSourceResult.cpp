/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/UsageDataSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

UsageDataSourceResult::UsageDataSourceResult() : 
    m_dataSource(DataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_totalHasBeenSet(false)
{
}

UsageDataSourceResult::UsageDataSourceResult(JsonView jsonValue) : 
    m_dataSource(DataSource::NOT_SET),
    m_dataSourceHasBeenSet(false),
    m_totalHasBeenSet(false)
{
  *this = jsonValue;
}

UsageDataSourceResult& UsageDataSourceResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dataSource"))
  {
    m_dataSource = DataSourceMapper::GetDataSourceForName(jsonValue.GetString("dataSource"));

    m_dataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("total"))
  {
    m_total = jsonValue.GetObject("total");

    m_totalHasBeenSet = true;
  }

  return *this;
}

JsonValue UsageDataSourceResult::Jsonize() const
{
  JsonValue payload;

  if(m_dataSourceHasBeenSet)
  {
   payload.WithString("dataSource", DataSourceMapper::GetNameForDataSource(m_dataSource));
  }

  if(m_totalHasBeenSet)
  {
   payload.WithObject("total", m_total.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
