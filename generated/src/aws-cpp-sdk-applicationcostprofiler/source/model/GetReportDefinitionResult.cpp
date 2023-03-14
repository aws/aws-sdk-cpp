/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/applicationcostprofiler/model/GetReportDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationCostProfiler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReportDefinitionResult::GetReportDefinitionResult() : 
    m_reportFrequency(ReportFrequency::NOT_SET),
    m_format(Format::NOT_SET)
{
}

GetReportDefinitionResult::GetReportDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_reportFrequency(ReportFrequency::NOT_SET),
    m_format(Format::NOT_SET)
{
  *this = result;
}

GetReportDefinitionResult& GetReportDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("reportId"))
  {
    m_reportId = jsonValue.GetString("reportId");

  }

  if(jsonValue.ValueExists("reportDescription"))
  {
    m_reportDescription = jsonValue.GetString("reportDescription");

  }

  if(jsonValue.ValueExists("reportFrequency"))
  {
    m_reportFrequency = ReportFrequencyMapper::GetReportFrequencyForName(jsonValue.GetString("reportFrequency"));

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = FormatMapper::GetFormatForName(jsonValue.GetString("format"));

  }

  if(jsonValue.ValueExists("destinationS3Location"))
  {
    m_destinationS3Location = jsonValue.GetObject("destinationS3Location");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("lastUpdated");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
