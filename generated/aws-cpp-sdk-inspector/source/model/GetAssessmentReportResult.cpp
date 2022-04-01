/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/GetAssessmentReportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Inspector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAssessmentReportResult::GetAssessmentReportResult() : 
    m_status(ReportStatus::NOT_SET)
{
}

GetAssessmentReportResult::GetAssessmentReportResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReportStatus::NOT_SET)
{
  *this = result;
}

GetAssessmentReportResult& GetAssessmentReportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = ReportStatusMapper::GetReportStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("url"))
  {
    m_url = jsonValue.GetString("url");

  }



  return *this;
}
