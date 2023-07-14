﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateExportResult::CreateExportResult() : 
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
}

CreateExportResult::CreateExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
  *this = result;
}

CreateExportResult& CreateExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("exportId"))
  {
    m_exportId = jsonValue.GetString("exportId");

  }

  if(jsonValue.ValueExists("resourceSpecification"))
  {
    m_resourceSpecification = jsonValue.GetObject("resourceSpecification");

  }

  if(jsonValue.ValueExists("fileFormat"))
  {
    m_fileFormat = ImportExportFileFormatMapper::GetImportExportFileFormatForName(jsonValue.GetString("fileFormat"));

  }

  if(jsonValue.ValueExists("exportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }



  return *this;
}
