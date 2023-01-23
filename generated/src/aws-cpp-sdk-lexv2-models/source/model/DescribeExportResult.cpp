/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DescribeExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelsV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeExportResult::DescribeExportResult() : 
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
}

DescribeExportResult::DescribeExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_fileFormat(ImportExportFileFormat::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
  *this = result;
}

DescribeExportResult& DescribeExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("failureReasons"))
  {
    Aws::Utils::Array<JsonView> failureReasonsJsonList = jsonValue.GetArray("failureReasons");
    for(unsigned failureReasonsIndex = 0; failureReasonsIndex < failureReasonsJsonList.GetLength(); ++failureReasonsIndex)
    {
      m_failureReasons.push_back(failureReasonsJsonList[failureReasonsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("downloadUrl"))
  {
    m_downloadUrl = jsonValue.GetString("downloadUrl");

  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

  }



  return *this;
}
