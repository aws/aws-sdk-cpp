﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

SchemaExtensionInfo::SchemaExtensionInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

SchemaExtensionInfo& SchemaExtensionInfo::operator =(JsonView jsonValue)
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
