/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/ExportSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

ExportSummary::ExportSummary() : 
    m_exportIdHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

ExportSummary::ExportSummary(JsonView jsonValue) : 
    m_exportIdHasBeenSet(false),
    m_resourceSpecificationHasBeenSet(false),
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_fileFormatHasBeenSet(false),
    m_exportStatus(ExportStatus::NOT_SET),
    m_exportStatusHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ExportSummary& ExportSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");

    m_exportIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

    m_resourceSpecificationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = ImportExportFileFormatMapper::GetImportExportFileFormatForName(jsonValue.GetString("fileFormat"));

    m_fileFormatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("exportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));

    m_exportStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExportSummary::Jsonize() const
{
  JsonValue payload;

  if(m_exportIdHasBeenSet)
  {
   payload.WithString("exportId", m_exportId);

  }

  if(m_resourceSpecificationHasBeenSet)
  {
   payload.WithObject("resourceSpecification", m_resourceSpecification.Jsonize());

  }

  if(m_fileFormatHasBeenSet)
  {
   payload.WithString("fileFormat", ImportExportFileFormatMapper::GetNameForImportExportFileFormat(m_fileFormat));
  }

  if(m_exportStatusHasBeenSet)
  {
   payload.WithString("exportStatus", ExportStatusMapper::GetNameForExportStatus(m_exportStatus));
  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
