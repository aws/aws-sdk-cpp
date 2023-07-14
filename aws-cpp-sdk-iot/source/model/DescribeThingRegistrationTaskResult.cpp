/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeThingRegistrationTaskResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeThingRegistrationTaskResult::DescribeThingRegistrationTaskResult() : 
    m_status(Status::NOT_SET),
    m_successCount(0),
    m_failureCount(0),
    m_percentageProgress(0)
{
}

DescribeThingRegistrationTaskResult::DescribeThingRegistrationTaskResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET),
    m_successCount(0),
    m_failureCount(0),
    m_percentageProgress(0)
{
  *this = result;
}

DescribeThingRegistrationTaskResult& DescribeThingRegistrationTaskResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("taskId"))
  {
    m_taskId = jsonValue.GetString("taskId");

  }

  if(jsonValue.ValueExists("creationDate"))
  {
    m_creationDate = jsonValue.GetDouble("creationDate");

  }

  if(jsonValue.ValueExists("lastModifiedDate"))
  {
    m_lastModifiedDate = jsonValue.GetDouble("lastModifiedDate");

  }

  if(jsonValue.ValueExists("templateBody"))
  {
    m_templateBody = jsonValue.GetString("templateBody");

  }

  if(jsonValue.ValueExists("inputFileBucket"))
  {
    m_inputFileBucket = jsonValue.GetString("inputFileBucket");

  }

  if(jsonValue.ValueExists("inputFileKey"))
  {
    m_inputFileKey = jsonValue.GetString("inputFileKey");

  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

  }

  if(jsonValue.ValueExists("successCount"))
  {
    m_successCount = jsonValue.GetInteger("successCount");

  }

  if(jsonValue.ValueExists("failureCount"))
  {
    m_failureCount = jsonValue.GetInteger("failureCount");

  }

  if(jsonValue.ValueExists("percentageProgress"))
  {
    m_percentageProgress = jsonValue.GetInteger("percentageProgress");

  }



  return *this;
}
