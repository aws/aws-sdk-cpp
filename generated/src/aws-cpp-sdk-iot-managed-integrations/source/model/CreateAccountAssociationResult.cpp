/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CreateAccountAssociationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateAccountAssociationResult::CreateAccountAssociationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateAccountAssociationResult& CreateAccountAssociationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("OAuthAuthorizationUrl"))
  {
    m_oAuthAuthorizationUrl = jsonValue.GetString("OAuthAuthorizationUrl");
    m_oAuthAuthorizationUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AccountAssociationId"))
  {
    m_accountAssociationId = jsonValue.GetString("AccountAssociationId");
    m_accountAssociationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AssociationState"))
  {
    m_associationState = AssociationStateMapper::GetAssociationStateForName(jsonValue.GetString("AssociationState"));
    m_associationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
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
