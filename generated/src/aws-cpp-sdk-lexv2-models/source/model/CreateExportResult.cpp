/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/CreateExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateExportResult::CreateExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateExportResult& CreateExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
