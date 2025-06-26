/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetConnectorDestinationResult.h>
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

GetConnectorDestinationResult::GetConnectorDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConnectorDestinationResult& GetConnectorDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CloudConnectorId"))
  {
    m_cloudConnectorId = jsonValue.GetString("CloudConnectorId");
    m_cloudConnectorIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = AuthTypeMapper::GetAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthConfig"))
  {
    m_authConfig = jsonValue.GetObject("AuthConfig");
    m_authConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretsManager"))
  {
    m_secretsManager = jsonValue.GetObject("SecretsManager");
    m_secretsManagerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OAuthCompleteRedirectUrl"))
  {
    m_oAuthCompleteRedirectUrl = jsonValue.GetString("OAuthCompleteRedirectUrl");
    m_oAuthCompleteRedirectUrlHasBeenSet = true;
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
