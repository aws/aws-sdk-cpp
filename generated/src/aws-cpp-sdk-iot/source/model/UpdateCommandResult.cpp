/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/UpdateCommandResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateCommandResult::UpdateCommandResult() : 
    m_deprecated(false)
{
}

UpdateCommandResult::UpdateCommandResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : UpdateCommandResult()
{
  *this = result;
}

UpdateCommandResult& UpdateCommandResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commandId"))
  {
    m_commandId = jsonValue.GetString("commandId");

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("deprecated"))
  {
    m_deprecated = jsonValue.GetBool("deprecated");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
