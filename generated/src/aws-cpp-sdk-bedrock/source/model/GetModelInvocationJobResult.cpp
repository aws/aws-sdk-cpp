/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetModelInvocationJobResult.h>
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

GetModelInvocationJobResult::GetModelInvocationJobResult() : 
    m_status(ModelInvocationJobStatus::NOT_SET),
    m_timeoutDurationInHours(0)
{
}

GetModelInvocationJobResult::GetModelInvocationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetModelInvocationJobResult()
{
  *this = result;
}

GetModelInvocationJobResult& GetModelInvocationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");

  }

  if(jsonValue.ValueExists("clientRequestToken"))
  {
    m_clientRequestToken = jsonValue.GetString("clientRequestToken");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ModelInvocationJobStatusMapper::GetModelInvocationJobStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("submitTime"))
  {
    m_submitTime = jsonValue.GetString("submitTime");

  }

  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetString("lastModifiedTime");

  }

  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");

  }

  if(jsonValue.ValueExists("inputDataConfig"))
  {
    m_inputDataConfig = jsonValue.GetObject("inputDataConfig");

  }

  if(jsonValue.ValueExists("outputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("outputDataConfig");

  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

  }

  if(jsonValue.ValueExists("timeoutDurationInHours"))
  {
    m_timeoutDurationInHours = jsonValue.GetInteger("timeoutDurationInHours");

  }

  if(jsonValue.ValueExists("jobExpirationTime"))
  {
    m_jobExpirationTime = jsonValue.GetString("jobExpirationTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
