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

GetArchiveExportResult::GetArchiveExportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetArchiveExportResult& GetArchiveExportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");
    m_archiveIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Filters"))
  {
    m_filters = jsonValue.GetObject("Filters");
    m_filtersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FromTimestamp"))
  {
    m_fromTimestamp = jsonValue.GetDouble("FromTimestamp");
    m_fromTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ToTimestamp"))
  {
    m_toTimestamp = jsonValue.GetDouble("ToTimestamp");
    m_toTimestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MaxResults"))
  {
    m_maxResults = jsonValue.GetInteger("MaxResults");
    m_maxResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportDestinationConfiguration"))
  {
    m_exportDestinationConfiguration = jsonValue.GetObject("ExportDestinationConfiguration");
    m_exportDestinationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
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
