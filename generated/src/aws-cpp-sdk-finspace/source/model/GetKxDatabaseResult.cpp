/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/GetKxDatabaseResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKxDatabaseResult::GetKxDatabaseResult() : 
    m_numBytes(0),
    m_numChangesets(0),
    m_numFiles(0)
{
}

GetKxDatabaseResult::GetKxDatabaseResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_numBytes(0),
    m_numChangesets(0),
    m_numFiles(0)
{
  *this = result;
}

GetKxDatabaseResult& GetKxDatabaseResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

  }

  if(jsonValue.ValueExists("databaseArn"))
  {
    m_databaseArn = jsonValue.GetString("databaseArn");

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("lastCompletedChangesetId"))
  {
    m_lastCompletedChangesetId = jsonValue.GetString("lastCompletedChangesetId");

  }

  if(jsonValue.ValueExists("numBytes"))
  {
    m_numBytes = jsonValue.GetInt64("numBytes");

  }

  if(jsonValue.ValueExists("numChangesets"))
  {
    m_numChangesets = jsonValue.GetInteger("numChangesets");

  }

  if(jsonValue.ValueExists("numFiles"))
  {
    m_numFiles = jsonValue.GetInteger("numFiles");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
