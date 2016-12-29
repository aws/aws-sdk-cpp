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
#include <aws/ds/model/SchemaExtensionInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectoryService
{
namespace Model
{

SchemaExtensionInfo::SchemaExtensionInfo() : 
    m_directoryIdHasBeenSet(false),
    m_schemaExtensionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaExtensionStatus(SchemaExtensionStatus::NOT_SET),
    m_schemaExtensionStatusHasBeenSet(false),
    m_schemaExtensionStatusReasonHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
}

SchemaExtensionInfo::SchemaExtensionInfo(const JsonValue& jsonValue) : 
    m_directoryIdHasBeenSet(false),
    m_schemaExtensionIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_schemaExtensionStatus(SchemaExtensionStatus::NOT_SET),
    m_schemaExtensionStatusHasBeenSet(false),
    m_schemaExtensionStatusReasonHasBeenSet(false),
    m_startDateTimeHasBeenSet(false),
    m_endDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

SchemaExtensionInfo& SchemaExtensionInfo::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("DirectoryId"))
  {
    m_directoryId = jsonValue.GetString("DirectoryId");

    m_directoryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaExtensionId"))
  {
    m_schemaExtensionId = jsonValue.GetString("SchemaExtensionId");

    m_schemaExtensionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaExtensionStatus"))
  {
    m_schemaExtensionStatus = SchemaExtensionStatusMapper::GetSchemaExtensionStatusForName(jsonValue.GetString("SchemaExtensionStatus"));

    m_schemaExtensionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SchemaExtensionStatusReason"))
  {
    m_schemaExtensionStatusReason = jsonValue.GetString("SchemaExtensionStatusReason");

    m_schemaExtensionStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StartDateTime"))
  {
    m_startDateTime = jsonValue.GetDouble("StartDateTime");

    m_startDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EndDateTime"))
  {
    m_endDateTime = jsonValue.GetDouble("EndDateTime");

    m_endDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue SchemaExtensionInfo::Jsonize() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_schemaExtensionIdHasBeenSet)
  {
   payload.WithString("SchemaExtensionId", m_schemaExtensionId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_schemaExtensionStatusHasBeenSet)
  {
   payload.WithString("SchemaExtensionStatus", SchemaExtensionStatusMapper::GetNameForSchemaExtensionStatus(m_schemaExtensionStatus));
  }

  if(m_schemaExtensionStatusReasonHasBeenSet)
  {
   payload.WithString("SchemaExtensionStatusReason", m_schemaExtensionStatusReason);

  }

  if(m_startDateTimeHasBeenSet)
  {
   payload.WithDouble("StartDateTime", m_startDateTime.SecondsWithMSPrecision());
  }

  if(m_endDateTimeHasBeenSet)
  {
   payload.WithDouble("EndDateTime", m_endDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace DirectoryService
} // namespace Aws