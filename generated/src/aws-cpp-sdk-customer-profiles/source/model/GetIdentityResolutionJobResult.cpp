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

GetIdentityResolutionJobResult::GetIdentityResolutionJobResult() : 
    m_status(IdentityResolutionJobStatus::NOT_SET)
{
}

GetIdentityResolutionJobResult::GetIdentityResolutionJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(IdentityResolutionJobStatus::NOT_SET)
{
  *this = result;
}

GetIdentityResolutionJobResult& GetIdentityResolutionJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

  }

  if(jsonValue.ValueExists("JobId"))
  {
    m_jobId = jsonValue.GetString("JobId");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IdentityResolutionJobStatusMapper::GetIdentityResolutionJobStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("JobStartTime"))
  {
    m_jobStartTime = jsonValue.GetDouble("JobStartTime");

  }

  if(jsonValue.ValueExists("JobEndTime"))
  {
    m_jobEndTime = jsonValue.GetDouble("JobEndTime");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("JobExpirationTime"))
  {
    m_jobExpirationTime = jsonValue.GetDouble("JobExpirationTime");

  }

  if(jsonValue.ValueExists("AutoMerging"))
  {
    m_autoMerging = jsonValue.GetObject("AutoMerging");

  }

  if(jsonValue.ValueExists("ExportingLocation"))
  {
    m_exportingLocation = jsonValue.GetObject("ExportingLocation");

  }

  if(jsonValue.ValueExists("JobStats"))
  {
    m_jobStats = jsonValue.GetObject("JobStats");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
