/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/ReferenceDataSource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalytics
{
namespace Model
{

ReferenceDataSource::ReferenceDataSource() : 
    m_tableNameHasBeenSet(false),
    m_s3ReferenceDataSourceHasBeenSet(false),
    m_referenceSchemaHasBeenSet(false)
{
}

ReferenceDataSource::ReferenceDataSource(JsonView jsonValue) : 
    m_tableNameHasBeenSet(false),
    m_s3ReferenceDataSourceHasBeenSet(false),
    m_referenceSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceDataSource& ReferenceDataSource::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ReferenceDataSource"))
  {
    m_s3ReferenceDataSource = jsonValue.GetObject("S3ReferenceDataSource");

    m_s3ReferenceDataSourceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceSchema"))
  {
    m_referenceSchema = jsonValue.GetObject("ReferenceSchema");

    m_referenceSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceDataSource::Jsonize() const
{
  JsonValue payload;

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_s3ReferenceDataSourceHasBeenSet)
  {
   payload.WithObject("S3ReferenceDataSource", m_s3ReferenceDataSource.Jsonize());

  }

  if(m_referenceSchemaHasBeenSet)
  {
   payload.WithObject("ReferenceSchema", m_referenceSchema.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
