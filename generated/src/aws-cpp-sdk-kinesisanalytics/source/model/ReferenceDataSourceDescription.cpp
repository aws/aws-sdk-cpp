/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalytics/model/ReferenceDataSourceDescription.h>
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

ReferenceDataSourceDescription::ReferenceDataSourceDescription() : 
    m_referenceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_s3ReferenceDataSourceDescriptionHasBeenSet(false),
    m_referenceSchemaHasBeenSet(false)
{
}

ReferenceDataSourceDescription::ReferenceDataSourceDescription(JsonView jsonValue) : 
    m_referenceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_s3ReferenceDataSourceDescriptionHasBeenSet(false),
    m_referenceSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceDataSourceDescription& ReferenceDataSourceDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetString("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

    m_tableNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ReferenceDataSourceDescription"))
  {
    m_s3ReferenceDataSourceDescription = jsonValue.GetObject("S3ReferenceDataSourceDescription");

    m_s3ReferenceDataSourceDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceSchema"))
  {
    m_referenceSchema = jsonValue.GetObject("ReferenceSchema");

    m_referenceSchemaHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceDataSourceDescription::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  if(m_tableNameHasBeenSet)
  {
   payload.WithString("TableName", m_tableName);

  }

  if(m_s3ReferenceDataSourceDescriptionHasBeenSet)
  {
   payload.WithObject("S3ReferenceDataSourceDescription", m_s3ReferenceDataSourceDescription.Jsonize());

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
