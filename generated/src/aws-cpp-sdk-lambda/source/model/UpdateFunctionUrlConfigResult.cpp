/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/UpdateFunctionUrlConfigResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFunctionUrlConfigResult::UpdateFunctionUrlConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateFunctionUrlConfigResult& UpdateFunctionUrlConfigResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FunctionUrl"))
  {
    m_functionUrl = jsonValue.GetString("FunctionUrl");
    m_functionUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthType"))
  {
    m_authType = FunctionUrlAuthTypeMapper::GetFunctionUrlAuthTypeForName(jsonValue.GetString("AuthType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Cors"))
  {
    m_cors = jsonValue.GetObject("Cors");
    m_corsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetString("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvokeMode"))
  {
    m_invokeMode = InvokeModeMapper::GetInvokeModeForName(jsonValue.GetString("InvokeMode"));
    m_invokeModeHasBeenSet = true;
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
