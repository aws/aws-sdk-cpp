/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/ExportSummary.h>
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

ExportSummary::ExportSummary() : 
    m_exportArnHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false)
{
}

ExportSummary::ExportSummary(JsonView jsonValue) : 
    m_exportArnHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false)
{
  *this = jsonValue;
}

ExportSummary& ExportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExportArn"))
  {
    m_exportArn = jsonValue.GetString("ExportArn");

    m_exportArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("ExportStatus"));

    m_exportStatusHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_exportArnHasBeenSet)
  {
   payload.WithString("ExportArn", m_exportArn);

  }

  if(m_exportStatusHasBeenSet)
  {
   payload.WithString("ExportStatus", ExportStatusMapper::GetNameForExportStatus(m_exportStatus));
  }

  return payload;
}

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
