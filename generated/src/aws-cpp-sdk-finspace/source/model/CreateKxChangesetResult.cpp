/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/CreateKxChangesetResult.h>
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

CreateKxChangesetResult::CreateKxChangesetResult() : 
    m_status(ChangesetStatus::NOT_SET)
{
}

CreateKxChangesetResult::CreateKxChangesetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ChangesetStatus::NOT_SET)
{
  *this = result;
}

CreateKxChangesetResult& CreateKxChangesetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("changesetId"))
  {
    m_changesetId = jsonValue.GetString("changesetId");

  }

  if(jsonValue.ValueExists("databaseName"))
  {
    m_databaseName = jsonValue.GetString("databaseName");

  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

  }

  if(jsonValue.ValueExists("changeRequests"))
  {
    Aws::Utils::Array<JsonView> changeRequestsJsonList = jsonValue.GetArray("changeRequests");
    for(unsigned changeRequestsIndex = 0; changeRequestsIndex < changeRequestsJsonList.GetLength(); ++changeRequestsIndex)
    {
      m_changeRequests.push_back(changeRequestsJsonList[changeRequestsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ChangesetStatusMapper::GetChangesetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("errorInfo"))
  {
    m_errorInfo = jsonValue.GetObject("errorInfo");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
