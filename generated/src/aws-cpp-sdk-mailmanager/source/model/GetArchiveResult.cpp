/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mailmanager/model/GetArchiveResult.h>
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

GetArchiveResult::GetArchiveResult() : 
    m_archiveState(ArchiveState::NOT_SET)
{
}

GetArchiveResult::GetArchiveResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetArchiveResult()
{
  *this = result;
}

GetArchiveResult& GetArchiveResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveArn"))
  {
    m_archiveArn = jsonValue.GetString("ArchiveArn");

  }

  if(jsonValue.ValueExists("ArchiveId"))
  {
    m_archiveId = jsonValue.GetString("ArchiveId");

  }

  if(jsonValue.ValueExists("ArchiveName"))
  {
    m_archiveName = jsonValue.GetString("ArchiveName");

  }

  if(jsonValue.ValueExists("ArchiveState"))
  {
    m_archiveState = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("ArchiveState"));

  }

  if(jsonValue.ValueExists("CreatedTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("CreatedTimestamp");

  }

  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");

  }

  if(jsonValue.ValueExists("LastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("LastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("Retention"))
  {
    m_retention = jsonValue.GetObject("Retention");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
