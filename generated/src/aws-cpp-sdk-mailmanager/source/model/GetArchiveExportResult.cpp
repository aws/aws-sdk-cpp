/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveExportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MailManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetArchiveExportResult::GetArchiveExportResult() : 
    m_maxResults(0)
{
}

GetArchiveExportResult::GetArchiveExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetArchiveExportResult()
{
  *this = result;
}

GetArchiveExportResult& GetArchiveExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");

  }

  if(jsonValue.ValueExists("ExportDestinationConfiguration"))
  {
    m_exportDestinationConfiguration = jsonValue.GetObject("ExportDestinationConfiguration");

  }

  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");

  }

  if(jsonValue.ValueExists("FromTimestamp"))
  {
    m_fromTimestamp = jsonValue.GetDouble("FromTimestamp");

  }

  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");

  }

  if(jsonValue.ValueExists("ToTimestamp"))
  {
    m_toTimestamp = jsonValue.GetDouble("ToTimestamp");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
