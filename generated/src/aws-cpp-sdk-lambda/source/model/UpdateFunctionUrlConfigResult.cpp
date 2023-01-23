/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/UpdateFunctionUrlConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFunctionUrlConfigResult::UpdateFunctionUrlConfigResult() : 
    m_authType(FunctionUrlAuthType::NOT_SET)
{
}

UpdateFunctionUrlConfigResult::UpdateFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_authType(FunctionUrlAuthType::NOT_SET)
{
  *this = result;
}

UpdateFunctionUrlConfigResult& UpdateFunctionUrlConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FunctionUrl"))
  {
    m_functionUrl = jsonValue.GetString("FunctionUrl");

  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

  }

  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = FunctionUrlAuthTypeMapper::GetFunctionUrlAuthTypeForName(jsonValue.GetString("AuthType"));

  }

  if(jsonValue.ValueExists("Cors"))
  {
    m_cors = jsonValue.GetObject("Cors");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("LastModifiedTime");

  }



  return *this;
}
