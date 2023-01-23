/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/GetExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LexModelBuildingService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetExportResult::GetExportResult() : 
    m_resourceType(ResourceType::NOT_SET),
    m_exportType(ExportType::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
}

GetExportResult::GetExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_resourceType(ResourceType::NOT_SET),
    m_exportType(ExportType::NOT_SET),
    m_exportStatus(ExportStatus::NOT_SET)
{
  *this = result;
}

GetExportResult& GetExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

  }

  if(jsonValue.ValueExists("resourceType"))
  {
    m_resourceType = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("resourceType"));

  }

  if(jsonValue.ValueExists("exportType"))
  {
    m_exportType = ExportTypeMapper::GetExportTypeForName(jsonValue.GetString("exportType"));

  }

  if(jsonValue.ValueExists("exportStatus"))
  {
    m_exportStatus = ExportStatusMapper::GetExportStatusForName(jsonValue.GetString("exportStatus"));

  }

  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");

  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

  }



  return *this;
}
