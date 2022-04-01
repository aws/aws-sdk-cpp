/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/PhysicalTable.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

PhysicalTable::PhysicalTable() : 
    m_relationalTableHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_s3SourceHasBeenSet(false)
{
}

PhysicalTable::PhysicalTable(JsonView jsonValue) : 
    m_relationalTableHasBeenSet(false),
    m_customSqlHasBeenSet(false),
    m_s3SourceHasBeenSet(false)
{
  *this = jsonValue;
}

PhysicalTable& PhysicalTable::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("RelationalTable"))
  {
    m_relationalTable = jsonValue.GetObject("RelationalTable");

    m_relationalTableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CustomSql"))
  {
    m_customSql = jsonValue.GetObject("CustomSql");

    m_customSqlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3Source"))
  {
    m_s3Source = jsonValue.GetObject("S3Source");

    m_s3SourceHasBeenSet = true;
  }

  return *this;
}

JsonValue PhysicalTable::Jsonize() const
{
  JsonValue payload;

  if(m_relationalTableHasBeenSet)
  {
   payload.WithObject("RelationalTable", m_relationalTable.Jsonize());

  }

  if(m_customSqlHasBeenSet)
  {
   payload.WithObject("CustomSql", m_customSql.Jsonize());

  }

  if(m_s3SourceHasBeenSet)
  {
   payload.WithObject("S3Source", m_s3Source.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
