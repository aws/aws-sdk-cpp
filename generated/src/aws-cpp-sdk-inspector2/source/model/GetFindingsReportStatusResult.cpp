/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/GetFindingsReportStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFindingsReportStatusResult::GetFindingsReportStatusResult() : 
    m_errorCode(ReportingErrorCode::NOT_SET),
    m_status(ExternalReportStatus::NOT_SET)
{
}

GetFindingsReportStatusResult::GetFindingsReportStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_errorCode(ReportingErrorCode::NOT_SET),
    m_status(ExternalReportStatus::NOT_SET)
{
  *this = result;
}

GetFindingsReportStatusResult& GetFindingsReportStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("destination"))
  {
    m_destination = jsonValue.GetObject("destination");

  }

  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = ReportingErrorCodeMapper::GetReportingErrorCodeForName(jsonValue.GetString("errorCode"));

  }

  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");

  }

  if(jsonValue.ValueExists("filterCriteria"))
  {
    m_filterCriteria = jsonValue.GetObject("filterCriteria");

  }

  if(jsonValue.ValueExists("reportId"))
  {
    m_reportId = jsonValue.GetString("reportId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ExternalReportStatusMapper::GetExternalReportStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
