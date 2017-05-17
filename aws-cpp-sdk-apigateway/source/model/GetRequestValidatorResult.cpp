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

#include <aws/apigateway/model/GetRequestValidatorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::APIGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRequestValidatorResult::GetRequestValidatorResult() : 
    m_validateRequestBody(false),
    m_validateRequestParameters(false)
{
}

GetRequestValidatorResult::GetRequestValidatorResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_validateRequestBody(false),
    m_validateRequestParameters(false)
{
  *this = result;
}

GetRequestValidatorResult& GetRequestValidatorResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("validateRequestBody"))
  {
    m_validateRequestBody = jsonValue.GetBool("validateRequestBody");

  }

  if(jsonValue.ValueExists("validateRequestParameters"))
  {
    m_validateRequestParameters = jsonValue.GetBool("validateRequestParameters");

  }



  return *this;
}
