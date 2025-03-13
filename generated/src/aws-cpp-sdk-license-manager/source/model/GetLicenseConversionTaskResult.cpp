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

GetLicenseConversionTaskResult::GetLicenseConversionTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetLicenseConversionTaskResult& GetLicenseConversionTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("LicenseConversionTaskId"))
  {
    m_licenseConversionTaskId = jsonValue.GetString("LicenseConversionTaskId");
    m_licenseConversionTaskIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceLicenseContext"))
  {
    m_sourceLicenseContext = jsonValue.GetObject("SourceLicenseContext");
    m_sourceLicenseContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationLicenseContext"))
  {
    m_destinationLicenseContext = jsonValue.GetObject("DestinationLicenseContext");
    m_destinationLicenseContextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = LicenseConversionTaskStatusMapper::GetLicenseConversionTaskStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StartTime"))
  {
    m_startTime = jsonValue.GetDouble("StartTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LicenseConversionTime"))
  {
    m_licenseConversionTime = jsonValue.GetDouble("LicenseConversionTime");
    m_licenseConversionTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");
    m_endTimeHasBeenSet = true;
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
