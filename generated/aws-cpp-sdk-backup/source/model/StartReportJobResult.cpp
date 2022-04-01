/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartReportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

StartReportJobResult::StartReportJobResult()
{
}

StartReportJobResult::StartReportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

StartReportJobResult& StartReportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ReportJobId"))
  {
    m_reportJobId = jsonValue.GetString("ReportJobId");

  }



  return *this;
}
