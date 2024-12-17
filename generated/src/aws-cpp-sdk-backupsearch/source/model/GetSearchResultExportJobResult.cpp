/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/model/GetSearchResultExportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BackupSearch::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSearchResultExportJobResult::GetSearchResultExportJobResult() : 
    m_status(ExportJobStatus::NOT_SET)
{
}

GetSearchResultExportJobResult::GetSearchResultExportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetSearchResultExportJobResult()
{
  *this = result;
}

GetSearchResultExportJobResult& GetSearchResultExportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ExportJobIdentifier"))
  {
    m_exportJobIdentifier = jsonValue.GetString("ExportJobIdentifier");

  }

  if(jsonValue.ValueExists("ExportJobArn"))
  {
    m_exportJobArn = jsonValue.GetString("ExportJobArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ExportJobStatusMapper::GetExportJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("CompletionTime"))
  {
    m_completionTime = jsonValue.GetDouble("CompletionTime");

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("ExportSpecification"))
  {
    m_exportSpecification = jsonValue.GetObject("ExportSpecification");

  }

  if(jsonValue.ValueExists("SearchJobArn"))
  {
    m_searchJobArn = jsonValue.GetString("SearchJobArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
