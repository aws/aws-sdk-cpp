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

GetCommandResult::GetCommandResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetCommandResult& GetCommandResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("commandId"))
  {
    m_commandId = jsonValue.GetString("commandId");
    m_commandIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("commandArn"))
  {
    m_commandArn = jsonValue.GetString("commandArn");
    m_commandArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = CommandNamespaceMapper::GetCommandNamespaceForName(jsonValue.GetString("namespace"));
    m_namespaceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("mandatoryParameters"))
  {
    Aws::Utils::Array<JsonView> mandatoryParametersJsonList = jsonValue.GetArray("mandatoryParameters");
    for(unsigned mandatoryParametersIndex = 0; mandatoryParametersIndex < mandatoryParametersJsonList.GetLength(); ++mandatoryParametersIndex)
    {
      m_mandatoryParameters.push_back(mandatoryParametersJsonList[mandatoryParametersIndex].AsObject());
    }
    m_mandatoryParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("payload"))
  {
    m_payload = jsonValue.GetObject("payload");
    m_payloadHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deprecated"))
  {
    m_deprecated = jsonValue.GetBool("deprecated");
    m_deprecatedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("pendingDeletion"))
  {
    m_pendingDeletion = jsonValue.GetBool("pendingDeletion");
    m_pendingDeletionHasBeenSet = true;
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
