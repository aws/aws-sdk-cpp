/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lambda/model/UpdateFunctionConfigurationResult.h>
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

UpdateFunctionConfigurationResult::UpdateFunctionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateFunctionConfigurationResult& UpdateFunctionConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FunctionName"))
  {
    m_functionName = jsonValue.GetString("FunctionName");
    m_functionNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FunctionArn"))
  {
    m_functionArn = jsonValue.GetString("FunctionArn");
    m_functionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Runtime"))
  {
    m_runtime = RuntimeMapper::GetRuntimeForName(jsonValue.GetString("Runtime"));
    m_runtimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Role"))
  {
    m_role = jsonValue.GetString("Role");
    m_roleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Handler"))
  {
    m_handler = jsonValue.GetString("Handler");
    m_handlerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CodeSize"))
  {
    m_codeSize = jsonValue.GetInt64("CodeSize");
    m_codeSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Timeout"))
  {
    m_timeout = jsonValue.GetInteger("Timeout");
    m_timeoutHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MemorySize"))
  {
    m_memorySize = jsonValue.GetInteger("MemorySize");
    m_memorySizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModified"))
  {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CodeSha256"))
  {
    m_codeSha256 = jsonValue.GetString("CodeSha256");
    m_codeSha256HasBeenSet = true;
  }
  if(jsonValue.ValueExists("Version"))
  {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DeadLetterConfig"))
  {
    m_deadLetterConfig = jsonValue.GetObject("DeadLetterConfig");
    m_deadLetterConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Environment"))
  {
    m_environment = jsonValue.GetObject("Environment");
    m_environmentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KMSKeyArn"))
  {
    m_kMSKeyArn = jsonValue.GetString("KMSKeyArn");
    m_kMSKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TracingConfig"))
  {
    m_tracingConfig = jsonValue.GetObject("TracingConfig");
    m_tracingConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MasterArn"))
  {
    m_masterArn = jsonValue.GetString("MasterArn");
    m_masterArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RevisionId"))
  {
    m_revisionId = jsonValue.GetString("RevisionId");
    m_revisionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Layers"))
  {
    Aws::Utils::Array<JsonView> layersJsonList = jsonValue.GetArray("Layers");
    for(unsigned layersIndex = 0; layersIndex < layersJsonList.GetLength(); ++layersIndex)
    {
      m_layers.push_back(layersJsonList[layersIndex].AsObject());
    }
    m_layersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = StateMapper::GetStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReasonCode"))
  {
    m_stateReasonCode = StateReasonCodeMapper::GetStateReasonCodeForName(jsonValue.GetString("StateReasonCode"));
    m_stateReasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateStatus"))
  {
    m_lastUpdateStatus = LastUpdateStatusMapper::GetLastUpdateStatusForName(jsonValue.GetString("LastUpdateStatus"));
    m_lastUpdateStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateStatusReason"))
  {
    m_lastUpdateStatusReason = jsonValue.GetString("LastUpdateStatusReason");
    m_lastUpdateStatusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdateStatusReasonCode"))
  {
    m_lastUpdateStatusReasonCode = LastUpdateStatusReasonCodeMapper::GetLastUpdateStatusReasonCodeForName(jsonValue.GetString("LastUpdateStatusReasonCode"));
    m_lastUpdateStatusReasonCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSystemConfigs"))
  {
    Aws::Utils::Array<JsonView> fileSystemConfigsJsonList = jsonValue.GetArray("FileSystemConfigs");
    for(unsigned fileSystemConfigsIndex = 0; fileSystemConfigsIndex < fileSystemConfigsJsonList.GetLength(); ++fileSystemConfigsIndex)
    {
      m_fileSystemConfigs.push_back(fileSystemConfigsJsonList[fileSystemConfigsIndex].AsObject());
    }
    m_fileSystemConfigsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageType"))
  {
    m_packageType = PackageTypeMapper::GetPackageTypeForName(jsonValue.GetString("PackageType"));
    m_packageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImageConfigResponse"))
  {
    m_imageConfigResponse = jsonValue.GetObject("ImageConfigResponse");
    m_imageConfigResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SigningProfileVersionArn"))
  {
    m_signingProfileVersionArn = jsonValue.GetString("SigningProfileVersionArn");
    m_signingProfileVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SigningJobArn"))
  {
    m_signingJobArn = jsonValue.GetString("SigningJobArn");
    m_signingJobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Architectures"))
  {
    Aws::Utils::Array<JsonView> architecturesJsonList = jsonValue.GetArray("Architectures");
    for(unsigned architecturesIndex = 0; architecturesIndex < architecturesJsonList.GetLength(); ++architecturesIndex)
    {
      m_architectures.push_back(ArchitectureMapper::GetArchitectureForName(architecturesJsonList[architecturesIndex].AsString()));
    }
    m_architecturesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EphemeralStorage"))
  {
    m_ephemeralStorage = jsonValue.GetObject("EphemeralStorage");
    m_ephemeralStorageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnapStart"))
  {
    m_snapStart = jsonValue.GetObject("SnapStart");
    m_snapStartHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RuntimeVersionConfig"))
  {
    m_runtimeVersionConfig = jsonValue.GetObject("RuntimeVersionConfig");
    m_runtimeVersionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LoggingConfig"))
  {
    m_loggingConfig = jsonValue.GetObject("LoggingConfig");
    m_loggingConfigHasBeenSet = true;
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
