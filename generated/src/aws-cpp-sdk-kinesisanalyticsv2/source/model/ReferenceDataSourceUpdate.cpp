/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/ReferenceDataSourceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

ReferenceDataSourceUpdate::ReferenceDataSourceUpdate() : 
    m_referenceIdHasBeenSet(false),
    m_tableNameUpdateHasBeenSet(false),
    m_s3ReferenceDataSourceUpdateHasBeenSet(false),
    m_referenceSchemaUpdateHasBeenSet(false)
{
}

ReferenceDataSourceUpdate::ReferenceDataSourceUpdate(JsonView jsonValue) : 
    m_referenceIdHasBeenSet(false),
    m_tableNameUpdateHasBeenSet(false),
    m_s3ReferenceDataSourceUpdateHasBeenSet(false),
    m_referenceSchemaUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceDataSourceUpdate& ReferenceDataSourceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ReferenceId"))
  {
    m_referenceId = jsonValue.GetString("ReferenceId");

    m_referenceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TableNameUpdate"))
  {
    m_tableNameUpdate = jsonValue.GetString("TableNameUpdate");

    m_tableNameUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("S3ReferenceDataSourceUpdate"))
  {
    m_s3ReferenceDataSourceUpdate = jsonValue.GetObject("S3ReferenceDataSourceUpdate");

    m_s3ReferenceDataSourceUpdateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReferenceSchemaUpdate"))
  {
    m_referenceSchemaUpdate = jsonValue.GetObject("ReferenceSchemaUpdate");

    m_referenceSchemaUpdateHasBeenSet = true;
  }

  return *this;
}

JsonValue ReferenceDataSourceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_referenceIdHasBeenSet)
  {
   payload.WithString("ReferenceId", m_referenceId);

  }

  if(m_tableNameUpdateHasBeenSet)
  {
   payload.WithString("TableNameUpdate", m_tableNameUpdate);

  }

  if(m_s3ReferenceDataSourceUpdateHasBeenSet)
  {
   payload.WithObject("S3ReferenceDataSourceUpdate", m_s3ReferenceDataSourceUpdate.Jsonize());

  }

  if(m_referenceSchemaUpdateHasBeenSet)
  {
   payload.WithObject("ReferenceSchemaUpdate", m_referenceSchemaUpdate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
