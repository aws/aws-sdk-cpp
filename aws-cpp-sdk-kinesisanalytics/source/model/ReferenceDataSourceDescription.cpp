/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ReferenceDataSourceDescription::ReferenceDataSourceDescription(const JsonValue& jsonValue) : 
    m_referenceIdHasBeenSet(false),
    m_tableNameHasBeenSet(false),
    m_s3ReferenceDataSourceDescriptionHasBeenSet(false),
    m_referenceSchemaHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceDataSourceDescription& ReferenceDataSourceDescription::operator =(const JsonValue& jsonValue)
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