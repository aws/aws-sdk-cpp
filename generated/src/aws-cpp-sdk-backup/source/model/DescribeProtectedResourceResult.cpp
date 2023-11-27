/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeProtectedResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProtectedResourceResult::DescribeProtectedResourceResult() : 
    m_latestRestoreExecutionTimeMinutes(0)
{
}

DescribeProtectedResourceResult::DescribeProtectedResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_latestRestoreExecutionTimeMinutes(0)
{
  *this = result;
}

DescribeProtectedResourceResult& DescribeProtectedResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceArn"))
  {
    m_resourceArn = jsonValue.GetString("ResourceArn");

  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = jsonValue.GetString("ResourceType");

  }

  if(jsonValue.ValueExists("LastBackupTime"))
  {
    m_lastBackupTime = jsonValue.GetDouble("LastBackupTime");

  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

  }

  if(jsonValue.ValueExists("LastBackupVaultArn"))
  {
    m_lastBackupVaultArn = jsonValue.GetString("LastBackupVaultArn");

  }

  if(jsonValue.ValueExists("LastRecoveryPointArn"))
  {
    m_lastRecoveryPointArn = jsonValue.GetString("LastRecoveryPointArn");

  }

  if(jsonValue.ValueExists("LatestRestoreExecutionTimeMinutes"))
  {
    m_latestRestoreExecutionTimeMinutes = jsonValue.GetInt64("LatestRestoreExecutionTimeMinutes");

  }

  if(jsonValue.ValueExists("LatestRestoreJobCreationDate"))
  {
    m_latestRestoreJobCreationDate = jsonValue.GetDouble("LatestRestoreJobCreationDate");

  }

  if(jsonValue.ValueExists("LatestRestoreRecoveryPointCreationDate"))
  {
    m_latestRestoreRecoveryPointCreationDate = jsonValue.GetDouble("LatestRestoreRecoveryPointCreationDate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
