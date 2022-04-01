/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigateway/model/GetRequestValidatorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
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

GetRequestValidatorResult::GetRequestValidatorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_validateRequestBody(false),
    m_validateRequestParameters(false)
{
  *this = result;
}

GetRequestValidatorResult& GetRequestValidatorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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
