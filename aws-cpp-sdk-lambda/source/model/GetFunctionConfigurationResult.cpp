/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/lambda/model/GetFunctionConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetFunctionConfigurationResult::GetFunctionConfigurationResult() : 
    m_runtime(Runtime::NOT_SET),
    m_codeSize(0),
    m_timeout(0),
    m_memorySize(0)
{
}

GetFunctionConfigurationResult::GetFunctionConfigurationResult(const AmazonWebServiceResult<JsonValue>& result) : 
    m_runtime(Runtime::NOT_SET),
    m_codeSize(0),
    m_timeout(0),
    m_memorySize(0)
{
  *this = result;
}

GetFunctionConfigurationResult& GetFunctionConfigurationResult::operator =(const AmazonWebServiceResult<JsonValue>& result)
{
  const JsonValue& jsonValue = result.GetPayload();
  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");

  }

  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");

  }

  if(jsonValue.ValueExists("Runtime"))
  {
    m_runtime = RuntimeMapper::GetRuntimeForName(jsonValue.GetString("Runtime"));

  }

  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");

  }

  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");

  }

  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");

  }

  if(jsonValue.ValueExists("MemorySize"))
  {
    m_memorySize = jsonValue.GetInteger("MemorySize");

  }

  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");

  }

  if(jsonValue.ValueExists("CodeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("CodeSha256");

  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");

  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

  }



  return *this;
}
