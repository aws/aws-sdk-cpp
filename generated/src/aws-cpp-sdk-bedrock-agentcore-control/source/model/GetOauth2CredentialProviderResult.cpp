/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GetOauth2CredentialProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOauth2CredentialProviderResult::GetOauth2CredentialProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOauth2CredentialProviderResult& GetOauth2CredentialProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientSecretArn"))
  {
    m_clientSecretArn = jsonValue.GetObject("clientSecretArn");
    m_clientSecretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialProviderArn"))
  {
    m_credentialProviderArn = jsonValue.GetString("credentialProviderArn");
    m_credentialProviderArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialProviderVendor"))
  {
    m_credentialProviderVendor = CredentialProviderVendorTypeMapper::GetCredentialProviderVendorTypeForName(jsonValue.GetString("credentialProviderVendor"));
    m_credentialProviderVendorHasBeenSet = true;
  }
  if(jsonValue.ValueExists("oauth2ProviderConfigOutput"))
  {
    m_oauth2ProviderConfigOutput = jsonValue.GetObject("oauth2ProviderConfigOutput");
    m_oauth2ProviderConfigOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdTime"))
  {
    m_createdTime = jsonValue.GetDouble("createdTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
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
