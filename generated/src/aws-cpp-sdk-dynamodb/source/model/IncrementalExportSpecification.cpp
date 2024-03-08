/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/IncrementalExportSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DynamoDB
{
namespace Model
{

IncrementalExportSpecification::IncrementalExportSpecification() : 
    m_exportFromTimeHasBeenSet(false),
    m_exportToTimeHasBeenSet(false),
    m_exportViewType(ExportViewType::NOT_SET),
    m_exportViewTypeHasBeenSet(false)
{
}

IncrementalExportSpecification::IncrementalExportSpecification(JsonView jsonValue) : 
    m_exportFromTimeHasBeenSet(false),
    m_exportToTimeHasBeenSet(false),
    m_exportViewType(ExportViewType::NOT_SET),
    m_exportViewTypeHasBeenSet(false)
{
  *this = jsonValue;
}

IncrementalExportSpecification& IncrementalExportSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportFromTime"))
  {
    m_exportFromTime = jsonValue.GetDouble("ExportFromTime");

    m_exportFromTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportToTime"))
  {
    m_exportToTime = jsonValue.GetDouble("ExportToTime");

    m_exportToTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportViewType"))
  {
    m_exportViewType = ExportViewTypeMapper::GetExportViewTypeForName(jsonValue.GetString("ExportViewType"));

    m_exportViewTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue IncrementalExportSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_exportFromTimeHasBeenSet)
  {
   payload.WithDouble("ExportFromTime", m_exportFromTime.SecondsWithMSPrecision());
  }

  if(m_exportToTimeHasBeenSet)
  {
   payload.WithDouble("ExportToTime", m_exportToTime.SecondsWithMSPrecision());
  }

  if(m_exportViewTypeHasBeenSet)
  {
   payload.WithString("ExportViewType", ExportViewTypeMapper::GetNameForExportViewType(m_exportViewType));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
