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

GetEvaluationJobResult::GetEvaluationJobResult() : 
    m_status(EvaluationJobStatus::NOT_SET),
    m_jobType(EvaluationJobType::NOT_SET)
{
}

GetEvaluationJobResult::GetEvaluationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(EvaluationJobStatus::NOT_SET),
    m_jobType(EvaluationJobType::NOT_SET)
{
  *this = result;
}

GetEvaluationJobResult& GetEvaluationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = EvaluationJobStatusMapper::GetEvaluationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("jobArn"))
  {
    m_jobArn = jsonValue.GetString("jobArn");

  }

  if(jsonValue.ValueExists("jobDescription"))
  {
    m_jobDescription = jsonValue.GetString("jobDescription");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("customerEncryptionKeyId"))
  {
    m_customerEncryptionKeyId = jsonValue.GetString("customerEncryptionKeyId");

  }

  if(jsonValue.ValueExists("jobType"))
  {
    m_jobType = EvaluationJobTypeMapper::GetEvaluationJobTypeForName(jsonValue.GetString("jobType"));

  }

  if(jsonValue.ValueExists("evaluationConfig"))
  {
    m_evaluationConfig = jsonValue.GetObject("evaluationConfig");

  }

  if(jsonValue.ValueExists("inferenceConfig"))
  {
    m_inferenceConfig = jsonValue.GetObject("inferenceConfig");

  }

  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

  }

  if(jsonValue.ValueExists("failureMessages"))
  {
    Aws::Utils::Array<JsonView> failureMessagesJsonList = jsonValue.GetArray("failureMessages");
    for(unsigned failureMessagesIndex = 0; failureMessagesIndex < failureMessagesJsonList.GetLength(); ++failureMessagesIndex)
    {
      m_failureMessages.push_back(failureMessagesJsonList[failureMessagesIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
