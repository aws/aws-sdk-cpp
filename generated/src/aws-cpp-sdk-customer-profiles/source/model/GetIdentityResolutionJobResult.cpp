/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetIdentityResolutionJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetIdentityResolutionJobResult::GetIdentityResolutionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetIdentityResolutionJobResult& GetIdentityResolutionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");
    m_domainNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = IdentityResolutionJobStatusMapper::GetIdentityResolutionJobStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobStartTime"))
  {
    m_jobStartTime = jsonValue.GetDouble("JobStartTime");
    m_jobStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobEndTime"))
  {
    m_jobEndTime = jsonValue.GetDouble("JobEndTime");
    m_jobEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobExpirationTime"))
  {
    m_jobExpirationTime = jsonValue.GetDouble("JobExpirationTime");
    m_jobExpirationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoMerging"))
  {
    m_autoMerging = jsonValue.GetObject("AutoMerging");
    m_autoMergingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExportingLocation"))
  {
    m_exportingLocation = jsonValue.GetObject("ExportingLocation");
    m_exportingLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("JobStats"))
  {
    m_jobStats = jsonValue.GetObject("JobStats");
    m_jobStatsHasBeenSet = true;
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
