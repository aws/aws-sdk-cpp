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
#include <aws/kinesisanalytics/model/ReferenceDataSourceUpdate.h>
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

ReferenceDataSourceUpdate::ReferenceDataSourceUpdate() : 
    m_referenceIdHasBeenSet(false),
    m_tableNameUpdateHasBeenSet(false),
    m_s3ReferenceDataSourceUpdateHasBeenSet(false),
    m_referenceSchemaUpdateHasBeenSet(false)
{
}

ReferenceDataSourceUpdate::ReferenceDataSourceUpdate(const JsonValue& jsonValue) : 
    m_referenceIdHasBeenSet(false),
    m_tableNameUpdateHasBeenSet(false),
    m_s3ReferenceDataSourceUpdateHasBeenSet(false),
    m_referenceSchemaUpdateHasBeenSet(false)
{
  *this = jsonValue;
}

ReferenceDataSourceUpdate& ReferenceDataSourceUpdate::operator =(const JsonValue& jsonValue)
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
} // namespace KinesisAnalytics
} // namespace Aws