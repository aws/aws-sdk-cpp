/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetModelImportJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetModelImportJobResult::GetModelImportJobResult() : 
    m_status(ModelImportJobStatus::NOT_SET)
{
}

GetModelImportJobResult::GetModelImportJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetModelImportJobResult()
{
  *this = result;
}

GetModelImportJobResult& GetModelImportJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("importedModelName"))
  {
    m_importedModelName = jsonValue.GetString("importedModelName");

  }

  if(jsonValue.ValueExists("importedModelArn"))
  {
    m_importedModelArn = jsonValue.GetString("importedModelArn");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("modelDataSource"))
  {
    m_modelDataSource = jsonValue.GetObject("modelDataSource");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelImportJobStatusMapper::GetModelImportJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("failureMessage"))
  {
    m_failureMessage = jsonValue.GetString("failureMessage");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

  }

  if(jsonValue.ValueExists("importedModelKmsKeyArn"))
  {
    m_importedModelKmsKeyArn = jsonValue.GetString("importedModelKmsKeyArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
