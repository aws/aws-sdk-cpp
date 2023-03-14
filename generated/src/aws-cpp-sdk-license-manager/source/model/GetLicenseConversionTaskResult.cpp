/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/GetLicenseConversionTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetLicenseConversionTaskResult::GetLicenseConversionTaskResult() : 
    m_status(LicenseConversionTaskStatus::NOT_SET)
{
}

GetLicenseConversionTaskResult::GetLicenseConversionTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(LicenseConversionTaskStatus::NOT_SET)
{
  *this = result;
}

GetLicenseConversionTaskResult& GetLicenseConversionTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConversionTaskId"))
  {
    m_licenseConversionTaskId = jsonValue.GetString("LicenseConversionTaskId");

  }

  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("SourceLicenseContext"))
  {
    m_sourceLicenseContext = jsonValue.GetObject("SourceLicenseContext");

  }

  if(jsonValue.ValueExists("DestinationLicenseContext"))
  {
    m_destinationLicenseContext = jsonValue.GetObject("DestinationLicenseContext");

  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = LicenseConversionTaskStatusMapper::GetLicenseConversionTaskStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");

  }

  if(jsonValue.ValueExists("LicenseConversionTime"))
  {
    m_licenseConversionTime = jsonValue.GetDouble("LicenseConversionTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
