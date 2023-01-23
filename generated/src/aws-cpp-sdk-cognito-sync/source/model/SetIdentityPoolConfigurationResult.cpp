/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/model/SetIdentityPoolConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

SetIdentityPoolConfigurationResult::SetIdentityPoolConfigurationResult()
{
}

SetIdentityPoolConfigurationResult::SetIdentityPoolConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

SetIdentityPoolConfigurationResult& SetIdentityPoolConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IdentityPoolId"))
  {
    m_identityPoolId = jsonValue.GetString("IdentityPoolId");

  }

  if(jsonValue.ValueExists("PushSync"))
  {
    m_pushSync = jsonValue.GetObject("PushSync");

  }

  if(jsonValue.ValueExists("CognitoStreams"))
  {
    m_cognitoStreams = jsonValue.GetObject("CognitoStreams");

  }



  return *this;
}
