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

#include <aws/lambda/model/UpdateFunctionCodeResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateFunctionCodeResult::UpdateFunctionCodeResult() : 
    m_runtime(Runtime::NOT_SET),
    m_codeSize(0),
    m_timeout(0),
    m_memorySize(0),
    m_state(State::NOT_SET),
    m_stateReasonCode(StateReasonCode::NOT_SET),
    m_lastUpdateStatus(LastUpdateStatus::NOT_SET),
    m_lastUpdateStatusReasonCode(LastUpdateStatusReasonCode::NOT_SET)
{
}

UpdateFunctionCodeResult::UpdateFunctionCodeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_runtime(Runtime::NOT_SET),
    m_codeSize(0),
    m_timeout(0),
    m_memorySize(0),
    m_state(State::NOT_SET),
    m_stateReasonCode(StateReasonCode::NOT_SET),
    m_lastUpdateStatus(LastUpdateStatus::NOT_SET),
    m_lastUpdateStatusReasonCode(LastUpdateStatusReasonCode::NOT_SET)
{
  *this = result;
}

UpdateFunctionCodeResult& UpdateFunctionCodeResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
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

  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");

  }

  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");

  }

  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");

  }

  if(jsonValue.ValueExists("TracingConfig"))
  {
    m_tracingConfig = jsonValue.GetObject("TracingConfig");

  }

  if(jsonValue.ValueExists("MasterArn"))
  {
    m_masterArn = jsonValue.GetString("MasterArn");

  }

  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");

  }

  if(jsonValue.ValueExists("Layers"))
  {
    Array<JsonView> layersJsonList = jsonValue.GetArray("Layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = StateReasonCodeMapper::GetStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));

  }

  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = LastUpdateStatusMapper::GetLastUpdateStatusForName(jsonValue.GetString("LastUpdateStatus"));

  }

  if(jsonValue.ValueExists("LastUpdateStatusReason"))
  {
    m_lastUpdateStatusReason = jsonValue.GetString("LastUpdateStatusReason");

  }

  if(jsonValue.ValueExists("LastUpdateStatusReasonCode"))
  {
    m_lastUpdateStatusReasonCode = LastUpdateStatusReasonCodeMapper::GetLastUpdateStatusReasonCodeForName(jsonValue.GetString("LastUpdateStatusReasonCode"));

  }



  return *this;
}
