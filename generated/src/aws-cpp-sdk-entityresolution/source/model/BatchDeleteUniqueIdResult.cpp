/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/BatchDeleteUniqueIdResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteUniqueIdResult::BatchDeleteUniqueIdResult() : 
    m_status(DeleteUniqueIdStatus::NOT_SET)
{
}

BatchDeleteUniqueIdResult::BatchDeleteUniqueIdResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DeleteUniqueIdStatus::NOT_SET)
{
  *this = result;
}

BatchDeleteUniqueIdResult& BatchDeleteUniqueIdResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("deleted"))
  {
    Aws::Utils::Array<JsonView> deletedJsonList = jsonValue.GetArray("deleted");
    for(unsigned deletedIndex = 0; deletedIndex < deletedJsonList.GetLength(); ++deletedIndex)
    {
      m_deleted.push_back(deletedJsonList[deletedIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("disconnectedUniqueIds"))
  {
    Aws::Utils::Array<JsonView> disconnectedUniqueIdsJsonList = jsonValue.GetArray("disconnectedUniqueIds");
    for(unsigned disconnectedUniqueIdsIndex = 0; disconnectedUniqueIdsIndex < disconnectedUniqueIdsJsonList.GetLength(); ++disconnectedUniqueIdsIndex)
    {
      m_disconnectedUniqueIds.push_back(disconnectedUniqueIdsJsonList[disconnectedUniqueIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("errors"))
  {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("errors");
    for(unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex)
    {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = DeleteUniqueIdStatusMapper::GetDeleteUniqueIdStatusForName(jsonValue.GetString("status"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
