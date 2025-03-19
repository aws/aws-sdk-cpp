/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetEvaluationJobResult.h>
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

GetEvaluationJobResult::GetEvaluationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetEvaluationJobResult& GetEvaluationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = EvaluationJobStatusMapper::GetEvaluationJobStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");
    m_jobArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobDescription"))
  {
    m_jobDescription = jsonValue.GetString("jobDescription");
    m_jobDescriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customerEncryptionKeyId"))
  {
    m_customerEncryptionKeyId = jsonValue.GetString("customerEncryptionKeyId");
    m_customerEncryptionKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = EvaluationJobTypeMapper::GetEvaluationJobTypeForName(jsonValue.GetString("jobType"));
    m_jobTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("applicationType"))
  {
    m_applicationType = ApplicationTypeMapper::GetApplicationTypeForName(jsonValue.GetString("applicationType"));
    m_applicationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("evaluationConfig"))
  {
    m_evaluationConfig = jsonValue.GetObject("evaluationConfig");
    m_evaluationConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inferenceConfig"))
  {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");
    m_inferenceConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");
    m_outputDataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureMessages"))
  {
    Aws::Utils::Array<JsonView> failureMessagesJsonList = jsonValue.GetArray("failureMessages");
    for(unsigned failureMessagesIndex = 0; failureMessagesIndex < failureMessagesJsonList.GetLength(); ++failureMessagesIndex)
    {
      m_failureMessages.push_back(failureMessagesJsonList[failureMessagesIndex].AsString());
    }
    m_failureMessagesHasBeenSet = true;
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
