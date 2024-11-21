/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/GetCommandResult.h>
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

GetCommandResult::GetCommandResult() : 
    m_namespace(CommandNamespace::NOT_SET),
    m_deprecated(false),
    m_pendingDeletion(false)
{
}

GetCommandResult::GetCommandResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetCommandResult()
{
  *this = result;
}

GetCommandResult& GetCommandResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commandId"))
  {
    m_commandId = jsonValue.GetString("commandId");

  }

  if(jsonValue.ValueExists("commandArn"))
  {
    m_commandArn = jsonValue.GetString("commandArn");

  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = CommandNamespaceMapper::GetCommandNamespaceForName(jsonValue.GetString("namespace"));

  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("mandatoryParameters"))
  {
    Aws::Utils::Array<JsonView> mandatoryParametersJsonList = jsonValue.GetArray("mandatoryParameters");
    for(unsigned mandatoryParametersIndex = 0; mandatoryParametersIndex < mandatoryParametersJsonList.GetLength(); ++mandatoryParametersIndex)
    {
      m_mandatoryParameters.push_back(mandatoryParametersJsonList[mandatoryParametersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

  }

  if(jsonValue.ValueExists("deprecated"))
  {
    m_deprecated = jsonValue.GetBool("deprecated");

  }

  if(jsonValue.ValueExists("pendingDeletion"))
  {
    m_pendingDeletion = jsonValue.GetBool("pendingDeletion");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
