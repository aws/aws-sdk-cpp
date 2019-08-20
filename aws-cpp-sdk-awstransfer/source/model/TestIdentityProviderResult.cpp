/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/awstransfer/model/TestIdentityProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Transfer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

TestIdentityProviderResult::TestIdentityProviderResult() : 
    m_statusCode(0)
{
}

TestIdentityProviderResult::TestIdentityProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_statusCode(0)
{
  *this = result;
}

TestIdentityProviderResult& TestIdentityProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Response"))
  {
    m_response = jsonValue.GetString("Response");

  }

  if(jsonValue.ValueExists("StatusCode"))
  {
    m_statusCode = jsonValue.GetInteger("StatusCode");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("Url"))
  {
    m_url = jsonValue.GetString("Url");

  }



  return *this;
}
